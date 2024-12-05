#include <stdio.h>
void SolidRectangle(int r,int c) {
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void HollowRectangle(int r,int c) {
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (i ==0||i==r - 1||j ==0||j==c - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void RightAngledTriangle(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void InvertedRightAngled(int n) {
    for (int i=n;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void Pyramid1(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=i;j<n;j++) {
            printf(" ");
        }
        for (int k=1;k<=(2*i-1);k++) {
            printf("*");
        }
        printf("\n");
    }
}

void InvertedPyramid(int n) {
    for (int i=n;i>=1;i--) {
        for (int j=n;j>i;j--) {
            printf(" ");
        }
        for (int k=1;k<=(2*i-1);k++) {
            printf("*");
        }
        printf("\n");
    }
}

void Diamond(int n) {
    // Upperdiamond
    for (int i=1;i<=n;i++) {
        for (int j=i;j<n;j++) {
            printf(" ");
        }
        for (int k=1;k<=(2*i-1);k++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower diamond
    for (int i=n-1;i>=1;i--) {
        for (int j=n;j>i;j--) {
            printf(" ");
        }
        for (int k=1;k<=(2*i-1);k++) {
            printf("*");
        }
        printf("\n");
    }
}

void Triangle(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
}

void ReverseTriangle(int n) {
    for (int i=n;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
}

void Pyramid2(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=i;j<n;j++) {
            printf(" ");
        }
        for (int k=1;k<=i;k++) {
            printf("%d ",k);
        }
        printf("\n");
    }
}

void IncreaseTriangle(int n) {
    int t=1;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
}

void ReversePattern(int n) {
    for (int i=n;i>=1;i--) {
        for (int j=i;j>=1;j--) {
            printf("%d ",j);
        }
        printf("\n");
    }
}

void PascalsTriangle(int n) {
    int i, j,res;
    for (i=0;i<n;i++) {
        for (j=0;j<=i;j++) {
            if (j==0||j==i) {
                res=1;
            } else {
                res=res*(i-j +1)/j;
            }
            printf("%d ",res);
        }
        printf("\n");
    }
}

void FibonacciTriangle(int n) {
    int first=0,sec=1,next;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d ",first);
            next=first+ sec;
            first= sec;
            sec=next;
        }
        printf("\n");
    }
}

void HollowTriangle(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=i;j<n;j++) {
            printf(" ");
        }
        for (int k=1;k<=(2*i - 1);k++) {
            if (k== 1||k==(2*i -1)||i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Checkerboard(int r,int c) {
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if ((i + j) % 2 == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void Butterfly(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        for (int j=1;j<=(2*(n-i));j++) {
            printf(" ");
        }
        for (int j=1;j<= i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        for (int j=1;j<=(2*(n-i));j++) {
            printf(" ");
        }
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void ZigZag(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if ((i + j) % 2 == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void Sandglass(int n) {
    for (int i=n;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=2;i<= n;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    
    printf("Solid Rectangle:\n");
    SolidRectangle(3, 4);

    printf("\nHollow Rectangle:\n");
    HollowRectangle(3, 5);

    printf("\nRight-Angled Triangle:\n");
    RightAngledTriangle(4);

    printf("\nInverted Right-Angled Triangle:\n");
    InvertedRightAngled(4);

    printf("\nPyramid:\n");
    Pyramid1(3);

    printf("\nInverted Pyramid:\n");
    InvertedPyramid(3);

    printf("\nDiamond:\n");
    Diamond(3);

    printf("\nTriangle of Numbers:\n");
    Triangle(4);

    printf("\nReverse Triangle of Numbers:\n");
    ReverseTriangle(4);

    printf("\nPyramid of Numbers:\n");
    Pyramid2(3);

    printf("\nIncreasing Triangle of Numbers:\n");
    IncreaseTriangle(3);

    printf("\nReverse Number Pattern:\n");
    ReversePattern(4);

    printf("\nPascal's Triangle:\n");
    PascalsTriangle(3);

    printf("\nFibonacci Triangle:\n");
    FibonacciTriangle(3);

    printf("\nHollow Triangle:\n");
    HollowTriangle(3);

    printf("\nCheckerboard:\n");
    Checkerboard(3, 4);

    printf("\nButterfly Pattern:\n");
    Butterfly(4);

    printf("\nZig-Zag Pattern:\n");
    ZigZag(4);

    printf("\nSandglass Pattern:\n");
    Sandglass(5);

}
