#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target) {
  if (nums.size() == 1) {
    return (target == nums[0] ? 0 : -1);
  }

  int idx = -1;
  int start = 0;
  int stop = nums.size();

  while (start <= stop) {
    int mid = start + ((stop - start) / 2);
    if (target == nums[mid]) {
      idx = mid;
      break;
    } else if (target < nums[mid]) {
      stop = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return idx;
}

int main() {
  vector<int> nums = {2, 5};
  int target = 2;
  int result = search(nums, target);
  cout << result << "\n";
}
