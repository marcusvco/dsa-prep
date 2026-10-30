# Sort list - Merge Sort O(n log n)
# [3, 2, 10, 8, 5] -> [2, 3, 5, 8, 10]

arr = [3, 2, 10, 8, 5]

def merge_sort(arr: list) -> list:
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2

    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return merge(left, right)

def merge(left: list, right: list) -> list:
    i = j = 0
    sorted_list = []

    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            sorted_list.append(left[i])
            i += 1
        else:
            sorted_list.append(right[j])
            j += 1

    sorted_list.extend(left[i:])
    sorted_list.extend(right[j:])

    return sorted_list

print(merge_sort(arr))