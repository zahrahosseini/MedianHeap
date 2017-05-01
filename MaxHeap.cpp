#include "MaxHeap.h"
#include <iostream.h>
using namespace std;
MaxHeap::MaxHeap(int sz)
{
    MaxSize=sz;
    n=0;
    heap=new int[MaxSize+1];
    //ctor
};
int MaxHeap::ReadMax(){
    return heap[1];
    }
void  MaxHeap::Insert(const int & x)
{
    if(n==MaxSize)
        {
        IsFull();
        return ;
        }
    n++;
    int i=n;
    for( i=n;1;)
    {
        if(i==1) break;
        if(x<heap[i/2])
        break;
        heap[i]=heap[i/2];
        i/=2;
    }
    heap[i]=x;
};
bool MaxHeap::IsFull(){
    cout<<"FULL";
    return 1;
    };
bool MaxHeap::IsEmpty(){
    cout<<"EMPTY";
    return 1;
    };
int*  MaxHeap::Delete(int& x){
    if(!n)
    {
        IsEmpty();
        return 0;
        }
        x=heap[1];
        int k=heap[n];
        n--;
        int i=1;
        int j=2;
        if(j>n)
        {
            for(i=1,j=2;j<n;)
            {
                if(j<n) if(heap[j]<heap[j+1]) j++;
                if(k>=heap[j]) break;
                heap[i]=heap[j];
                i=j;
                j*=2;
                }
                heap[i]=k;
        }
        else
        {
             if(heap[j]>k)
             {
                heap[i]=heap[j];
                heap[j]=k;
             }
             else
             {
                 heap[i]=k;
                 }
            }
            return &x;
    };
