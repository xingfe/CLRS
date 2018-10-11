#include "quicksort.hpp"

int main() {
  std::vector<int> items({2, 5, 9, 3, 7, 0, -1});
  quicksort(items, items.size());
  print(items)
}
