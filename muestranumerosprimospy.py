def primos(a,b):
  for i in range(a,b+1):
    cont=0
    for j in range(1,b+1):
      if i % j == 0:
        cont=cont+1
    if cont == 2:
      print(i, end=" ")


a=int(input("Inicio de rango: "))
b=int(input("Fin de rango: "))
print("Numeros primos entre el rango (" + str(a) + "," + str(b) + "):")
primos(a,b)