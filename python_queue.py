from queue import Queue
q = Queue(maxsize = 4)
print("Initial Size Before Insertion:", q.qsize())
q.put('a')
q.put('b')
q.put('c')
q.put('d')
print("After Insertion:", q.qsize())
print("Queue is Full or Not:", q.full())
print("Size of Queue:", q.qsize())
print("Removing Elements:")
print(q.get())
print(q.get())
print(q.get())
print("Empty or Not??", q.empty())
print(q.get())
print("Empty or Not??", q.empty())
print("Size of Queue:", q.qsize())
