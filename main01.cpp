#include "maint.h"

int sum_of_glav_dioganal_high(int matrix[N][N]);
int elements_below_the_main_diagonal(int matrix[N][N]);

int main() {
    int matrix[N][N] = {
    { 1, 2, 3, 4, 5 }, 
    { 1, 2, 3, 4, 5 }, 
    { 1, 2, 3, 4, 5 },//expected = 40;
    { 1, 2, 3, 4, 5 },
    { 1, 2, 3, 4, 5 }
    };

    //cout << "Input elements matrix:" << endl;
    //for (int i = 0; i < N; ++i) {
    //    for (int j = 0; j < N; ++j) {
    //        cin >> matrix[i][j];
    //    }
    //}
    


    cout << "HIGH_SUM: " << sum_of_glav_dioganal_high(matrix) << endl;
    cout << "below_SUM: " << elements_below_the_main_diagonal(matrix) << endl;
    return 0;
}

