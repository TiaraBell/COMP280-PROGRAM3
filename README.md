# COMP280-PROGRAM3
COMP280 Programming Assignment 4 (Binary Search Tree)

A restaurant would like to keep count the frequencies of dishes that are ordered. The restaurant offers 7 different main course dishes as follows:
Dish 1 – Fried Chicken
Dish 2 – Pork Chops
Dish 3 – Baked Chicken
Dish 4 – Grilled Salmon
Dish 5 – Roast Beef
Dish 6 – Grilled Steak 
Dish 7 – Meat Loaf

Write a program to keep up with the number of times a particular dish is ordered. The first time a dish is ordered, the dish comes into existence and a counter for the dish is set to 1.  If the dish already exists and an order is made, the counter for the dish is incremented. Using the Display method for the binary search tree, display the dishes which have been ordered (in numerical order).  With each dish, display the frequency that the dish has been ordered.  

Programming Guidelines:  
-	Use a binary search tree to store the information on the dishes. 
-	Use the appropriate binary tree traversal that will give you the correct output.
-	You can add additional methods to the BinarySearchTree class if you desire. 
-	Use one of the following definitions for the binary search tree.

The following definition for the binary search tree modifies the node class to hold the two values:

struct node
{
int dishNumber;
int counter;
   	node * leftchild;
   	node * rightchild;
};

class BinarySearchTree
{
 public: 
   BinarySearchTree();
   bool empty(); // return true if the tree is empty, otherwise return false
   bool Insert(int dishNum);//insert a value dishNum 
   bool IsThere (int dishNum); 
//return true if dishNum is in the tree, otherwise return false
   void Display();
//Display the data stored from smallest to largest based on dish number
  
 private:
	node * root;//pointer to the root node
};
 
The following definition for the binary search tree uses a struct to hold the two values:

struct dish{
	int dishNumber;
	int counter;
};

typedef dish ElementType;
struct node
{
ElementType data;
   	node * leftchild;
   	node * rightchild;
};

class BinarySearchTree
{
 public: 
   BinarySearchTree();
   bool empty(); // return true if the tree is empty, otherwise return false
   bool Insert(ElementType x);//insert a value x 
   bool IsThere (ElementType  x); 
//return true if x is in the tree, otherwise return false
   void Display();
//Display the data stored from smallest to largest based on dish number
  
 private:
	node * root;//pointer to the root node
};

Sample input:  4 3 2 3 7 2 2 5 2 1 3 3 5 5

Sample output:
 
List of all dishes ordered:
1 – Fried Chicken	1 order
2 – Pork Chops		4 orders
3 – Baked Chicken	4 orders
4 – Grill Salmon	1 order
5 – Roast Beef		3 orders
7 – Meat Loaf		1 order

************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************

COMP 280 Programming Assignment 5 (Graphs)

Write a program to implement an undirected graph.   Use the adjacency matrix to implement the graph.  Let your program be menu driven. 

Represent a vertex by using the index value of the array.  Let the maximum number of vertices be 100.  For example, if the number of vertices is 5, the vertices are 0, 1, 2, 3 and 4. Start the program by prompting the user for the number of vertices. Then create a graph with no edges.

Allowing the user the following options:
1.	Insert an edge 
2.	Delete an edge
3.	Print Adjacency Matrix 
4.	List all vertices that are adjacent to a specified vertex.
5.	Print out vertices using depth first search (10 points)
6.	Print out vertices using breadth first search (10 points)
7.	Check for connectivity (10 points)
8.	Check for completeness (10 points)
9.	Exit program

Programming guidelines
-	Options 1, 2, 3, 4 and 9 are required.  Additional implemented options are extra credit.
-	Option 1 - Allows the user to insert an edge.  The user must specify the two vertices that the edge will connect.
-	Option 2 - Allows the user to delete an edge. The user must specify the two vertices connecting the edge that is to be deleted.
-	Option 3 – Print out the adjacency matrix (one row per line of output)
-	Option 4 - The user enters a vertex, and the program prints out all of the vertices that are adjacent to the specified vertex.
-	Option 5 - Print out the vertices using the depth first search
-	Option 6 - Print out the vertices using the breadth first search
-	Option 7 - Print out whether or not the graph is connected
-	Option 8 - Print out whether or not the graph is a complete graph

Sample graph class definition

const int MAX = 100;
class graph
{ private:
int n; // number of vertices
   	int matrix[MAX][MAX];//adjacency matrix
   	bool visited[MAX];
  
  public:
 graph(int v);
/* initializes the number of vertices to v, 
 and fills matrix with zeros */

 void AddEdge(int v, int w);
//add an edge between v and w
            
void DeleteEdge(int v, int w);
//delete the edge between v and w

int printAdjacent(int v); 
//print all vertices that are adjacent to v

void printMatrix();
/* print the content of the adjacency matrix with one row per line of output. */
   	

//Add in other methods as needed
};


