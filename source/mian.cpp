#include<iostream>

using namespace std;

/**
 * @brief Implement a sort algorithm function
 * 
 * @tparam Iterator 
 * @param first 
 * @param last 
 */
template<typename Iterator>
void sort(Iterator first, Iterator last)
{
    // Comments to explain the algorithm
    // Sorting algorithm: bubble sort
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    while(first != last)
    {
        for(auto it = first; it != last - 1; ++it)
        {
            if(*it > *(it+1))
            {
                iter_swap(it, it+1);
            }
        }
        --last;
    }
}
//实现一个排序算法函数
int main()
{
    // Test the sort function with some test cases
    int a[] = {5, 2, 8, 3, 1, 6, 4};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    for (int i = 0; i != n; ++i)
        cout << a[i] << ' ';
    cout << endl;
    // Continue to write a test case
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(b, b + 10);
    for (int i = 0; i != 10; ++i)
        cout << b[i] << ' ';
    cout << endl;
    

    return 0;
}

