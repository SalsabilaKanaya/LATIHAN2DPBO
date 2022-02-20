class Product:
    def __init__(self):
        #konstruktor
        self.idProduct = ""
        self.price = 0
    
    def setIdProduct(self, idProduct):
        #mengeset nilai atribut
        self.idProduct = idProduct
    
    def getIdProduct(self):
        #mengembalikan nilai
        return self.idProduct
    
    def setPrice(self, price):
        #mengeset nilai atribut
        self.price = price
    
    def getPrice(self):
        #mengembalikan nilai
        return self.price