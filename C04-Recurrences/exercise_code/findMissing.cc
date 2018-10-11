#include "findMissing.hpp"
// assert min(vec) == 0
// assert max(vec) == vec.size() - 1

int main() {
  std::vector<int> items = {0, 1, 2, 3, 5, 6, 7, 8};
  std::cout << findmissing(items);
}
