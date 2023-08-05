//Ans: to the question no: 5

#include <iostream>

using namespace std;

// Function to add and subtract two matrices
void matrix_add_subtract(int a[][2], int b[][2], int add[][2], int subtract[][2], int rows, int cols) {
  // Perform element-wise addition and subtraction
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      add[i][j] = a[i][j] + b[i][j];
      subtract[i][j] = a[i][j] - b[i][j];
    }
  }
}

int main() {
  // Define matrices a and b
  int a[2][2];
  int b[2][2];

  // Take input for matrices a and b
  cout << "Enter values for matrix a:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> a[i][j];
    }
  }
  cout << "Enter values for matrix b:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> b[i][j];
    }
  }

  // Create empty result matrices
  int add[2][2];
  int subtract[2][2];

  // Add and subtract matrices a and b
  matrix_add_subtract(a, b, add, subtract, 2, 2);

  // Print the result matrices
  cout << "Addition:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << add[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "Subtraction:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << subtract[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
