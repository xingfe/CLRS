
#include <vector>
using iterator = std::vector<int>::iterator;
void merge(iterator begin, iterator mid, iterator end) {
  if (begin == mid || mid == end) {
    return;
  }
  while (begin != mid) {
    if (*begin > *mid) {
      std::swap(begin, mid);
      merge(mid, mid + 1, end);
    }
    begin++;
  }
}
void mergeSort(iterator begin, iterator end) {
  if (begin == end) {
    return;
  }
  iterator p = begin + (end - begin) / 2;
  mergeSort(p, end);
  mergeSort(begin, p);
  merge(begin, p, end);
}

int main() {
  std::vector<int> items = {4, 3, 2, 1, 17};
  mergeSort(items.begin(), items.end());
  for (auto item : items) {
    std::cout << items;
  }
}
