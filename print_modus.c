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
        
        // for (int j = rep; j > 0; j--)
        // {
        //     if (arr[i] == arr[j-1] && counter[j-1] != 0)
        //     {
        //         counter[i] = counter[j-1]++;
        //     }else
        //     {
        //         counter[i] = 1;
        //     }    
        // }
    
        if (counter[i] >= greatest && arr[i] >= mode)
        {
            greatest = counter[i];
            mode = arr[i];
        }else if (counter[i] >= greatest && arr[i] <= mode)
        {
            greatest = counter[i];
            mode = arr[i];
        }    
    }
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d ", counter[i]);
    // }
    
    printf("%d\n", mode);
}