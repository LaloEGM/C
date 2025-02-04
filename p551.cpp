#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    
    int j;
    string cadena;
    char c;
    bool bandera;
    int error;
    while(cin>>cadena)
    {
                       std::stack<int> pila;
                       for( j=0;j<cadena.size();j++,error++) /*Lee cada caracter de la cadena */ //for(char c: cadena)
                    {
                            /*cout<<cadena[j] << " ";*/
                            c = cadena[j];
                            bandera = true;
                            error = 0;
                            if(c == '(' && cadena[j+1] =='*')
                             {
                                       j++; 
                                       /*cout << "es (*"<<endl;*/
                                       pila.push(4);
                                       
                             }
                             else if(c == '<')
                                       pila.push(3);
                             else if(c == '{')
                                       pila.push(2);
                             else if(c == '[')
                                       pila.push(1);
                             else if(c == '(')
                                   pila.push(0);
                                   
                            else if(c ==')')
                             {
                                  if(pila.empty())
                                  {
                                                  bandera = false;
                                                  break;
                                  }
                                  if(pila.top()== 0) /*top solamente ve el tope del vector*/
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
                                  if(pila.top()== 1) /*top solamente ve el tope del vector*/
                                  {
                                                     pila.pop(); /*pop lo saca*/
                                  }
                                  else
                                  {
                                      bandera = false;
                                      break;
                                  }
                             }
                              if(c =='}')
                             {
                                  if(pila.empty())
                                  {
                                                  bandera = false;
                                                  break;
                                  }
                                  if(pila.top()== 2) /*top solamente ve el tope del vector*/
                                  {
                                                     pila.pop(); /*pop lo saca*/
                                  }
                                  else
                                  {
                                      bandera = false;
                                      break;
                                  }
                             }
                             if(c =='>')
                             {
                                  if(pila.empty())
                                  {
                                                  bandera = false;
                                                  break;
                                  }
                                  if(pila.top()== 3) /*top solamente ve el tope del vector*/
                                  {
                                                     pila.pop(); /*pop lo saca*/
                                  }
                                  else
                                  {
                                      bandera = false;
                                      break;
                                  }
                             }
                             if(c =='*' && cadena[j+1] ==')')
                             {
                                  if(pila.empty())
                                  {
                                                  bandera = false;
                                                  break;
                                  }
                                  if(pila.top()== 4) /*top solamente ve el tope del vector*/
                                  {
                                                     pila.pop(); /*pop lo saca*/
                                                     j++;
                                  }
                                  else
                                  {
                                      bandera = false;
                                      break;
                                  }
                             }
                             
                             
                     }
                     if(bandera == true && pila.empty()==true)
                    cout<<"YES"<<endl;
                    else
                    cout<<"NO"<<j<<endl;
    }
                    
    return 0;
    }
