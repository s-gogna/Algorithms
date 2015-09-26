/*!****************************************************************************
@file BubbleSort.cpp

Case           |  Complexity
-------------------------------------------------------------------------------
Best           |  O(n)   comparisons   O(1)   swaps
Average        |  O(n^2) comparisons   O(n^2) swaps
Worst          |  O(n^2) comparisons   O(n^2) swaps
-------------------------------------------------------------------------------
Space (Worst)  |  O(n)   total         O(1) auxiliary
******************************************************************************/

template <typename T>
void BubbleSort(vector<T>& input)
{
   // Initialize swapped to true

   // Initialize n to length of input

   // While swapped

      // Set swapped to false

      // For x in [0 to n-2]

         // If input[x] > input[x+1]

            // Swap

            // Set swapped to true

      // n = n - 1
      // This is done a minor optimization since the last element
      // in the sub-sequence is known to be the largest
}
