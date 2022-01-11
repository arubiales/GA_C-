#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "utils.h"

using namespace std;

vector <string> id_origin, id_destinity, origin, destinity, secs, hours;
vector <double> lat_origin, lon_origin, lat_destinity, lon_destinity, kilometers, cost;
vector <int> cluster, meters;
string aux_reader, line;


void read_csv(string path){
    ifstream file;

    file.open(path, ios::in);

    if(file.is_open()){
        ;
    }
    else{
        throw invalid_argument("File not opened");
    }

    int counter = 0;
    while(getline(file, line)){
        stringstream ss(line);
        getline(ss, aux_reader, ';');
        // cout<<"id_origin: "<<aux_reader<<endl;
        id_origin.push_back(aux_reader);

        getline(ss, aux_reader, ';');
        // cout<<"id_destinity: "<<aux_reader<<endl;
        id_destinity.push_back(aux_reader);

        getline(ss, aux_reader, ';');
        // cout<<"lat_origi: "<<aux_reader<<endl;
        lat_origin.push_back(stod(aux_reader));

        getline(ss, aux_reader, ';');
        // cout<<"lon_origin: "<<aux_reader<<endl;
        lon_origin.push_back(stod(aux_reader));

        getline(ss, aux_reader, ';');
        // cout<<"lat_destinity: "<<aux_reader<<endl;
        lat_destinity.push_back(stod(aux_reader));

        getline(ss, aux_reader, ';');
        // cout<<"lon_destinity: "<<aux_reader<<endl;
        lon_destinity.push_back(stod(aux_reader));

        getline(ss, aux_reader, ';');
        // cout<<"cluster: "<<aux_reader<<endl;
        cluster.push_back(stoi(aux_reader));

        getline(ss, aux_reader, ';');
        // cout<<"origin: "<<aux_reader<<endl;
        origin.push_back(aux_reader);
        
        getline(ss, aux_reader, ';');
        // cout<<"destinity: "<<aux_reader<<endl;
        destinity.push_back(aux_reader);

        getline(ss, aux_reader, ';');
        // cout<<"meters: "<<aux_reader<<endl;
        meters.push_back(stoi(aux_reader));

        getline(ss, aux_reader, ';');
        // cout<<"secs: "<<aux_reader<<endl;
        secs.push_back(aux_reader);

        getline(ss, aux_reader, ';');
        // cout<<"hours: "<<aux_reader<<endl;
        hours.push_back(aux_reader);

        getline(ss, aux_reader, ';');
        // cout<<"kilometers: "<<aux_reader<<endl;
        kilometers.push_back(stod(aux_reader));

        getline(ss, aux_reader, ' ');
        // cout<<"cost: "<<aux_reader<<endl;
        cost.push_back(stod(aux_reader));
    };
}

