def comparar():
  print("\n" + str(i+1) + ") Pareja de números a comparar: ")
  a=int(input("Primer numero: "))
  b=int(input("Segundo numero: "))
  if a > b:
    print(str(a) + " > " + str(b))
  elif a < b:
    print(str(a) + " < " + str(b))
  else: 
    print(str(a) + " = " + str(b))

casos=int(input("Numero de casos a evaluar: "))
for i in range(0, casos):
  comparar()