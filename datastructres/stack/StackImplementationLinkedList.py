class stackNode:
    def __init__(self,data):
        self.data = data
        self.next = None


class stack:
    def __init__(self):
        self.top = None
        
    def pushItem(self,data):
        newNode = stackNode(data)
        newNode.next = self.top
        self.top = newNode
        
    def isEmpty(self):
        return self.top == None
        
    def peekItem(self):
        if(self.isEmpty()):
            return(float("-inf"))
        return self.top.data
        
    def popItem(self):
        if(self.isEmpty()):
            return (float("-inf"))
        popedItem = self.top.data
        self.top = self.top.next
        return popedItem
        


sOne = stack()

print(sOne.isEmpty())
print(sOne.peekItem())
sOne.pushItem(1)
sOne.pushItem(2)
print(sOne.popItem())
print(sOne.peekItem())
        
