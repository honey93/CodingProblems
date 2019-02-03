

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class Linklist:
    def __init__(self):
        self.head = None
        
    def findMiddle(self):
        temp = self.head
        fast_ptr = self.head
        if(temp!= None):
            while(fast_ptr != None and fast_ptr.next != None):
                fast_ptr = fast_ptr.next.next
                temp = temp.next
            print(temp.data)
        else:
            print("Empty list")
        
if __name__ == '__main__':
    l1 = Linklist()
    l1.head = Node(1)
    l1.head.next = Node(2)
    l1.head.next.next = Node(3)
    l1.head.next.next.next = Node(4)
    l1.head.next.next.next.next = Node(5)
    l1.findMiddle()
    print("Hello World")
