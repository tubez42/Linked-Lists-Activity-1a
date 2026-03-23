# Linked-Lists-Activity-1a
## 1. Why is a linked list efficient for stack implementation?
  Linked lists are efficent for stack implementation becasue elements can be inserted or removed with O(1) compleixty without the need to shift the other elements.
## 2. What is the time complexity of push and pop operations?
  push() has a time complexity of O(1). pop() has a time complexity of O(1). peek() has a time complexity of O(1). The operation with a longer compelxity is display which has O(n) complexity since it has to run through the entire linked list. 
## 3. What happens if memory is not deallocated after pop?
  This causes what is called a memory leak. This is when the allocated memeory becomes inaccessible. This reduces available memory and degrade performance.
## 4. Compare a stack implemented with an array versus a linked list.
  In an array the memory size is fixed to a specific size (is updatable), where as in a linked list its dynamic. Arrays can easily overflow whereas a linked list is able to exhaust system memory. Arrays have contigous memory usage where as linked lists use non-contiguous
  memory. Linked List are better at performing when adding or removing values, but array are better when accessing specific values.
  
  

  
  
  
