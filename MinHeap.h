#ifndef MINHEAP_H
#define MINHEAP_H



class MinHeap
{
    public:
        MinHeap();
        MinHeap(int sz=1000000);
        bool IsFull();
        bool IsEmpty();
        int ReadMin();
        void Insert( const int& x);
        int* Delete(int& x);
        int n;
        int *heap;
    protected:
    private:


        int MaxSize;
};

#endif // MINHEAP_H
