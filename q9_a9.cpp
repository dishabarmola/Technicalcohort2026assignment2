#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a%2!=0){
        for(int i= 1;i<=a;i++){
            for(int j=1;j<=(i+a-1);j++){
                if(j==((a-i)+1)){
                    cout<<" * ";
                    
                }
                else if(i==j){
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
