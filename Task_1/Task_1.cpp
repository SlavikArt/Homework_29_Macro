#include <iostream>
#include <algorithm>
using namespace std;

#define BEGIN {
#define END }
#define DELETE delete[]

#define FOR_I for (int i = 0; i < SIZE; i++)
#define FOR_J for (int j = 0; j < SIZE; j++)
#define FOR_SIZE1 for (int i = 0; i < SIZE1; i++)

#define SORT_MATRIX sort(Arr[i], Arr[i] + SIZE)
#define PRINT_ELEMENT cout << Arr[i][j] << "\t"
#define PRINT_ENDL cout << "\n"

#define RETURN_ARR return Arr
#define RETURN_MAX return max
#define RETURN_MIN return min

#define CREATE_INT_SQUARE_MATRIX_OF CreateIntSquareMatrix
#define CREATE_CHAR_SQUARE_MATRIX_OF CreateCharSquareMatrix
#define CREATE_DOUBLE_SQUARE_MATRIX_OF CreateDoubleSquareMatrix

#define PRINT_MAX_DIAGONAL_ELEMENT_OF cout << "Max diagonal element: " << MaxDiagonalElement
#define PRINT_MIN_DIAGONAL_ELEMENT_OF cout << "Min diagonal element: " << MinDiagonalElement
#define ENDL << "\n";

#define INITIALIZE_SQUARE_MATRIX InitializeSquareMatrix
#define PRINT_SQUARE_MATRIX PrintSquareMatrix
#define SORT_SQUARE_MATRIX SortSquareMatrix

#define CREATE_INT_SQUARE_MATRIX int** CreateIntSquareMatrix(const int SIZE)
#define CREATE_CHAR_SQUARE_MATRIX char** CreateCharSquareMatrix(const int SIZE)
#define CREATE_DOUBLE_SQUARE_MATRIX double** CreateDoubleSquareMatrix(const int SIZE)

#define INITIALIZE_INT_SQUARE_MATRIX void InitializeSquareMatrix(int** Arr, const int SIZE)
#define INITIALIZE_CHAR_SQUARE_MATRIX void InitializeSquareMatrix(char** Arr, const int SIZE)
#define INITIALIZE_DOUBLE_SQUARE_MATRIX void InitializeSquareMatrix(double** Arr, const int SIZE)

#define PRINT_INT_SQUARE_MATRIX void PrintSquareMatrix(int** Arr, const int SIZE)
#define PRINT_CHAR_SQUARE_MATRIX void PrintSquareMatrix(char** Arr, const int SIZE)
#define PRINT_DOUBLE_SQUARE_MATRIX void PrintSquareMatrix(double** Arr, const int SIZE)

#define MAX_INT_DIAGONAL_ELEMENT int MaxDiagonalElement(int** Arr, const int SIZE)
#define MAX_CHAR_DIAGONAL_ELEMENT char MaxDiagonalElement(char** Arr, const int SIZE)
#define MAX_DOUBLE_DIAGONAL_ELEMENT double MaxDiagonalElement(double** Arr, const int SIZE)

#define MIN_INT_DIAGONAL_ELEMENT int MinDiagonalElement(int** Arr, const int SIZE)
#define MIN_CHAR_DIAGONAL_ELEMENT char MinDiagonalElement(char** Arr, const int SIZE)
#define MIN_DOUBLE_DIAGONAL_ELEMENT double MinDiagonalElement(double** Arr, const int SIZE)

#define SORT_INT_SQUARE_MATRIX void SortSquareMatrix(int** Arr, const int SIZE)
#define SORT_CHAR_SQUARE_MATRIX void SortSquareMatrix(char** Arr, const int SIZE)
#define SORT_DOUBLE_SQUARE_MATRIX void SortSquareMatrix(double** Arr, const int SIZE)

#define MAIN int main()

