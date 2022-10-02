def bubbleSort(ls):
  n = len(ls)
  for i in range(n):
    for j in range(0, n-i-1):
      if ls[j] > ls[j+1]:
        arr[j], arr[j+1] = arr[j+1], arr[j]

if __name__ == "__main__":
  a = []
  bubbleSort(a)
  print("Sorted list is:", a)
