class Node:
  def __init__(self,data):
    self.data = data
    self.next = None
   
class LinkList:
  def __init__(self):
    self.head = None
    
  def push(self,data):
      temp = Node(data)
      temp.next = self.head
      self.head = temp
      
    
  def printList(self):
    temp = self.head
    while(temp != None):
      print (temp.data)
      temp = temp.next
      
  def check_loop(self):
      set_map = set()
      temp = self.head
      while(temp != None):
          if (temp in set_map):
              return "Loop Found"
          else:
              print(temp.data)
              set_map.add(temp)
              temp = temp.next
      return "No Loop Found"
    
    
if __name__ == '__main__':
  llist = LinkList()
  llist.push(1)
  llist.push(2)
  llist.push(3)
  llist.push(4)
  llist.head.next.next.next.next   = llist.head.next
  print(llist.check_loop())
  #llist.printList()
