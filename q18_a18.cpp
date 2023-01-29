#include <iostream>
using namespace std;
int main(){
  int a,k;
  cin>>a;
  if(a%2!=0){
    k= (a+1)/2;
    for(int i =1;i<=k;i++){
      for(int j =1;j<=a;j++){
        if(i==1){
          cout<<" * ";
        }
        else if(i==k){
          if(j==k){
            cout<<" * ";
          }
          else{
            cout<<"   ";
          }
        }
        else if(i==j||(i+j)==(a+1)){
          cout<<" * ";
          
        }
        else{
          cout<<"   ";
        }
      }
      cout<<endl;
      
    }
    for(int m = k+1;m<=a;m++){
        for(int y= 1;y<=a;y++){
            if(y>= ((2*k)-m)&&y<=m){
                cout<<" * ";
        
            }
            else{
                cout<<"   ";
            }
        }
        
      
      cout<<endl;
    }
  }
  return 0;
}
