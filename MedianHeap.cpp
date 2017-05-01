#include "MedianHeap.h"
#include <String.h>
MedianHeap::MedianHeap()
{
    //ctor
};
void MedianHeap::DeleteMedian(MaxHeap& _max, MinHeap& _min){
    int sum=_min.n+_max.n;
    int deleted=0;
   if(sum%2==0)
   {
       deleted=_min.ReadMin();
       _min.Delete(deleted);
       deleted=_max.ReadMax();
        _max.Delete(deleted);
       }
       else
       _max.Delete(deleted);
    };
float MedianHeap::FetchMedian(MaxHeap& _max, MinHeap& _min){
    if((_min.n>0)&&(_max.n>0))
    {
    int sum=_min.n+_max.n;
   if(sum%2==0)
   {
       return ((_max.ReadMax()+_min.ReadMin())/2.0);
       }
       else
       return float (_max.ReadMax());
    }
    else
    if(_max.n>0) return float(_max.ReadMax());
    };
void MedianHeap::Insert(const int x ,MaxHeap & _max, MinHeap& _min){
     int sum=_min.n+_max.n;
     int deletenum;
     int del;
   if(sum%2==0)
   {
       if(_max.n>0)
       {
       if(x<=_max.ReadMax())
       {
           _max.Insert(x);
           }
           else
           {
               deletenum=_min.ReadMin();
               _min.Delete(del);
               _max.Insert(deletenum);
               _min.Insert(x);
               }
        }
        else
        _max.Insert(x);
       }
    else
       {
           if(_max.n>0)
           {
         if(x>=_max.ReadMax())
       {
           _min.Insert(x);
           }
           else
           {
               deletenum=_max.ReadMax();
               _max.Delete(del);
               _min.Insert(deletenum);
               _max.Insert(x);
               }
           }
           else
           _min.Insert(x);
       }
       if((_max.n>0)&&(_min.n>0))
       {
       int mmax=_max.ReadMax();
       int mmin=_min.ReadMin();
       if(mmax>mmin)
       {
           _min.heap[1]=mmax;
           _max.heap[1]=mmin;
           }
       }
    };
MedianHeap::MedianHeap(int sz){
    MinHeap min(sz/2);
    MaxHeap max(sz/2);
     string ch;
      int number=0;
      cin>>ch;
    while(1)
    {
      if(ch=="insert")
      {
          cin>>number;
          cout<<number<<" inserted";
          Insert(number,max,min);
          }
          else
        if(ch=="delete")
        {
            float median=FetchMedian(max,min);
            DeleteMedian(max,min);
            cout<<median<<" deleted";
            }
            else
            if(ch=="fetch")
            {
                int sum=min.n+max.n;
                if (sum>0)
                {
                float fetch=FetchMedian(max,min);
                cout<<fetch<<" is the median";
                }
                else cout<<"empty heap";
                }
                else
                if(ch=="m")
                {
                    cout<<max.ReadMax()<<" " <<min.ReadMin()<<endl;
                    }
                if(ch=="end")
                break;
        cin>>ch;
        }

    };
