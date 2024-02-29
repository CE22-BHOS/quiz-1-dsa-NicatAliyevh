int partition(vector<int>&v, int low, int high){
    int pivot = v[low];
    int left = low;
    for(int i = low + 1; i <= high; i++){
        if(pivot > v[i]){
            left ++;
            swap(v[i], v[left]);
        }
    }
    swap(v[left], v[low]);
    return left;
}
void quickSort(vector<int>&v, int low, int high){
    if(low < high){
        int pivotLocation = partition(v, low, high);
        quickSort(v, pivotLocation + 1, high);
        quickSort(v, low, pivotLocation - 1);
    }
}