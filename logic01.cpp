#include "maint.h"


int sum_of_glav_dioganal_high(int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int elements_below_the_main_diagonal(int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}