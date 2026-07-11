#include <iostream>
using namespace std;

int nhap(int t){
    cin>>t;
    return t;
}

int main()
{
    int t,num,s;
    t=nhap(t);
    
    while(t--){
        cin>>num;
        s=0;
        for(int i=1;i<=num;i++){
            s+=i;
        }
        cout<<s<<endl;
    }
    
    return 0;
}