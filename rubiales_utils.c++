//ESTO ES UN REPOSITORIO DE FUNCIONES QUE A mí me parecen útiles y que creo yo
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <iterator>
#include <functional>
#include "rubiales_utils.h"

using namespace std;

//SHUFFLE DE UN VECTOR
//-------------------------------------------------------------------------------------------

vector<int> shuffle_vect(vector<int> vect){
    
    vector<int> new_vect;
    new_vect = vect;

    int size = vect.size();

    for(int i=0; i<size -1; i++){
        //Inicializamos una semilla aleatoria
        srand(time(NULL));
        //generaamos números aleatorios
        int j= i+rand() % (size-i);
        swap(new_vect[i], new_vect[j]);
    }

    return new_vect;
}



//MOSTRAR VECTORES
//-------------------------------------------------------------------------------------------
void show_vector_int(vector<int> vect){
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<"\n";
}


void show_vector_str(vector<string> vect){
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<"\n";
}

void show_vector_float(vector<float> vect){
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<"\n";
}

void show_vector_double(vector<double> vect){
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<"\n";
}


//MOSTRAMOS UNA MATRIZ
vector<vector<int>> show_matrix(vector<vector<int>> matrix){

    for(vector<int> vect:matrix){
        for(int n:vect){
            cout<<n<<" ";
        }
        cout<<"\n";
    }
}