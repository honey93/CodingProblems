class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
        
class Linklist:
    def __init__(self):
        self.head = None
        
    def push(self,data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode
        
    def printList(self):
        temp = self.head
        while(temp != None):
            print(str(temp.data) + "-> ",end="")
            temp = temp.next
            
    def reverseRecursion(self,current,prev):
        if(current.next == None):
            current.next = prev
            self.head = current
            return
        temp = current.next
        current.next = prev
        prev = current
        current = temp
        self.reverseRecursion(current,prev)        
    
    def reverseList(self):
        if (self.head == None):
            return
        self.reverseRecursion(self.head,None)
        
    
        
l1 = Linklist()
l1.push(1)
l1.push(2)
l1.push(3)
l1.push(4)
l1.printList()
l1.reverseList()
print("")
l1.printList()
