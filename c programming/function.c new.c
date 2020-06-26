#include <stdio.h>


float simplei(int p, int n, float r){

    float result = (p*n*r) * 100;
    return result;
}

int main(){
    float amey = simplei(10000, 3, 8.40);
    float akash = simplei(13000, 5, 7.50);
    printf("amey interest = %f\nakash interest = %f", amey, akash);
}


