int sum_recursive(vector<int>vec, int size){
    if(size == 0) return 0;
    else return vec[size - 1] + sum_recursive(vec, size - 1);
}