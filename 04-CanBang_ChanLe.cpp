#include <iostream>
using namespace std;

bool check_CB(int num, int n){
    int count_chan=0,count_le=0;
    
    if(n%2!=0 || n==0) return false;
    else {
        while(num>0){
            if((num%10) % 2 ==0) count_chan++; else count_le++;
            num/=10;
        }
    }
    if(count_le==count_chan) return true; else return false;
}

int main()
{
    int n,max=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        max*=10;
    }
    
    for(int i=1;i<max;i++){
        if(check_CB(i,n)) cout<<i<<"\t";
    }
    
    return 0;
}