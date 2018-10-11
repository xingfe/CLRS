




template<typename Iter>
void randomizedQuicksort(Iter iter, int size){
  if(size <=1){
    return ;
  }
  int lessSize = randomizedPartition(iter, size);
  randomizedQuicksort(iter, lessSize);
  randomizedQuicksort(iter+lessSize+1, size-lessSize-1);
}

template<typename Iter>
int randomizedPartition(Iter iter, int size){
  int i = random()%size;
  std::swap_iter(iter+size, iter+i);
  partition(iter, size);
}

template<typename Iter>
int partition(Iter iter, int size){
  int lessSize = 0;
  for(int i=0;i<size-1;i++){
    if(*(iter+i) < *(iter+size-1)){
      std::swap_iter(iter+i, iter+lessSize);
      lessSize++;
    }
  }
  std::swap_iter(iter+lessSize, iter+size-1);
  return lessSize;
}



