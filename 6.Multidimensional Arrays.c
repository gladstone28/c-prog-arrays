#include<stdio.h>

int main() {

  int arr[9][9];

  int matrix[][3] = {{2, 9, 11}, {3, 1, 4}, {8, 3, 1}};
}

/*
ARRAYS: LESSON
Multidimensional Arrays
As we said before, arrays can contain any kind of data type, be it int, char, or anything else. Interestingly, arrays can also store other arrays! An array containing other arrays is known as a multidimensional array. These kinds of arrays are frequently used in mathematical applications that involve matrices and vectors. Similar to its single dimension counterpart, a multidimensional array can be initialized or uninitialized upon its creation. Let’s take a look at the uninitialized version first. The following is a two-dimensional array of integers called mat which represents a three-by-four matrix:

int mat[3][4];
The previous code indicates that the array mat contains three elements each of which is an array that contains four integers. To visualize this, consider a row of three lockers, in which each locker contains four sub-lockers that someone can store items in. To illustrate how to create an initialized multidimensional array, we will create a two-by-three multidimensional array called mat2 composed of random integer values.

int mat2[][3] = {{1, 6, 3}, {5, 9, 2}};
Just like in the single dimension case, the array is initialized by placing elements between {} brackets. In this case, the elements inside the outermost brackets are arrays of three elements each. It is important to note that while the two-by-three dimension can be inferred from the right-hand side of the expression, the only dimension that can be omitted is the first (notice the first [] is empty); all others must be supplied. The array mat2, represents this table:

2x3 matrix example

While it is possible to have a theoretically infinite number of dimensions, in practice, dimensions greater than two are very rare. For a two-dimensional matrix, the first dimension represents the number of rows and the second dimension represents the number of columns.

Instructions
1.
Create a two-dimensional nine-by-nine uninitialized array of integers called arr.

Checkpoint 2 Passed

Hint
Recall the three-by-four array that was created earlier:

int mat[3][4];
In this checkpoint, we require a nine-by-nine array.

2.
Given the following table:

3x3 matrix example

Create an initialized two-dimensional array called matrix that represents it.

Checkpoint 3 Passed

Hint
Creating a multidimensional array is done like so:

arr[first_dimension][second_dimension] = {{first_row_items}, {second_row_items}, {etc…}};


*/

