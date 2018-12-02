class Node:
  def __init__(self,data):
    self.data = data
    self.next = None
   
class LinkList:
  def __init__(self):
    self.head = None
    
  def printList(self):
    temp = self.head
    while(temp != None):
      print temp.data
      temp = temp.next
    
    
if __name__ == '__main__':
  linkedlist = LinkList()
  linkedlist.head = Node(1)
  second = Node(2)
  third = Node(3)
  linkedlist.head.next = second
  second.next = third
  
  linkedlist.printList()
    
