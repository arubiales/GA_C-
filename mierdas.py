import pandas as pd

df = pd.read_pickle('/home/rubiales/Desktop/Projects/MTSPTW/MTSPTW/MTSPTW/Data/Data_test/df_costs_to_GA.pkl')

df.to_csv('/home/rubiales/Desktop/Projects/GA_C++/datos_ga.csv', sep=';')


df = pd.DataFrame({'A': ['x', 'y', 'x'], 'B': ['z', 'u', 'z'],
                  'C': ['1', '2', '3'],
                  'D':['j', 'l', 'j']})



pd.get_dummies(df, columns=['A', 'B', 'D'])



from scipy.spatial.distance import euclidean, mahalanobis, minkowski, cosine, cityblock

import numpy as np

ordenadores_df = pd.DataFrame({'RAM':[16, 8, 12],
                               'Nucleos_procesador':[8, 4, 8],
                               'Horas_autonomiaa':[8, 12, 7]},
                               index=['A','B', 'C'])


def distancia_manhattan(a, b):
    return sum(abs(a - b))

def distancia_euclidea(a, b):
    return np.sqrt(sum((abs(a) - abs(b))**2))

def distancia_minkowski(a, b, n):

    return (sum(abs(a) - abs(b))**n)**(1/n)



distancias_manhattan = []

minkowski(ordenadores_df.iloc[0], ordenadores_df.iloc[1],1)

print(distancia_euclidea(ordenadores_df.iloc[0], ordenadores_df.iloc[1]))
print(distancia_minkowski(ordenadores_df.iloc[0], ordenadores_df.iloc[1],))
print(distancia_manhattan(ordenadores_df.iloc[0], ordenadores_df.iloc[1]))
print(euclidean(ordenadores_df.iloc[0], ordenadores_df.iloc[1]))
print(distancia_manhattan(ordenadores_df.iloc[0], ordenadores_df.iloc[2]))
print(distancia_euclidea(ordenadores_df.iloc[0], ordenadores_df.iloc[2]))
print(distancia_manhattan(ordenadores_df.iloc[1], ordenadores_df.iloc[2]))
print(distancia_euclidea(ordenadores_df.iloc[1], ordenadores_df.iloc[2]))
print(euclidean(ordenadores_df.iloc[1], ordenadores_df.iloc[2]))






{'euclidea':distancia_euclidea(ordenadores_df.iloc[0]ordenadores_df.iloc[1])}
distancia_euclidea(ordenadores_df.iloc[0], ordenadores_df.iloc[2]
distancia_euclidea(ordenadores_df.iloc[1], ordenadores_df.iloc[2]


euclidean(ordenadores_df.iloc[0], ordenadores_df.iloc[1])
mahalanobis([2, 2, 3], [6, 6, 7])
minkowski([2, 2, 3], [6, 6, 7])
cosine([2, 2, 3], [6, 6, 7])
cityblock(ordenadores_df.iloc[0], ordenadores_df.iloc[1])
cityblock(ordenadores_df.icl)

9.8/16
4.1/5








#OTRA COSA
#_________________________________________

class Padre:

    def __init__(self, nombre, apellido, edad):
        self.nombre = nombre
        self.apellido = apellido
        self.edad = edad

    
    def set_name(self, n):
        self.nombre = n

    def print_name(self):
        return self.nombre

    def set_edad(self, n):
        self.edad = n

    def print_edad(self):
        return self.nombre


padre = Padre('Alberto', 'Gonzalez', 56)



import re

nombre = r"Bob" + r'\n'

nombre = nombre.replace('\\', '\\\\')

nombre


print(nombre)

import numpy as np
from scipy import stats

datos = np.array([ 0.79,  0.07, 4.33,  0.43,  0.78,  0.80,
               0.19,  0.63,  0.65,  0.10,  0.05, 300.])

i = datos[2]

def z_score(datos, umbral):
    datos_limpios = []
    media = np.mean(datos)
    desviacion_tipica = np.std(datos)

    for i in datos:
        dato = abs(abs(i)- abs(media))/desviacion_tipica

        if dato < umbral:
            datos_limpios.append(i)

    return np.array(datos_limpios)




z_score(datos, 3)
        

# OTRA COSA
#__________________________________________________

import numpy as np
import pandas as pd


a = pd.DataFrame({'col1':[1,5,23,5,67,8,3],
                  'col2':[2,np.nan,34,np.nan,5,4,5],
                  'col3':[1,2,3,5,6,7,8]})


a.col2 = a.col2.fillna(int(0))
a.col2 = a.col2.astype(float)


np.array([1,2,3,4,5]).shape