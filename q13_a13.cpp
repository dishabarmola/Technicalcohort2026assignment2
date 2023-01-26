#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a][a];
    for(int i =1;i<=a;i++){
        for(int j=1;j<=i;j++){
            
            if(i==j||j==1){
                arr[i][j]=1;
            }
            else{
                arr[i][j]= arr[i-1][j-1]+arr[i-1][j];
            }
             cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
