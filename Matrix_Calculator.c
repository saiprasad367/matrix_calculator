#include <stdio.h>

void readMatrix(int matrix[10][10], int n){
    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
}
void add(int matrix1[10][10],int matrix2[10][10],int result[10][10],int n){
    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void sub(int matrix1[10][10],int matrix2[10][10],int result[10][10],int n){
    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            result[i][j] = 0;
            for(int k=0; k<n; k++){
                result[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}

void transpose(int matrix1[10][10],int result[10][10],int n ){
    for(int i =0; i < n; i++){
        for(int j =0; j < n ; j++){
            result[j][i] = matrix1[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int matrix1[10][10], matrix2[10][10], result[10][10], n;
    int option;
    printf("\nEnter the size of matrices: ");
    scanf("%d", &n);
    
    printf("Enter options : \n 1 . add of matrix \n 2 . subtraction \n 3 . multiplication \n 4 . Transpose \n");
    scanf("%d",&option);

    switch(option){
        case 1:
        readMatrix(matrix1,n);
        readMatrix(matrix2,n);
   add(matrix1,matrix2,result,n);
   printf("Rsultant matrix : \n");
   displayMatrix(result,n);
   break;

   case 2:
    readMatrix(matrix1, n);
    readMatrix(matrix2, n);
    sub(matrix1, matrix2, result, n);
    printf("Resultant matrix: \n");

    displayMatrix(result, n);
    break;

   case 3 :
   readMatrix(matrix1, n);
    readMatrix(matrix2, n);
    multiplyMatrices(matrix1, matrix2, result, n);
    printf("Resultant matrix:\n");
    displayMatrix(result, n);
    break;
    
    case 4:
    readMatrix(matrix1,n);
    transpose(matrix1,result,n);
    printf("Transposed Matrix is : \n");
    displayMatrix(result,n);
    break;

    default:
    printf("Error\n");
        
    }
    
    return 0;
}