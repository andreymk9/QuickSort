#ifndef qsort
#define qsort

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int pa(int arr[], int l, int h){
    int pi = arr[h];
    int i = l - 1;
    for(int j = l; j < h ; ++j){
        if(arr[j] <= pi){
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quickSort(int arr[], int l, int h){
    int ix;
    if(l < h){
        ix = pa(arr, l, h);
        quickSort(arr, l, ix - 1);
        quickSort(arr, ix + 1, h);
    }
    
}

#endif