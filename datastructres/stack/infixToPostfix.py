class Conversion:
    def __init__(self,capacity):
        self.top = -1
        self.array = []
        self.output = []
        self.precedence = {'+':1,'-':1,'*':2,'/':2,'^':3}
        
        
    def push(self,operator):
        self.array.append(operator)
        self.top += 1
        
    def isEmpty(self):
        return True if self.top == -1 else False
        
    def pop(self):
        if not self.isEmpty():
            self.top -=1
            return self.array.pop()
        return '$'
        
    def peek(self):
        if not self.isEmpty():
            return self.array[-1]
        else: 
            return -1
        
    def notGreater(self,currOper):
        try:
            pC = self.precedence[currOper]
            pS = self.precedence[self.peek()]
            return True if pC <= pS else False
        except:
            return False
            
    def isOperand(self,ch):
        return ch.isalpha()
            
    def infixToPostfix(self,expression):
        
        for i in expression:
            if self.isOperand(i):
                self.output.append(i)
                
            elif i == '(':
                self.push(i)
                
            elif i == ')':
                while  (self.peek() != '('):
                        self.output.append(self.pop())
                self.pop()
                
            else:
                #print(self.peek())
                while (not self.isEmpty()) and (self.notGreater(i)):
                    self.output.append(self.pop())
                self.push(i)
        
        while not self.isEmpty():
            self.output.append(self.pop())
            
            
        print("".join(self.output))    
            
        
        
        
expression = "a+b*(c^d-e)^(f+g*h)-i"
C1 = Conversion(len(expression))

C1.infixToPostfix(expression)

#abcd^e-fgh*+^*+i-
