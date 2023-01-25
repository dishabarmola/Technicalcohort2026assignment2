#include <iostream>
using namespace std;

int main()
{
    int a,k;
    cin>>a;
    if(a%2!=0){
            k= (a+1)/2;
            for(int i = 1; i<=a;i++){
                if(i<=k){
                    for(int j= 1;j<=a;j++){
                        if(j==(k-i+1)||j==(k+i-1)){
                            cout<<" * ";
                            
                        }
                        else{
                            cout<<"   ";
                            
                        }
                        
                    }
                    
                }
                else{
                    for(int m=1;m<=a;m++){
                        if(m==(i-k+1)||m==((2*a)+1-k-i)){
                            cout<<" * ";
                            
                        }
                        else{
                            cout<<"   ";
                            
                        }
                    }
                }
                cout<<endl;
        
            }
    

    }   
    

    return 0;
}
