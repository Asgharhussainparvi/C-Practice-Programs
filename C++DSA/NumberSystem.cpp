#include <iostream>
using namespace std;

//Decimal to Binary
// int DecToBin(int Dec){
//         int ans = 0;
//         int pow = 1;
// while (Dec > 0)
// {
//     int rem = Dec%2 ;
//     Dec = Dec/2;
//     ans+=(rem*pow);
//     pow *= 10 ;
// }
// return ans;
// }

// Binary to decimal

int BinToDec(int Bin){
    int ans = 0;
    int pow = 1;
while(Bin>0){
    int rem = Bin%10;
    ans += (rem*pow);
    Bin /=10;
    pow*=2;

}
return ans;
}

int main(){
    // int Dec = 50;
    // for ( int i =0 ; i <10 ; i++){
    //     cout<< DecToBin(i) <<endl;
    // }
    int bin = 1010;
    cout << BinToDec(bin) << endl ;

    return 0;
}

