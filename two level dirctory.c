#include <stdio.h>

struct Directory {
    char name[10];
    char subdir[10][10][10];
    int size;
};

int main() {
    int i, j, n;

    printf("Enter number of directories: ");
    scanf("%d", &n);

    struct Directory dirs[n];

    for (i = 0; i < n; i++) {
        printf("Enter directory %d name and size: ", i + 1);
        scanf("%s %d", dirs[i].name, &dirs[i].size);
        for (j = 0; j < dirs[i].size; j++) {
            printf("Enter subdirectory name: ");
            scanf("%s", dirs[i].subdir[j][0]);
            printf("Enter number of files in %s: ", dirs[i].subdir[j][0]);
            scanf("%d", &dirs[i].size);
            printf("Enter file names: ");
            for (int k = 0; k < dirs[i].size; k++)
                scanf("%s", dirs[i].subdir[j][k]);
        }
    }

    printf("\ndirname\t\tsize\tsubdirname\tsize\tfiles\n");
    printf("******************************************************\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%d", dirs[i].name, dirs[i].size);
        for (j = 0; j < dirs[i].size; j++) {
            printf("\t%s\t\t%d\t", dirs[i].subdir[j][0], dirs[i].size);
            for (int k = 0; k < dirs[i].size; k++)
                printf("%s\t", dirs[i].subdir[j][k]);
            printf("\n\t\t");
        }
        printf("\n");
    }

    return 0;
}
