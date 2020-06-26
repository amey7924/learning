#include <stdio.h>


float simplei(int p, int n){

    float result = (p*n);
    return result;
}

int main(){
    float amey = simplei(10000, 3);
    float akash = simplei(13000, 5);
    printf("amey = %f\nakash = %f", amey, akash);
}


