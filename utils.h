void print_array(int N, int A[]) {
    int i;
    for (i = 0; i < N - 1; i++) {
        printf("%d ", A[i]);
        }
    printf("%d\n", A[N - 1]);
    }

void input(int &N) {
    scanf("%d", &N);
    }
 
