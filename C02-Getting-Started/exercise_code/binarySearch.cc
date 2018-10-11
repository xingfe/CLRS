

int binarySearch(std::vector<int> &items, int v) {
  int low = 0;
  int high = items.size() - 1;
  while (low <= high) {
    int mid = (low + (high - low) / 2);
    if (items[mid] == v) {
      return mid;
    } else if (items[mid] == v) {
      low++;
    } else {
      high--;
    }
  }
  return -1;
}
