#ifndef MEDIANHEAP_H
#define MEDIANHEAP_H
#include "MaxHeap.h"
#include "MinHeap.h"
#include <String.h>
#include <iostream.h>
using namespace std;
class MedianHeap
{
    public:
        MedianHeap();
        MedianHeap(int sz=1000000);
        void Insert(const int x,MaxHeap &_max, MinHeap& _min);
        float FetchMedian(MaxHeap& max, MinHeap& min);
        void DeleteMedian(MaxHeap& _max, MinHeap& _min);
    protected:
    private:
};

#endif // MEDIANHEAP_H
