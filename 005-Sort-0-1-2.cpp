void sort012(int *arr, int n){
   int ind0 = 0, ind2 = n, i = -1;
   while(++i < ind2){
      if(arr[i] == 0) swap(arr[i], arr[ind0++]);
      else if(arr[i] == 2) swap(arr[i--], arr[--ind2]);
   }
}
