int* partion(int* begin, int* end) {
    int pivot = *(end - 1);
    int* i = begin - 1;
  
    for (int* j = begin; j <= end - 1; j++) {
        if (*j < pivot) {
           i++;
           int temp = *i;
           *i = *j;
           *j = temp;
        }
    }
      
   int temp = *(i + 1);
   *(i + 1) = *(end - 1);
   *(end - 1) = temp;
  
   return (i + 1);
}


void quick_sort(int* begin, int* end) {
  if (begin >= end -1) return;

  int* middle = partition(arr[], begin, end);
  quick_sort(begin, middle);
  quick_sort(middle+1, end);
}
