import random
 
def bogoSort(a):
  n = len(a)
  while (is_sorted(a)== False):
    shuffle(a)
 
def is_sorted(a):
  n = len(a)
  for i in range(0, n-1):
    if (a[i] > a[i+1] ):
      return False
  return True
 
def shuffle(a):
  n = len(a)
  for i in range (0,n):
    r = random.randint(0,n-1)
    a[i], a[r] = a[r], a[i]

if __name__ == "__main__":
  a = [3, 1, 4, 2, 0, 5, 6]
  bogoSort(a)
  print("Sorted list:", a)
