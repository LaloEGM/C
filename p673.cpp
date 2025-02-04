#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    
    int interaccion, i,j;
    string cadena;
    cin>>interaccion; 
    bool bandera;
    char c;
    
    for(i=0;i<interaccion;i++){ /*while(interacciones <= 2 ) */
                    cin>>cadena;
                    bandera = true;
                    std::stack<int> pila;  
                    char c;
                    for( j=0;j<cadena.size();j++) /*Lee cada caracter de la cadena */ //for(char c: cadena)
                    {
                         c=cadena[j];
                         
                             if(c == '(' || c == '[')
                             {
                                       pila.push(c); /*push meto valor a la pila*/ 
                             }
                             if(c ==')')
                             {
                                  if(pila.empty()) /*Verifica que sila la pila o vector tiene elementos*/
                                  {
                                                  bandera = false;
                                                  break;
                                  }
                                  if(pila.top()=='(') /*top solamente ve el tope del vector*/
                                  {
                                                     pila.pop(); /*pop lo saca*/
                                  }
                                  else
                                  {
                                      bandera = false;
                                      break;
                                  }
                             }
                             if(c ==']')
                             {
                                  if(pila.empty())
                                  {
                                                  bandera = false;
                                                  break;
                                  }
                                  if(pila.top()=='[')
                                  {
                                                     pila.pop();
                                  }
                                  else
                                  {
                                      bandera = false;
                                      break;
                                  }
                             }
                    }
                    if(bandera == true && pila.empty()==true)
                    cout<<"Yes"<<endl;
                    else
                    cout<<"No"<<endl;
    }
    
    
    
        
    return 0;
    }
