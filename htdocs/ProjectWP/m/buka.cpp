//header file
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//deklarasi struct sebuah tree
struct Node {
	int data;
	Node *kiri;
	Node *kanan;
};

//fungsi untuk menambahkan node baru
void tambah(Node **root, int newnode)
{
				//jika root masih kosong
				if((*root)==NULL)
				{
							//Pembuatan node baru
							Node *baru;

							//pengalokasian memori dari node yang telah dibuat
							baru =new Node;
							//inisialisasi aval node yang baru dibuat
							baru->data = newnode;
							baru->kiri = NULL;
							baru->kanan = NULL;
							(*root) = baru;
							(*root)->kiri = NULL;
							(*root)->kanan = NULL;
							printf("Data Bertambah!");
				}

				//jika data yang akan dimasukkan lebih kecil dari pada elemen root,maka diletakkan di node sebelah kiri.
				else if(newnode<(*root)->data)
							tambah(&(*root)->kiri, newnode);
				//jika data yang akan dimasukkan lebih besar dari pada elemen root,maka diletakkan di node sebelah kanan.
				else if(newnode>(*root)->data)
							tambah(&(*root)->kanan, newnode);
				//jika data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
				else if(newnode == (*root)->data)
							printf("data sudah ada" );

}

//fungsi yang digunakan untuk mencetak tree secara preOrder
void preOrder(Node *root)
{
			if (root!=NULL){
						printf("%d ",root->data );
						preOrder(root->kiri);
						preOrder(root->kanan);
			}

}
//fungsi yang digunakan untuk mencetak tree secara inOrder
void inOrder(Node *root)
{
			if (root!=NULL){
						inOrder(root->kiri);
						printf("%d ",root->data );
						inOrder(root->kanan);
			}

}
//fungsi yang digunakan untuk mencetak tree secara postOrder
void postOrder(Node *root)
{
			if (root != NULL){
						postOrder(root->kiri);
						postOrder(root->kanan);
						printf("%d ", root->data );
			}

}

//fungsi utama
int main()
{
			//deklarasi variabel
			int pil, data; //c;
			Node *tree ; //*t;
			tree = NULL; // inisialisasi node pohom

			// perulangan do while
			do
			{
							system("cls");// bersihkan layar
							printf("\n====================");
							printf("\n   PROGRAM TREE C++	");
							printf("\n====================");
							printf("\nMenu");
							printf("\n----\n");
							printf("1. Tambah Data\n");
							printf("2. Lihat Pre-order\n");
							printf("3. Lihat In-Order\n");
							printf("4. Lihat Post-Order\n");
							printf("5. Exit\n");
							printf("Pilihan	: ");
							scanf("%d",&pil);
							switch (pil)
							{
								//Jika pil 1
								case 1:
											printf("\nINPUT : ");
											printf("\n--------");
											printf("\nData Baru  : ");
											scanf("%d", &data );
											//panggil fungsi untuk menambah node yang berisi data pada tree
											tambah(&tree, data);
											break;

								//Jika pil 2
								case 2:
											printf("\nOUTPUT PRE ORDER : ");
											printf("\n-----------------\n");
											if (tree!=NULL)
															//panggil fungsi untuk menambah node yang berisi data secara PreOrder
															preOrder(tree);
											else
															printf("Masih Kosong!" );
											break;


								//Jika pil  3
								case 3:
											printf("\nOUTPUT IN ORDER : ");
											printf("\n-----------------\n");
											if (tree!=NULL)
															//panggil fungsi untuk menambah node yang berisi data secara InOrder
															inOrder(tree);
											else
															printf("Masih Kosong!" );
											break;
								//Jika pil bernilai 3
								case 4:
											printf("\nOUTPUT POST ORDER : ");
											printf("\n-----------------\n");
											if (tree!=NULL)
															//panggil fungsi untuk menambah node yang berisi data secara postOrder
															postOrder(tree);
											else
															printf("Masih Kosong!" );
											break;
							}
							_getch();
			}while (pil != 5);	//akan diulang jika input tidak sama dengan 5
			return EXIT_FAILURE;
}
