#include <iostream>
using namespace std;

//int nhap(int t){
//   cin>>t;
//    return t;
//}

long giaithua(int n){
    long kq=1;
    for(int i=2;i<=n;i++){
        kq*=i;
    }
    return kq;
}

int main()
{
    int num;
    long s=1;
    
    cin>>num;
    
    if(num<=20 && num>0){
        
        for(int i=2;i<=num;i++){
            s+= giaithua(i);
        }
        cout<<s<<endl;
    }
    
    return 0;
}