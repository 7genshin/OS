#include <stdio.h>
int o(int p[], int n, int f) 
{
    int i,j,pf = 0;
    int s[f];
    int d[f];
    int u[n];
    for (i = 0; i < n; i++)
        u[i] = -1;
    for (i = 0; i < f; i++) 
	{
        s[i] = -1;
        d[i] = 0;
    }
    for (i = 0; i < n; i++) 
	{
        if (!d[p[i]]) 
		{
            int m = 0;
            for (j = 0; j < f; j++) 
			{
                if (u[s[j]] < i && u[s[j]] != -1) 
				{
                    m = j;
                }
            }
            s[m] = p[i];
            d[p[i]] = 1;
            pf++;
        }
        u[p[i]] = i;
    }

    return pf;
}
void main() 
{
    int p[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(p) / sizeof(p[0]);
    int f = 4;
    printf("Number of page faults: %d\n", o(p, n, f));
}
