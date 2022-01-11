#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <functional>

using namespace std;

// vector <string> id_origin_aux, id_destinity_aux, origin, destinity, secs_aux, hours_aux;
// vector <double> lat_origin, lon_origin, lat_destinity, lon_destinity, kilometers, cost, hours;
// vector <int> cluster, meters, id_origin, id_destinity, secs, real_route;
// string aux_reader, line;


// float _distance(vector<int> route, double max_journey, double food_price, int people){
//     vector<double> aux_cost, aux_time;
//     double sum_hours = 0, sum_cost= 0;
//     int vueltas_a_casa = 0;

//     //cojemos el coste para cada número y el siguiente
//     for(int i=0; i<route.size(); i++){
//         for(int j=0; j<id_origin.size(); j++){
//             if((route[i] == id_origin[j]) && (i != route.size()) && (route[i+1] == id_destinity[j])){
//                 aux_cost.push_back(cost[j]);
//                 aux_time.push_back(hours[j]);
//                 sum_hours += hours[j];
//                 real_route.push_back(route[i]);                
//                 if(sum_hours > max_journey){
//                     aux_cost.pop_back();
//                     sum_hours = 0;
//                     vueltas_a_casa +=1;
//                     real_route.push_back(route[0]);
//                     for(int r =0; r<id_origin.size(); r++){
//                         if((id_origin[r] == route[0]) && (id_destinity[r] == route[i])){
//                             aux_cost.push_back(cost[r]);
//                         }
//                         else if((id_origin[r] == route[0]) && (id_destinity[r] == route[i+1])){
//                             // aux_cost.pop_back();
//                             aux_cost.push_back(cost[r]);
//                         }
//                     }
//                 }
//             }
//         }
//     }
    
//     //Cojemos el coste para la vuelta a casa
//     for(int i=0; i<id_origin.size(); i++){
//         if(id_origin[i] == route[0] && id_destinity[i] == route[route.size()-1]){
//             aux_cost.push_back(cost[i]);
//             real_route.push_back(id_destinity[i]);
//             real_route.push_back(route[0]);
//         }
//     }

//     // Sumamos el coste total de esta ruta
//     for(int i=0; i<aux_cost.size(); i++){
//         sum_cost +=aux_cost[i];
//     }

//     sum_cost += vueltas_a_casa * people;

//     return sum_cost;
// }



// void read_csv(string path){

//     ifstream file;

//     file.open(path, ios::in);

//     if(file.is_open()){
//         ;
//     }
//     else{
//         throw invalid_argument("File not opened");
//     }

//     int counter = 0;
//     while(getline(file, line)){
//         stringstream ss(line);

//         getline(ss, aux_reader, ';');
//         // cout<<"id_origin: "<<aux_reader<<endl;
//         id_origin_aux.push_back(aux_reader);

//         getline(ss, aux_reader, ';');
//         // cout<<"id_destinity: "<<aux_reader<<endl;
//         id_destinity_aux.push_back(aux_reader);

//         getline(ss, aux_reader, ';');
//         // cout<<"lat_origi: "<<aux_reader<<endl;
//         lat_origin.push_back(stod(aux_reader));

//         getline(ss, aux_reader, ';');
//         // cout<<"lon_origin: "<<aux_reader<<endl;
//         lon_origin.push_back(stod(aux_reader));

//         getline(ss, aux_reader, ';');
//         // cout<<"lat_destinity: "<<aux_reader<<endl;
//         lat_destinity.push_back(stod(aux_reader));

//         getline(ss, aux_reader, ';');
//         // cout<<"lon_destinity: "<<aux_reader<<endl;
//         lon_destinity.push_back(stod(aux_reader));

//         getline(ss, aux_reader, ';');
//         // cout<<"cluster: "<<aux_reader<<endl;
//         cluster.push_back(stoi(aux_reader));

//         getline(ss, aux_reader, ';');
//         // cout<<"origin: "<<aux_reader<<endl;
//         origin.push_back(aux_reader);
        
//         getline(ss, aux_reader, ';');
//         // cout<<"destinity: "<<aux_reader<<endl;
//         destinity.push_back(aux_reader);

//         getline(ss, aux_reader, ';');
//         // cout<<"meters: "<<aux_reader<<endl;
//         meters.push_back(stoi(aux_reader));

//         getline(ss, aux_reader, ';');
//         // cout<<"secs: "<<aux_reader<<endl;
//         secs_aux.push_back(aux_reader);

//         getline(ss, aux_reader, ';');
//         // cout<<"hours: "<<aux_reader<<endl;
//         hours_aux.push_back(aux_reader);

//         getline(ss, aux_reader, ';');
//         // cout<<"kilometers: "<<aux_reader<<endl;
//         kilometers.push_back(stod(aux_reader));

//         getline(ss, aux_reader, ' ');
//         // cout<<"cost: "<<aux_reader<<endl;
//         cost.push_back(stod(aux_reader));
//     };


//     for(int i=0; i<id_origin_aux.size(); i++){
//         id_origin.push_back(stoi(id_origin_aux[i]));
//         id_destinity.push_back(stoi(id_destinity_aux[i]));
//         secs.push_back(stoi(secs_aux[i]));
//         hours.push_back(stod(hours_aux[i]));
//     }

// }
