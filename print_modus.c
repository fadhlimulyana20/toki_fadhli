#include <stdio.h>

int main(){
    int N, greatest = 0, mode = 0;
    scanf("%d", &N);
    int arr[N], counter[N];

    for (int i = 0; i < N; i++)
    {
        int Bi, rep = i, ctr =0;
        scanf("%d", &Bi);
        arr[i] = Bi;
        counter[i] = 1;
        while (rep>0)
        {
            if (arr[i] == arr[rep-1])
            {
                counter[i] += counter[rep-1];
                break;
            }
            rep--;
        }
    
        if (counter[i] >= greatest && arr[i] >= mode)
        {
            greatest = counter[i];
            mode = arr[i];
        }else if (counter[i] > greatest && arr[i] <= mode)
        {
            greatest = counter[i];
            mode = arr[i];
        }    
    }
    
    printf("%d\n", mode);
}