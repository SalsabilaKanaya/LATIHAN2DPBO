from hardware import Hardware

class Memory(Hardware):
    def __init__(self):
        #konstruktor
        self.frequency = ""
        self.memorySize = ""
        self.supportsCuda = ""
    
    def setFrequency(self, frequency):
        #mengeset nilai atribut
        self.frequency = frequency
    
    def getFrequency(self):
        #mengembalikan nilai
        return self.frequency
    
    def setMemorySize(self, memorySize):
        #mengeset nilai atribut
        self.memorySize = memorySize
    
    def getMemorySize(self):
        #mengembalikan nilai
        return self.memorySize
    
    def setSupportsCuda(self, supportsCuda):
        #mengeset nilai atribut
        self.supportsCuda = supportsCuda
    
    def getSupportsCuda(self):
        #mengembalikan nilai
        return self.supportsCuda