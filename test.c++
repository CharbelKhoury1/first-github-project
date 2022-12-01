#include<iostream>
using namespace std;

int main(){
int a[9]=[1,2,3,4,2,7,8,8,3];

for(int i=0;i<9;i++){
    for(int j=i+1;j<=9;j++){
        if(a[i]==a[j]){
            cout<<a[i]<<", ";
        }
    }
}
return 0;
}