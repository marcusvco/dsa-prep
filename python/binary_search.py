# Find element in sorted list - Binary Search O(log n)
# [2, 3, 5, 8, 10] t = 8
# Return 4 (Index of 5)
# Not found return -1

arr = [2, 3, 5, 8, 10]
target = 8

def binary_search(arr: list) -> int:
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if target == arr[mid]:
            return mid
        elif target > arr[mid]:
            left = mid + 1
        else:
            right = mid - 1

    return -1

print(binary_search(arr))