#-- def a node class object
# node class is sub-object of linked list

class node:                           #node object contains 2 elements
    def __init__(self,data=None):
        self.data=data                
        self.next=None               #pointer to next next node
                                    #by default last pointer will always point to None/null
    
class linked_list:
    def __init__(self):
        self.head=node()     #head node is just a named element to access list
        
        
    def append(self,data):      #add a new node to linked list
        new_node=node(data)     #create a new node
        cur=self.head           #start on left
        while cur.next!=None: 
            cur=cur.next
        cur.next=new_node
        

    def length(self):       #only pass instance of linked list
        cur=self.head
        total=0
        while cur.next!=None:
            total+=1
            cur=cur.next
        return total
    
    def display(self):
        elems=[]    # this is a regular list with nothing for now
        cur_node=self.head
        while cur_node.next!=None:
            cur_node=cur_node.next
            elems.append(cur_node.data)
        print(elems)
        
    def get(self,index):
        if index>=self.length():
            print("ERROR: Get index not in array!")
            return None
        cur_idx=0
        cur_node=self.head
        while True:
            cur_node=cur_node.next
            if cur_idx==index:
                return cur_node.data
            cur_idx+=1
           
    def erase(self,index):
        if index>=self.length():
            print("Error: 'Index out of error")
            return
        cur_idx=0
        cur_node=self.head
        while True:
            last_node=cur_node
            cur_node=cur_node.next
#            cur_node=cur_node.next
            if cur_idx==index:
                last_node.next=cur_node.next
                return
            cur_idx+=1
        
    def display1(self):
        elems1=[]    # this is a regular list with nothing for now
        cur=self.head
        while cur.next!=None:
            cur=cur.next
            elems1.append(cur.data)
        print(elems1)

 #   def __getitem__(self,index):
 #       return self.get(index)

        
mylist=linked_list()
mylist.display()

print("\nafter adding elements " )
mylist.append(1)
mylist.append(1)
mylist.append(1)
mylist.append(1)
mylist.append('rosa')
mylist.append('james')
mylist.append('0')
mylist.append('1')
mylist.append('Teaching')

mylist.display()
print("length of list is " , mylist.length(),"\n")

mylist.erase(2)

print('after erase\n')
mylist.display1()

#print("element at first node is ",mylist.get(1))

print('data element in node is %s ' % mylist.get(4))

print("length of list is " , mylist.length())

dir(mylist)

##another way to implement
#
#class Node: 
#        def __init__(self, data=None): 
#            self.data = data 
#            self.next = None 
#            
#        def __str__(self): 
#            return str(data) 
#
#class SinglyLinkedList:
#         def __init__(self):
#             self.tail = None 
#             
#         def append(self, data):
#             # Encapsulate the data in a Node
#             node = Node(data)
#
#             if self.tail == None:
#                 self.tail = node
#             else:
#                 current = self.tail
#                 while current.next:
#                     current = current.next
#                 current.next = node 
#                 
#                 
#         def fastappend(self, data):
#            node = Node(data)
#            if self.head:
#                self.head.next = node
#                self.head = node
#            else:
#                self.tail = node
#                self.head = node 
#             
#alist=SinglyLinkedList()
#
#print("Words List\n")
#
#words = SinglyLinkedList()
#words.append('egg')
#words.append('ham')
#words.append('spam')
#
#current = words.tail
#
#while current:
#        print(current.data) 
#        current = current.next
#        
#
#tailwords = SinglyLinkedList()
#
#tailwords.fastappend('bacon') 

dir(mylist)

#dir(mylist)
#Out[10]: 
#['__class__',
# '__delattr__',
# '__dict__',
# '__dir__',
# '__doc__',
# '__eq__',
# '__format__',
# '__ge__',
# '__getattribute__',
# '__getitem__',
# '__gt__',
# '__hash__',
# '__init__',
# '__init_subclass__',
# '__le__',
# '__lt__',
# '__module__',
# '__ne__',
# '__new__',
# '__reduce__',
# '__reduce_ex__',
# '__repr__',
# '__setattr__',
# '__sizeof__',
# '__str__',
# '__subclasshook__',
# '__weakref__',
# 'append',
# 'display',
# 'display1',
# 'erase',
# 'get',
# 'head',
# 'length']
        
      
