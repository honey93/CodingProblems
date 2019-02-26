
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        


class LinkedList:
    def __init__(self):
        self.head = None
        self.count_repeat = 0
        
    def push(self,data):
        node = Node(data)
        node.next = self.head
        self.head = node
        
    def print_list(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
            
    def count_repeat_element(self,key,head):
        if(head == None):
            return self.count_repeat
        if(head.data == key):
            self.count_repeat += 1
        if(head.next == None):
            return self.count_repeat
        return self.count_repeat_element(key,head.next)
        
            
        
if __name__ == '__main__':
    
    llist = LinkedList()
    llist.push(1)
    llist.push(2)
    llist.push(1)
    llist.push(1)
    llist.push(1)
    new_var = llist.count_repeat_element(1,llist.head)
    print(new_var)
    
    
