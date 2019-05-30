#include <bits/stdc++.h>
#include "chamada.h"

using namespace std;

int Ambiente[20], memoria[20] = {}, Amb_Temp = rand() % 100 + 10, Tempo = 1;

int main(){

    for(int i = 1; i <= 20; i++){
        Ambiente[i] = rand() % 100 + 1;
    }
    Mostra_Ambiente(0);

        while (Tempo)
        {
        Ang_Intlg();
        Tempo++;
        Ambiente_Troca();
        cout << "Tempo = " << Tempo << endl;
        }

    return 0;
}

            void Ambiente_Troca(){
                if(Tempo % 10 == 0 ){
                Amb_Temp = rand() % 100 + 10;
                system("***VERDE***");
                cout << "Temp_ambiente  = " << Amb_Temp << endl;
                system("ESCREVE");
                }
        }

            void Mostra_Ambiente(int pos){
            system("***Azul***");
            cout << "Temp_ambiente = " << Amb_Temp << endl;
            system("Mostra");
            for(int i = 1; i <= 10; i++){
            if(i == pos){
            system("***Amarelo***");
            cout << "*****Ambiente_Temperatura*** " << i << " - " << Ambiente[i] << "\n";
            system("Mostra");
                }else{
                    system("Mostra");
                    cout << "*****Ambiente***** " << i << " - " << Ambiente[i] << "\n";
                    system("Mostra");
                    }
            }
                    cout << endl;
            }

            void Ang_Intlg(){
                for(int j = 1; j <= 20; j++){
                    if(memoria[j] == 0){
                    if(Ambiente[j] >= Amb_Temp){
                    Ambiente[j] = Amb_Temp - 4;
                    Mostra_Ambiente(j);
                }
                    }else{
                    if(memoria[j] >= Amb_Temp){
                        Ambiente[j] = Amb_Temp - 4;
                        Mostra_Ambiente(j);
                    }
                }
                        memoria[j] = Ambiente[j];
                        system("sleep 1");
                        Tempo++;
                        Ambiente_Troca();
                        cout << "Tempo = " << Tempo << endl;
                }
}
