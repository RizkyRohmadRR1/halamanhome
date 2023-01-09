class Node:
    def __init__(self,value): #method yang pertama kali akan dieksekusi/dijalankan
        self.data = value     #ketika class dibuat
        self.left = None      #pointer kiri
        self.right= None      #pointer kanan

    def insert(self,value):   #input data
            #jika data lebih kecil
            if value < self.data:
                if self.left is None:
                    self.left=Node(value)
                    print("Data Bertambah !")
                else:
                    self.left.insert(value)
            #jika data lebih besar
            elif value > self.data:
                if self.right is None:
                    self.right=Node(value)
                    print("Data Bertambah !")
                else:
                    self.right.insert(value)
            else:
                print("Data Sudah ada")



    def printpreorder(self): #Melihat hasil secara Pre Order
        if self.data != None :
            print(self.data)
        if self.left != None :
            self.left.printpreorder()
        if self.right != None :
            self.right.printpreorder()

    def printinorder(self): #Melihat hasil secara In Order
        if self.left != None :
            self.left.printinorder()
        if self.data != None :
            print(self.data)
        if self.right != None :
            self.right.printinorder()

    def printpostorder(self):   #Melihat hasil secara Post Order
        if self.left != None :
            self.left.printpostorder()
        if self.right != None :
            self.right.printpostorder()
        if self.data != None :
            print(self.data)




a=0
while a==0:
    print("=============================")
    print("     PROGRAM TREE PYTHON     ")
    print("=============================")
    print("Menu")
    print("1.   Input Data Awal")
    print("2.   Input Data ")
    print("3.   Lihat Pre Order")
    print("4.   Lihat In Order")
    print("5.   Lihat Post Order")
    print("6.   Exit")
    print("-----------------------------")
    pilih = int(input("Pilihan  :"))
    print("\n")


    if pilih  == 1:
        root = Node(int(input("Masukkan Data Awal :")))

    elif pilih == 2:
        b=0
        while b == 0 :
            print("\n")
            root.insert(int(input("Masukkan Data :")))
            pil = input("Tambah Data Lagi  ? [Y/T]:")
            if pil == "t" or  pil == "T":
               b=1
            print("\n")


    elif pilih ==3:
        print("=============================")
        print("     HASIL PRE-ORDER    ")
        print("=============================")
        root.printpreorder()
        print("\n")




    elif pilih ==4:
        print("=============================")
        print("     HASIL IN-ORDER    ")
        print("=============================")
        root.printinorder()
        print("\n")


    elif pilih ==5:
        print("=============================")
        print("     HASIL POST-ORDER    ")
        print("=============================")
        root.printpostorder()
        print("\n")


    else:
        exit()
