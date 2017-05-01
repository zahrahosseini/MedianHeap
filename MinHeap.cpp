#include "MinHeap.h"

#include <iostream.h>
using namespace std;
MinHeap::MinHeap()
{
    //ctor
};
MinHeap::MinHeap(int sz)
{
    MaxSize=sz;
    n=0;
    heap=new int[MaxSize+1];
    };
void  MinHeap::Insert(const int & x)
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
        if(x>heap[i/2])
        break;
        heap[i]=heap[i/2];
        i/=2;
    }
    heap[i]=x;
      };
int* MinHeap::Delete(int & x)
      { if(n==0)
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
            if(j<n) if(heap[j]>heap[j+1]) j++;
            if(k<=heap[j]) {break; cout<<"BREAKED";}
            heap[i]=heap[j];
            cout<<"heap[1]";
            i=j;
            j*=2;
            }
            heap[i]=k;
        }
        else
            {
                if(heap[j]<k)
                {
                heap[i]=heap[j];
                heap[j]=k;
                }
                else
                {
                    heap[i]=k;
                    }
                }
            return &x;};
      bool MinHeap::IsEmpty(){
              cout<<"EMPTY";
            return 1;
        };
      bool MinHeap::IsFull(){
          cout<<"FULL";
        return 1;
          };
      int MinHeap::ReadMin(){if(n>0)return heap[1]; else cout<<"NOT FOUND"; return 0;};
