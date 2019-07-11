# Deque

Basically, all we have done here is wrap a deque inside a class template and let it do all the work. Our function members are essentially just renamings of deque function members. An adapter encapsulates a container to give it a new user interface. However, the deque is not an adapter in the STL like stack and queue are so, there is really NO need to do this, because STL has done it for us. 
