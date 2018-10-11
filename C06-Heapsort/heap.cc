/*************************************************************************
        > File Name: heap.cc
        > Author: Louis1992, xingfe123
        > Mail: zhenchaogan@gmail.com, xingfe123@gmail.com
    > Blog: http://gzc.github.io, http://xingfe.github.io
        > Created Time: -- 12/22 21:47:37 2014
    > update Time  --  12/22 21:47:37 2018
 ************************************************************************/
#include <iostream>
#include <vector>

// get the parent of this node
int parent(int i) { return (i - 1) / 2; }

// get the left child
int left(int i) { return 2 * i + 1; }

// get the right child
int right(int i) { return 2 * i + 2; }

// construct a sub-tree whose root is node i
void maxHeapify(std::vector<int> &A, int n, int i) {
  int l = left(i);
  int r = right(i);
  int largest(i);

  if (l <= (n - 1) && A[l] > A[i])
    largest = l;

  if (r <= (n - 1) && A[r] > A[largest])
    largest = r;

  if (largest != i) {
    std::swap(A[i], A[largest]);
    maxHeapify(A, n, largest);
  }
}

// build the heap
void buildMaxHeap(std::vector<int> &A, int n) {
  for (int i = n / 2 - 1; i >= 0; i--) {
    maxHeapify(A, n, i);
  }
}

// heapsort
void heapsort(std::vector<int> &A, int n) {
  buildMaxHeap(A, n);
  for (int i = n - 1; i > 0; i--) {
    std::swap(A[0], A[i]);
    maxHeapify(A, --n, 0);
  }
}

void print(std::vector<int> const &A) {
  for (auto i : A) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> A({16, 14, 10, 8, 7, 9, 3, 2, 4, 1});
  heapsort(A, A.size());

  print(A);
  return 0;
}
