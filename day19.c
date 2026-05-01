#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, l, r;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    l = 0;
    r = n - 1;

    int min_sum = arr[l] + arr[r];
    int x = arr[l], y = arr[r];

    while(l < r) {
        int sum = arr[l] + arr[r];

        if(abs(sum) < abs(min_sum)) {
            min_sum = sum;
            x = arr[l];
            y = arr[r];
        }

        if(sum < 0)
            l++;
        else
            r--;
    }

    printf("%d %d", x, y);

    return 0;
}
