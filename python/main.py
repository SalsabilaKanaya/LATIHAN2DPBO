from product import Product
from hardware import Hardware
from memory import Memory

#instansiasi
produk = Product()
perangkat = Hardware()
memori = Memory()

#instansiasi product
produk.setIdProduct("AKHDTU28")
produk.setPrice(1500000)

#instansiasi hardware
perangkat.setIdProduct("AKHDTU28")
perangkat.setPrice(1500000)
perangkat.setBrand("OPPO")
perangkat.setModel("OPPOA37")

#instansiasi memory
memori.setIdProduct("AKHDTU28")
memori.setPrice(1500000)
memori.setBrand("OPPO")
memori.setModel("OPPOA37")
memori.setFrequency("110Hz")
memori.setMemorySize("16GB")
memori.setSupportsCuda("True")

	
# O U P U T #
print("---------------------------------------------")
print("Id Product     :" + str(produk.getIdProduct()))
print("Price          :" + str(produk.getPrice()))

print("---------------------------------------------")
print("Id Product     :" + str(perangkat.getIdProduct()))
print("Price          :" + str(perangkat.getPrice()))
print("Brand          :" + str(perangkat.getBrand()))
print("Model          :" + str(perangkat.getModel()))

print("---------------------------------------------")
print("Id Product     :" + str(memori.getIdProduct()))
print("Price          :" + str(memori.getPrice()))
print("Brand          :" + str(memori.getBrand()))
print("Model          :" + str(memori.getModel()))
print("Frequency      :" + str(memori.getFrequency()))
print("MemorySize     :" + str(memori.getMemorySize()))
print("Supports Cuda  :" + str(memori.getSupportsCuda()))