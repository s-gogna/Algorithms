/*!****************************************************************************
@file QuickSort.cpp

Case           |  Complexity
-------------------------------------------------------------------------------
Best           |  O(n log n)
Average        |  O(n log n)
Worst          |  O(n^2)
-------------------------------------------------------------------------------
Space (Worst)  |  O(n) total   O(n) auxiliary

Space (Worst, auxiliary) can be reduced to O(log n) by performing quicksort
recursively on the smaller partition and using tail recusion to quicksort
the larger partition.
******************************************************************************/

template <typename T>
void QuickSort(vector<T>& input, size_t low, size_t high)
{
   // If low < high
   // (ignores empty vectors since they are already sorted)
   // (ignores single element vectors since they are already sorted)
   // (ignores inverted low and high values)

      // Compute the partition index
      // p = partition(input, low, high)

      // QuickSort(input, low, p)
      // QuickSort(input, p + 1, high)
}

size_t partition(vector<T>& input, size_t low, size_t high)
{
   // Pivot is set to input[low]

   // Index a is initialized to low
   // Index b is initialized to high

   // While a < b

      // While input[a] < pivot

         // a = a + 1

      // While input[b] > pivot

         // b = b - 1

      // If i < j

         // Swap input[i] and input[j]

   // Return j
}
