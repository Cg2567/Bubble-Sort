//#include<iostream.h>
#include<stdio.h>
#include<bits/stdc++.h>
int main()

{
    int temp = 0;
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = rand()%100;
    }
    for(int i = 0;i<10;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    for(int i = 0;i<9;i++)
    {
        for(int j = 0 ; j<9 ;j++)
        {
             if(arr[j]>arr[j+1])
             {
                 temp=arr[j];
                 arr[j] = arr[j+1] ;
                 arr[j+1]= temp;
             }
        }
    }
    for(int i = 0;i<10;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}
