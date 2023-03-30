//
// Created by dongju-kim on 23. 3. 8.
//
#include <iostream>
#include <stdio.h>
#include <algorithm>


int main(){
    int n;
    int input;
    std::cin>>n;
    int* array =new int[n]; 

    for(int i=0;i<n;++i)
    {
       scanf("%d",&input);
       array[i]=input;
    }

    int minval=array[0];
    int maxval=array[0];

    for(int i=0;i<n;++i)
    {
        minval = std::min(minval,array[i]);
        maxval = std::max(maxval,array[i]);
    }
    std::cout<<minval<<" "<<maxval<<std::endl;

    delete[] array;

    return 0;
