from collections import deque
myStack = deque()

myStack.append('a')
myStack.append('b')
myStack.append('c')

print(myStack)

myStack.pop()
myStack.pop()
myStack.pop()
myStack.pop() #Underflow error
