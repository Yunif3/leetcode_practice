# Optimal Complexity
Time: O(n)
Space: O(1)

# Method
The trick here is to use two pointer method.
This method uses two pointers at the ends of the vector, and closes in on each other based on an invariant that makes sure that all other cases are covered even if the pointer moves.

In this case, we know that the height is capped by the shorter stick.
So in order to maximize the area, you have to increase the distance between the sticks.

Everytime you move one pointer, you know that everything before it had been compared with a longer stick that is furthest away. We know this because we started on both ends, and move the stick that was shorter, which means that that stick had its maximum area.
Thus we can find the maximum of all the area calculations until the two pointers meet.
