#include “tbb/parallel_sort.h”
#include <math.h>
using namespace tbb;
const int N = 100000;
float a[N];
float b[N];
void SortExample()
{
for (int i = 0; i < N; i++)
{
a[i] = sin((double)i);
b[i] = cos((double)i);
}
parallel_sort(a, a + N);
parallel_sort(b, b + N, std::greater<float>());
} 