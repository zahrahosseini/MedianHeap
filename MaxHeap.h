#ifndef MAXHEAP_H
#define MAXHEAP_H



class MaxHeap
{
    public:
        MaxHeap(int sz=1000000);
        MaxHeap(){};
       void Insert(const int & x);
       bool IsFull();
       bool IsEmpty();
       int ReadMax();
       int* Delete(int& x);
        int n;
         int *heap;
    protected:
    private:


        int MaxSize;
};

#endif // MAXHEAP_H
