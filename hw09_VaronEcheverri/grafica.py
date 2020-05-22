import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("datos.txt", delimiter=',')

X = datos[:,0]
Y = datos[:,1]

fig = plt.figure(figsize=(10,10))
plt.xlabel("Posición [m]")
plt.ylabel("Tiempo [s]")
plt.title("Gráfica del movimiento acelerado")
plt.scatter(X,Y, s=8, color='red')
plt.savefig("grafico.pdf")