CREATE_INT_SQUARE_MATRIX;
CREATE_CHAR_SQUARE_MATRIX;
CREATE_DOUBLE_SQUARE_MATRIX;

INITIALIZE_INT_SQUARE_MATRIX;
INITIALIZE_CHAR_SQUARE_MATRIX;
INITIALIZE_DOUBLE_SQUARE_MATRIX;

PRINT_INT_SQUARE_MATRIX;
PRINT_CHAR_SQUARE_MATRIX;
PRINT_DOUBLE_SQUARE_MATRIX;

MAX_INT_DIAGONAL_ELEMENT;
MAX_CHAR_DIAGONAL_ELEMENT;
MAX_DOUBLE_DIAGONAL_ELEMENT;

MIN_INT_DIAGONAL_ELEMENT;
MIN_CHAR_DIAGONAL_ELEMENT;
MIN_DOUBLE_DIAGONAL_ELEMENT;

SORT_INT_SQUARE_MATRIX;
SORT_CHAR_SQUARE_MATRIX;
SORT_DOUBLE_SQUARE_MATRIX;


MAIN
BEGIN
    srand(time(0));

    int SIZE1;

    cout << "Enter size of a square matrix: ";
    cin >> SIZE1;

    // Int Square Matrix
    int** Arr1 = CREATE_INT_SQUARE_MATRIX_OF(SIZE1);
    INITIALIZE_SQUARE_MATRIX(Arr1, SIZE1);

    PRINT_SQUARE_MATRIX(Arr1, SIZE1);

    PRINT_MAX_DIAGONAL_ELEMENT_OF(Arr1, SIZE1) ENDL
    PRINT_MIN_DIAGONAL_ELEMENT_OF(Arr1, SIZE1) ENDL

    SORT_SQUARE_MATRIX(Arr1, SIZE1);

    PRINT_SQUARE_MATRIX(Arr1, SIZE1);

    PRINT_ENDL;

    // Char Square Matrix
    char** Arr2 = CREATE_CHAR_SQUARE_MATRIX_OF(SIZE1);
    INITIALIZE_SQUARE_MATRIX(Arr2, SIZE1);

    PRINT_SQUARE_MATRIX(Arr2, SIZE1);

    PRINT_MAX_DIAGONAL_ELEMENT_OF(Arr2, SIZE1) ENDL
    PRINT_MIN_DIAGONAL_ELEMENT_OF(Arr2, SIZE1) ENDL

    SORT_SQUARE_MATRIX(Arr2, SIZE1);

    PRINT_SQUARE_MATRIX(Arr2, SIZE1);

    PRINT_ENDL;

    // Double Square Matrix
    double** Arr3 = CREATE_DOUBLE_SQUARE_MATRIX_OF(SIZE1);
    INITIALIZE_SQUARE_MATRIX(Arr3, SIZE1);

    PRINT_SQUARE_MATRIX(Arr3, SIZE1);

    PRINT_MAX_DIAGONAL_ELEMENT_OF(Arr3, SIZE1) ENDL
    PRINT_MIN_DIAGONAL_ELEMENT_OF(Arr3, SIZE1) ENDL

    SORT_SQUARE_MATRIX(Arr3, SIZE1);

    PRINT_SQUARE_MATRIX(Arr3, SIZE1);

    PRINT_ENDL;

    // Delete matrix
    FOR_SIZE1
    BEGIN
        DELETE Arr1[i];
    END
    DELETE Arr1;

    FOR_SIZE1
    BEGIN
        DELETE Arr2[i];
    END
    DELETE Arr2;

    FOR_SIZE1
    BEGIN
        DELETE Arr3[i];
    END
    DELETE Arr3;
END


CREATE_INT_SQUARE_MATRIX
BEGIN
    int** Arr = new int* [SIZE];

    FOR_I
    BEGIN
        Arr[i] = new int[SIZE];
    END
    RETURN_ARR;
END

