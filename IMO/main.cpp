#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// second problem
int factorial(int num){
    if(num == 0){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

bool isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    for(int a = 0; a < 20; a++){
        for(int b = 0; b < 20; b++){
            for(int i = 2; i < 20 ; i++){
                if(isPrime(i)){
                    if(pow(a,i) == factorial(b) + i){
                        cout << "a:" << a << " ";
                        cout << "b:" << b << " ";
                        cout << "p:" << i << endl;
                    }
                }
            }
        }
    }
}
