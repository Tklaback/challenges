#include "functions.h"

string reverse(string s){ 
    if (s.size() < 2){ 
    return s; 
    } 
    return reverse(s.substr(1, s.size()-1)) + s[0]; 
}

int getMax(int first, int sec, int third){
    int largest;
    if (first > sec)
        largest = first;
    else largest = sec;
    if (third > largest)
        largest = third;
    return largest;
}
int fact(int num){
    if (num == 1)
        return num;
    return num * fact(num-1);
}

int fib(int num){
    if (num == 1 || num == 0)
        return num;
    return fib(num-1) + fib(num-2);
}
