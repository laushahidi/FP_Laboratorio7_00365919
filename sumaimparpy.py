def rango():
  a=int(input("\nInicio de rango " + str(i+1) + ": "))
  b=int(input("Fin de rango " + str(i+1) + ": "))
  suma=0
  if a % 2 != 0:
    inicio=a
  else:
    inicio=a+1
  for j in range(inicio,b+1,2):
    suma+=j
  print("Caso" + str(i+1) + ": " + str(suma))
  print("")

casos=int(input("Numero de casos de prueba: "))
for i in range (0, casos):
  rango()