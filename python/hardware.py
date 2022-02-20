from product import Product

class Hardware(Product):
    def __init__(self):
        #konstruktor
        self.brand = ""
        self.model = ""
    
    def setBrand(self, brand):
        #mengeset nilai atribut
        self.brand = brand
    
    def getBrand(self):
        #mengembalikan nilai
        return self.brand
    
    def setModel(self, model):
        #mengeset nilai atribut
        self.model = model
    
    def getModel(self):
        #mengembalikan nilai
        return self.model