CREATE_CHAR_SQUARE_MATRIX
BEGIN
    char** Arr = new char* [SIZE];

    FOR_I
    BEGIN
        Arr[i] = new char[SIZE];
    END
    RETURN_ARR;
END

CREATE_DOUBLE_SQUARE_MATRIX
BEGIN
    double** Arr = new double* [SIZE];

    FOR_I
    BEGIN
        Arr[i] = new double[SIZE];
    END
    RETURN_ARR;
END


INITIALIZE_INT_SQUARE_MATRIX
BEGIN
    FOR_I 
    BEGIN
        FOR_J
        BEGIN
            Arr[i][j] = rand() % 100 + 1;
        END
    END
END

INITIALIZE_CHAR_SQUARE_MATRIX
BEGIN
    string letters = "qwertyuiopasdfghjklzxcvbnm";
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            Arr[i][j] = letters[rand() % letters.size()];
        END
    END
END

INITIALIZE_DOUBLE_SQUARE_MATRIX
BEGIN
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            Arr[i][j] = (double)(rand() % 100 + 1) / 11.0;
        END
    END
END


PRINT_INT_SQUARE_MATRIX
BEGIN
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            PRINT_ELEMENT;
        END
        PRINT_ENDL;
    END
END

PRINT_CHAR_SQUARE_MATRIX
BEGIN
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            PRINT_ELEMENT;
        END
        PRINT_ENDL;
    END
END

PRINT_DOUBLE_SQUARE_MATRIX
BEGIN
    cout.setf(ios::fixed);
    cout.precision(2);
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            PRINT_ELEMENT;
        END
        PRINT_ENDL;
    END
END


MAX_INT_DIAGONAL_ELEMENT
BEGIN
    int max = Arr[0][0];
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            if (i == j)
            BEGIN
                if (Arr[i][j] > max)
                BEGIN
                    max = Arr[i][j];
                END
            END
        END
    END
    RETURN_MAX;
END

MAX_CHAR_DIAGONAL_ELEMENT
BEGIN
    int max = Arr[0][0];
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            if (i == j)
            BEGIN
                if (Arr[i][j] > max)
                BEGIN
                    max = Arr[i][j];
                END
            END
        END
    END
    RETURN_MAX;
END

MAX_DOUBLE_DIAGONAL_ELEMENT
BEGIN
    double max = Arr[0][0];
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            if (i == j)
            BEGIN
                if (Arr[i][j] > max)
                BEGIN
                    max = Arr[i][j];
                END
            END
        END
    END
    RETURN_MAX;
END


MIN_INT_DIAGONAL_ELEMENT
BEGIN
    int min = Arr[0][0];
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            if (i == j)
            BEGIN
                if (Arr[i][j] < min)
                BEGIN
                    min = Arr[i][j];
                END
            END
        END
    END
    RETURN_MIN;
END

MIN_CHAR_DIAGONAL_ELEMENT
BEGIN
    int min = Arr[0][0];
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            if (i == j)
            BEGIN
                if (Arr[i][j] < min)
                BEGIN
                    min = Arr[i][j];
                END
            END
        END
    END
    RETURN_MIN;
END

MIN_DOUBLE_DIAGONAL_ELEMENT
BEGIN
    double min = Arr[0][0];
    FOR_I
    BEGIN
        FOR_J
        BEGIN
            if (i == j)
            BEGIN
                if (Arr[i][j] < min)
                BEGIN
                    min = Arr[i][j];
                END
            END
        END
    END
    RETURN_MIN;
END


SORT_INT_SQUARE_MATRIX
BEGIN
    FOR_I
    BEGIN
        SORT_MATRIX;
    END
END

SORT_CHAR_SQUARE_MATRIX
BEGIN
    FOR_I
    BEGIN
        SORT_MATRIX;
    END
END

SORT_DOUBLE_SQUARE_MATRIX
BEGIN
    FOR_I
    BEGIN
        SORT_MATRIX;
    END
END
