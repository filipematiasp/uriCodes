#include <iostream>

using namespace std;

int main (){
    int i,n,in=0,out=0;
    long long int x;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        if(x>=10 && x<=20){
            in++;
        }else out++;
    }
    cout << in << " in" <<endl << out << " out"<<endl;

    return 0;
}
