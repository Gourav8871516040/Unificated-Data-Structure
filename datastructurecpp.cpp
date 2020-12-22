
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<math.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
class noded
{
	public:
	int data;
	noded *next;
	noded *prev;
};
class tree
{
public :
    tree *left;
    tree *right;
    int num;
};

node *root=NULL;
node *tail=NULL;
node *front=NULL;
node *rear=NULL;
node *top=NULL;
noded *rootd=NULL;
noded *taild=NULL;
noded *frontd=NULL;
noded *reard=NULL;
noded *topd=NULL;

class stcirqueue
{
	private :
		int front,n,a[500];
int rear,ch;

		
		public :
			
		 void scirqueue()
			{
						SYSTEMTIME d;
                        GetSystemTime(&d);
    system("cls");  
	cout<<"\t\t\t =====================================================\n";
	cout<<"\t\t\t|                     DATA STRUCTURE                  |\n";
	cout<<"\t\t\t|                                                     |\n";
    cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t =====================================================\n";
 	cout<<"\t\t\t\t    -------------------------------\n";
 	cout<<"\t\t\t\t    |    Static Circular Queue    |\n";
 	cout<<"\t\t\t\t    -------------------------------\n\n";

			}
			
			void cinsert()
{   
     int x;
	if((front==0&&rear==n-1)||(rear==front-1))
	cout<<"\n\n\t\t Circular queue is full insertion is not possible";
	else
	{
		cout<<"\n\n\t\t Enter the element in queue";
		cin>>x;
		rear=(rear+1)%n;
		a[rear]=x;
	cout<<"\n\n\t\t Element inserted successfully";
		if(front==-1)
		front=0;
		

	}
}

void cdelete()
{
	if(front==-1)
	cout<<"\n\n\t\t Circular queue is empty deletion is not possible";
	else
     {
     	cout<<"\n\n\t\t Deleted element is "<<a[front];
     	if(front==rear)
     	{
     		front=-1;
     		rear=-1;
		 }
		 else
		 front=(front+1)%n;
		 
		 
	 }
}

void ctraverse()
{
	int i;
	if(front==-1)
    cout<<"\n\n\t\t Circular queue is empty ";
    else
    {
    	cout<<"\n\n\t\t Element of circular queue are\n";
    	if(rear>=front)
    	{
    		for(i=front;i<=rear;i++)
    		cout<<"\t"<<a[i];
    		
		}
		else
		{
			for(i=front;i<n;i++)
		cout<<"\t"<<a[i];
			for(i=0;i<=rear;i++)
			cout<<"\t"<<a[i];
		}
	}
}

   void stqmenu()

   {
   							SYSTEMTIME d;
                        GetSystemTime(&d);
 system("cls");     
	cout<<"\t\t\t =====================================================\n";
	cout<<"\t\t\t|                     DATA STRUCTURE                  |\n";
	cout<<"\t\t\t|                                                     |\n";
    cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t =====================================================\n";
 	cout<<"\t\t\t\t    -------------------------------\n";
 	cout<<"\t\t\t\t    |    Static Circular Queue    |\n";
 	cout<<"\t\t\t\t    -------------------------------\n\n";

				cout<<"\n\n\t\t Enter the  size of  array : ";
				cin>>n;
		         front =-1;
				 rear =-1;        
	
	
	   	do
	{
	system("cls");
	cout<<"\t\t\t\t\t =====================================================\n";
	cout<<"\t\t\t\t\t|                     DATA STRUCTURE                  |\n";
	cout<<"\t\t\t\t\t|                                                     |\n";
    cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t =====================================================\n";
 	cout<<"\t\t\t\t\t\t    -------------------------------\n";
 	cout<<"\t\t\t\t\t\t    |    Static Circular Queue    |\n";
 	cout<<"\t\t\t\t\t\t    -------------------------------\n\n";
 	cout<<"\n\n\t\t 1.Insert data in circular queue";
 	cout<<"\n\n\t\t 2.Delete data from circular queue";
 	cout<<"\n\n\t\t 3.Display queue";
 	cout<<"\n\n\t\t 4.Exit\n\n\n\t\tEnter your choice :";
	cin>>ch;
	switch(ch)
	{
		case 1:
		 scirqueue();
		cinsert();
		break;
		case 2:
		 scirqueue();
		cdelete();
		break;
		case 3:
		 scirqueue();
		ctraverse();
		break;
		case 4:return;
		default :cout<<"\n\n\t\t invalid choice";
		
	}cout<<"\n\n\n";
	system("pause");
}while(1);

   };




class stqueue
{
	private :
		int a[200],i,n,x;
		int front,rear;
		public :
			
			stqueue()
			{
				front=-1;rear=-1;
			}
			void size()
			{
				cout<<"\n\n\t\t Enter the size of array : ";
				cin>>n;
			}
void insert()
{  
 if(front==-1&&rear==-1)
      size();
    
	if (rear == n-1)
	cout<<"\n\n\t\t Queue if full insertion is not possible";
	else
	{
		cout<<"\n\n\t\t Enter the element in the queue :";
		cin>>x;
		rear++;
		a[rear]=x;
		cout<<"\n\n\t\t Element inserted successfully";
		if (front==-1)
		front=0;
	}
	traverse();
}

void deleteq()
{
	if (front==-1&&rear==-1)
	cout<<"\n\n\t\t Queue is empty deletion is not possible";
	else
	{
		cout<<"\n\n\t\t Delete element is "<<a[front];
		if(front==rear)
		{
			front =-1;
			rear=-1;
			cout<<"\n\n\t\t Queue is empty.";
		}
		else
		front++;
		cout<<"\n\n\t\t Front = "<<front;
		cout<<"\n\n\t\t Rear =  "<<rear;
	}
}

void traverse()
{    
	if(front==-1&&rear==-1)
	cout<<"\n\n\t\t Queue is empty";
	else
	{
	cout<<"\n\n\t\t Queue is :-\n\n";
	for(i=front;i<=rear;i++)
	cout<<"\t\t\t"<<"|  "<<a[i]<<"  |"<<endl;
     cout<<"\n\n\t\t Front = "<<front;
	 cout<<"\n\n\t\t Rear =  "<<rear;
}
}


     void stqmenu()
     {
     						SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
                    
					 	while(1)
 	{
 	system("cls");
	cout<<"\t\t\t =====================================================\n";
	cout<<"\t\t\t|                     DATA STRUCTURE                  |\n";
	cout<<"\t\t\t|                                                     |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t =====================================================\n";
 	cout<<"\t\t\t\t\t  ----------------------\n";
 	cout<<"\t\t\t\t\t  |    Static Queue    |\n";
 	cout<<"\t\t\t\t\t  ----------------------\n\n";
 	cout<<"\n\n\t\t 1.Push element in queue";
 	cout<<"\n\n\t\t 2.Pop element in queue";
 	cout<<"\n\n\t\t 3.Display queue";
 	cout<<"\n\n\t\t 4.Exit\n\n\n\t\tEnter your choice :";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:    insert();
		          break;
		case 2: deleteq();
		break;
		case 3: traverse();
		break;
		case 4: return;
		                  
	 }
 	
getch();
}
	 }
};



class ststack
{
	private :
		int a[200],top,i,n,x;
		public:
			
			ststack()
			{
				top=0;
			}
			void size()
			{
				cout<<"\n\n\t\t Enter the size of array :";
				cin>>n;
			}
			void input()
			{
				if(top==0)
		          size();
				if(top<n)
				{
				cout<<"\n\n\t\t Enter the element in the stack :";
				cin>>x;
				top++;
				a[top]=x;
				cout<<"\n\n\t\t Element pushed successfully..";
			}else
			{
				cout<<"\n\n\t\t Stack is overflow..";
			}
			}
			void display()
			{
				if(top==0)
				{
					cout<<"\n\n\t\t Stack is underflow....";
				}
				else
				{
					cout<<"\n\n\t\t Top of stack = "<<a[top];
					cout<<"\n\n\t\t Stack is :-\n\n";
					for(i=top;i>=1;i--)
					{
						cout<<"\t\t\t"<<"| "<<a[i]<<" |"<<endl;
					}
				}
			}
			void pop()
			{
				if(top==0)
				{
					cout<<"\n\n\t\t Stack is underflow..";
				}
				else
				{
					cout<<"\n\n\t\t Deleted element is :"<<a[top];
					top--;
					if(top==0)
					cout<<"\n Stack is empty.";
				}
			}
			
                             void ststkmenu()
                             {
							 
						SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
                        
					 	while(1)
 	{

 	system("cls");
	cout<<"\t\t\t =====================================================\n";
	cout<<"\t\t\t|                     DATA STRUCTURE                  |\n";
	cout<<"\t\t\t|                                                     |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t =====================================================\n";
 	cout<<"\t\t\t\t\t  ----------------------\n";
 	cout<<"\t\t\t\t\t  |    Static Stack    |\n";
 	cout<<"\t\t\t\t\t  ----------------------\n\n";
 	cout<<"\n\n\t\t 1.Push element in stack";
 	cout<<"\n\n\t\t 2.Pop element in stack";
 	cout<<"\n\n\t\t 3.Display stack";
 	cout<<"\n\n\t\t 4.Exit\n\n\n\t\tEnter your choice :";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:    
		          input();
		          break;
		case 2: pop();
		break;
		case 3: display();
		break;
		case 4: return;
		                  
	 }
 	
getch();
}
		}
};

class dsorting
{
	private :
			int x,n,i,temp,j,k,min,loc,nu,last;
		node *p[1000],*c,*q[1000],*r[1000];
tree *t;	
		
		public :
			
					void bubcreate()
			{
				cout<<"\n\t Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{

					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>0)
					{
						p[i-1]->next=p[i];
					}
				}
	bubblesort();
			}
			void bubblesort()
			{
				for(i=1;i<n;i++)
				{
				cout<<"\n\t Elements after "<<i<<" swapping :-\n";
				for(j=0;j<n-i;j++)
				{
				    if(p[j]->data>p[j+1]->data)
					{
					temp=p[j]->data;
					p[j]->data=p[j+1]->data;
					p[j+1]->data=temp;
				
					}
					for(k=0;k<n;k++)
					{
						cout<<p[k]->data<<"\t";
					}
					cout<<"\n";
				}
				
			}
	bubtraverse();
			}
			void bubtraverse()
			{
				if(p[0]==NULL)
				cout<<"\n\t There is no element to search";
				else
				{
					cout<<"\n\n\t Your final sorted list is \n\n";
					for(i=0;i<n;i++)
					{
						cout<<"|"<<p[i]->data<<"|";
						if(i<n-1)
						cout<<" -> ";
					}
				}
			}
	
	
	void sltcreate()
			{
				cout<<"\n\t Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>0)
					{
						p[i-1]->next=p[i];
					}
				}
	sltselectnsort();
			}
			void sltselectnsort()
			{
				for(i=0;i<n-1;i++)
				{
					min=p[i]->data;
					loc=i;
			     cout<<"\n\t Elements after "<<i+1<<" swapping :-\n";
				for(j=i+1;j<n;j++)
				{
						
				    if(p[j]->data<min)
					{
						min=p[j]->data;
						loc=j;	
						}
					}
					if(i!=loc)
					{
					temp=p[i]->data;
					p[i]->data=p[loc]->data;
					p[loc]->data=temp;
					}
					for(k=0;k<n;k++)
					{
						cout<<p[k]->data<<"\t";
					}
					cout<<"\n";
				}
	slttraverse();			
			}
			
			void slttraverse()
			{
				if(p[0]==NULL)
				cout<<"\n\t There is no element to search";
				else
				{
					cout<<"\n\n\t Final sorted list is \n\n";
					for(i=0;i<n;i++)
					{
						cout<<"| "<<p[i]->data<<" |";
						if(i<n-1)
						cout<<" -> ";
					}
				}
			}
			
			void mrgcreate()
			{
				cout<<"\n\t Enter the total number of elements in first list of node:";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>0)
					{
						p[i-1]->next=p[i];
					}
				}
				cout<<"\n\t Enter the total number of elements in second list of node:";
				cin>>nu;
				for(i=0;i<nu;i++)
				{
					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					q[i]=c;
					if(i>0)
					{
						q[i-1]->next=q[i];
					}
				}
	mrgmergsort();
			}
			void mrgmergsort()
			{
				i=0;j=0;k=0;
				while(k<n+nu)
				{
					if(p[i]->data<=q[j]->data)
					{ 
					     r[k]=new(node);
						r[k]->data=p[i]->data;
						i++;k++;
					}
					else
					{
						r[k]=new(node);
						r[k]->data=q[j]->data;
						k++;j++;
					}
					if(i==n||j==nu)
					break;
				}
				while(i<n)
				{
					r[k]=new(node);
					r[k]->data=p[i]->data;
					i++;k++;
				}
				while(j<nu)
				{
					r[k]=new(node);
					r[k]->data=q[j]->data;
					j++;k++;
				}
	mrgtraverse();
			}
			void mrgtraverse()
			{
				if(p[0]==NULL)
				cout<<"\n\t There is no element to search";
				else
				{
					cout<<"\n\n Final sorted list is \n\n";
					for(i=0;i<n+nu;i++)
					{
						cout<<r[i]->data<<"\t";
					}
				}
			}
			
				void qkcreate()
			{
				cout<<"\n\t Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>0)
					{
						p[i-1]->next=p[i];
					}

				}
			qkqsort(0,n-1);
qkprint();
			}
             void qkqsort(int low,int up)
			{
				int d;
				if(low<up)
				{
					d=qksplit(low,up);
					qkqsort(low,d-1);
					qkqsort(d+1,up);
				}
			}
			int qksplit(int beg,int en)
			{
				int left,right,temp,loc,flag;
				loc=left=beg;
				right =en;
                flag=0;
                while(flag!=1)
                {
                    while((p[loc]->data<=p[right]->data)&&(loc!=right))
                    right--;
                    if(loc==right)
                    flag=1;
                    else if(p[loc]->data > p[right]->data)
                    {
                        temp=p[loc]->data;
                        p[loc]->data=p[right]->data;
                        p[right]->data=temp;
                        loc=right;
                    }
                    if(flag!=1)
                    {
                        while((p[loc]->data>=p[left]->data)&&(loc!=left))
                        left++;
                        if(loc==left)
                        flag=1;
                        else if(p[loc]->data<p[left]->data)
                        {

                            temp=p[loc]->data;
                            p[loc]->data=p[left]->data;
                            p[left]->data=temp;
                            loc=left;
                        }

                    }

                }
                return loc;
				}
			void qkprint()
			{
				cout<<"\n\t Sorted list is :\n\n";
				for(i=0;i<n;i++)
				{
					cout<<p[i]->data<<"\t";
				}
			cout<<"\n\n";
			}

			void radcreate()
			{
				cout<<"\n\t Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>0)
					{
						p[i-1]->next=p[i];
					}
				}
			radredsort(n);
radprint();
			}
             int radlarg(int n)
             {
                 int large=p[0]->data,i;
                 for(i=0;i<n;i++)
                 {
                     if(p[i]->data>large)
                        large=p[i]->data;

                 }
                 return large;
             }
             void radredsort(int n)
             {
                 int buck[100][100],buckc[100],i,j,k,rem,nop=0,divi=1,large,pass;
                 large=radlarg(n);
                 while(large>0)
                 {
                     nop++;
                     large/=n;
                 }
                 for(pass=0;pass<nop;pass++)
                 {
                     for(i=0;i<n;i++)
                        buckc[i]=0;
                     for(i=0;i<n;i++)
                     {
                         rem=(p[i]->data/divi)%n;
                         buck[rem][buckc[rem]]=p[i]->data;
                         buckc[rem]+=1;
                     }
                     i=0;
                     for(k=0;k<n;k++)
                     {
                         for(j=0;j<buckc[k];j++)
                         {

                             p[i]->data=buck[k][j];
                             i++;
                         }
                     }
                     divi*=n;
                 }

             }
			void radprint()
			{
				cout<<"\n\t Sorted list is :\n\n";
				for(i=0;i<n;i++)
				{
					cout<<p[i]->data<<"\t";
				}
			cout<<"\n\n";
			}

	void hpinput()
			{
				cout<<"\n\t Enter the total number of elements :";
				cin>>n;
				for(i=1;i<=n;i++)
				{
				    if(i==1)
                        p[0]=new(node);
					c=new(node);
					cout<<"\n\t Enter the data in "<<i<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>1)
					{

						p[i-1]->next=p[i];
					}
				}

p[0]->data=n;
	hpcreate();

	//sorting
	while(p[0]->data > 1)
	{
		//swap heap[1] and heap[last]
		last=p[0]->data;
		temp=p[1]->data;
		p[1]->data=p[last]->data;
		p[last]->data=temp;
		(p[0]->data)--;
		hpdown_adjust(1);
	}
hptraverse();
}



void hpcreate()
{
	int i,n;
	n=p[0]->data; //no. of elements
	for(i=n/2;i>=1;i--)
		hpdown_adjust(i);
}

void hpdown_adjust(int q)
{
	int j,temp,n,flag=1;
	n=p[0]->data;

	while(2*q<=n && flag==1)
	{
		j=2*q;	//j points to left child
		if(j+1<=n && p[j+1]->data > p[j]->data)
			j=j+1;
		if(p[q]->data > p[j]->data)
			flag=0;
		else
		{
			temp=p[q]->data;
			p[q]->data=p[j]->data;
			p[j]->data=temp;
			q=j;
		}
	}
}
void hptraverse()
			{
				if(p[0]==NULL)
				cout<<"\n\t There is no element to search";
				else
				{
					cout<<"\n\n Final sorted list is \n\n";
					for(i=1;i<=n;i++)
					{
						cout<<"|"<<p[i]->data<<"|";
						if(i<n-1)
						cout<<"->";
					}
				}
			}
			
			 void treinput()
    {

        cout<<"\n\t Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n\t Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					p[i]=c;
					if(i>0)
					{
						p[i-1]->next=p[i];
					}
				}
        t=NULL;
        cout<<"\n\t The entered elements are :-\n\n";
        for(i=0;i<n;i++)
            cout<<p[i]->data<<"\t";
        for(i=0;i<n;i++)
            treinserte(&t,p[i]->data);

            cout<<"\n\n\t Sorted list is :-\n\n";
            treprint(t);
    }

    void treinserte(tree **k,int num)
    {
        if(*k==NULL)
        {
            *k=new(tree);
            (*k)->left=NULL;
            (*k)->right=NULL;
            (*k)->num=num;
        }
        else
        {

            if(num<(*k)->num)
                treinserte(&((*k)->left),num);
            else
                treinserte(&((*k)->right),num);
        }
    }

    void treprint(tree *k)
    {

        if(k!=NULL)
        {
            treprint(k->left);
            cout<<k->num<<"\t";
            treprint(k->right);
        }
    }
    
    
    
        void phpahalsort()
        {
        	cout<<"\n\t Enter the total number of nodes :";
        	cin>>n;
        	for(i=0;i<n;i++)
        	{
        		k=i;
        		cout<<"\n\t Enter the "<<i+1<<" element of node :";
        		//fflush(stdin);
				cin>>x;
        		p[i]=new(node);
        		p[i]->data=x;
        		p[i]->next=NULL;
        		if(i>0)
        		{
        			p[i-1]->next=p[i];
				}
				if(i==0)
				{
					p[i];
				}
				else
				{
					for(i=k;i>=1;i--)
					{
						if(p[i]->data<p[i-1]->data)
						{
							temp=p[i-1]->data;
							p[i-1]->data=p[i]->data;
							p[i]->data=temp;
						}
					}
					i=k;
				}
			
			}
			
	phtraverse();
		}
					void phtraverse()
			{
				if(p[0]==NULL)
				cout<<"\n\t There is no element to search ";
				else
				{
					cout<<"\n\n\t Final sorted list is \n\n";
					for(i=0;i<n;i++)
					{
						cout<<"|"<<p[i]->data<<"|";
						if(i<n-1)
						cout<<" -> ";
					}
				}
			}


                                  void bubhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    ------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Bubble Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ------------------------------\n\n";

}
		void hphead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    ----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Heap Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------------\n\n";

}
			void inthead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    ---------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Insertion Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------------------\n\n";

}
			
			void mrghead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    -----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Merge Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------\n\n";

}
			void phhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    -----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Pahal Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------\n\n";

}
			void qkhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    -----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Quick Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------\n\n";

}
			void radhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    ------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Radix  Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ------------------------------\n\n";

}
			
			void slthead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    ---------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Selection Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------------------\n\n";

}
			
			void trehead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
    cout<<"\t\t\t\t\t\t    ---------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |    Dynamic Tree Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------------\n\n";

}
			
			
			void dsortswitch(int z)
			{
				switch(z)
				{
					case 10:
						bubhead();
						bubcreate();
getch();
						break;
					
					case 11:
						inthead();
						qkcreate();
		getch();
						break;
						case 12:
						slthead();	
							sltcreate();
				getch();
						break;
						case 13:
							mrghead();
							mrgcreate();
						getch();
						break;
						case 14:
							
							qkhead();
						qkcreate();	
						getch();
						break;
						case 15:
							
							
							radhead();
							radcreate();
						getch();
						break;
						case 16:
							
							
							hphead();
							hpinput();
					getch();
						break;
						case 17:
							
							trehead();
							treinput();
						getch();
						break;
						case 18:
							
							phhead();
							phpahalsort();
						getch();
						break;
						default: cout<<"\n\n\t\t\t Invalid choice.."; 
							      getch();
				
				}
			}
			
			
};


class sorting
{
	private :
		int p[500],i,j,n,k,temp,last,a[500],b[500],c[500],m,l,x,e[500];
		tree *t;
		public :
			
		void bubinput()
		{
             cout<<"\n\n\t\t\t Bubble Sort :- Bubble  sort  is  a  very  simple  method  that  sorts  the  array  elements  by  repeatedly  moving  the  largest\n\n\t\t\t\t\telement  to  the  highest  index  position  of  the  array  segments. In  bubble  sort, consecutive  adjacent pair  of\n\n\t\t\t\t\telements  in  the  array  are  compared  with  each  other. If  the  element  at  the  lower  index  is  greater  than\n\n\t\t\t\t\tthe  elemnt  at  the  higher  index, the  two  elements  are  interchanged  so that  the  elements  is  placed  before\n\n\t\t\t\t\tthe  bigger  one. This  process will continue  till the  list  or  unsorted  elements  exausts.\n\n\n\t Implementation  of  Bubble  sort :-\n\n\n";
			cout<<"\n\t Enter the total numbers of elements :";
			cin>>n;
                   if(n==1)
                   {
                   	cout<<"\n\n\t\t Minimum  two  elements  are  requiered..";
                   	return;
				   }
			cout<<"\n\t Enter the elements \n\n";
			for(i=0;i<n;i++)
			{
				cout<<"\n\t Enter the "<<i+1<<" element :";
				cin>>p[i];
			}
	bubbubblesort();		
		}
		void bubbubblesort()
			{
				for(i=1;i<n;i++)
				{
				cout<<"\n\t Elements after "<<i<<" swapping :-\n";
				for(j=0;j<n-i;j++)
				{
				    if(p[j]>p[j+1])
					{
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
						
					}
					cout<<"  ";
					for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
					cout<<"\n\n";
				}
				
			}
			bubprint();
			}
			void bubprint()
			{
				cout<<"\n\n\t Final sorted list is \n\n  ";
				for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
			}
			
			void hpinput()
            	{
cout<<"\n\n\t\t\t Implementation  of  Heap sort :-\n\n";
             
            	cout<<"\n\t Enter the number of elements : ";
cin>>n;

cout<<"\n\t Enter the elements : ";
for(i=1;i<=n;i++)
{
    cout<<"\n\n\t Enter the "<<i<<" element :";
cin>>p[i];

}
p[0]=n;
	hpcreate(p);

	//sorting
	while(p[0] > 1)
	{
		//swap heap[1] and heap[last]
		last=p[0];
		temp=p[1];
		p[1]=p[last];
		p[last]=temp;
		p[0]--;
		hpprint();
		hpdown_adjust(p,1);
	}


hpprint();
				}



void hpcreate(int p[])
{
	int i,n;
	n=p[0]; //no. of elements
	for(i=n/2;i>=1;i--)
		hpdown_adjust(p,i);
}

void hpdown_adjust(int p[],int i)
{
	int j,temp,n,flag=1;
	n=p[0];

	while(2*i<=n && flag==1)
	{
		j=2*i;	//j points to left child
		if(j+1<=n && p[j+1] > p[j])
			j=j+1;
		if(p[i] > p[j])
			flag=0;
		else
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
			i=j;
	    hpprint();
		}
	}
}


void hpprint()
{
cout<<"\n\t The sorted elements are: \n\n";
for(i=1;i<=n;i++)
{
cout<<p[i]<<"\t";
}
}
			
	void intinput()
			{
				cout<<"\n\n\t\t\t Insertion  Sort :- Insertion  sort  is  a  very  simple  sorting  algorithm  in  which  the  sorted  array(or list)  is  built  one\n\n\t\t\t\t\t    element  at  a time.The  main  idea  behind  insertion  sort  is  that  it  insert  each  item  into  its  proper\n\n\t\t\t\t\t    place  in  the  final  list. To  save memory,  most  implementations  of  the  insertion  sort  algorithm  work  by\n\n\t\t\t\t\t    moving  the  current  data  element  past  already  sorted  values  and  repatedly  interchanging  it  with  the\n\n\t\t\t\t\t    preceding  value  until  it  is  in  its  correct  place.\n\n\n\t Implementation  of  Inertion  sort :-\n\n";
cout<<"\n\t Enter the total numbers of elements : ";
cin>>n;
if(n==1)
                   {
                   	cout<<"\n\n\t\t Minimum  two  elements  are  requiered..";
                   	return;
				   }
cout<<"\n\t Enter the elements :\n";
for(i=0;i<n;i++)
{
cout<<"\n\t Enter the "<<i+1<<" element :";
cin>>p[i];
}
intinsertion_sort(p, n);
intprint();
			}
			
	
void intinsertion_sort(int p[], int n)
{
int i, j, temp;
for(i=1;i<n;i++)
{
temp = p[i];
j = i-1;
while((temp < p[j]) && (j>=0))
{
p[j+1] = p[j];
j--;
}
p[j+1] = temp;
intprint();
}
}

                    void intprint()
					{
						cout<<"\n\t The sorted pay is: \n\n";
for(i=0;i<n;i++)
cout<<"\t"<< p[i];

					}			
	
	void mrginput()
		{
	     
	     cout<<"\n\n\t\t\t Merge  sort :- Merge  sort  is  a  sorting  algorithm  that  uses  the  divide , conquer and  combine  algorithm  paradigm. Divide\n\n\t\t\t\t\tmeans  partitioning  the  n-element  array  to  be  sorted  into  sub  arrays  of  n/2  elements. If  A  is  an  array\n\n\t\t\t\t\tcontaining  zero  or  one  element, then  its  already  sorted. However, if  there  are  more  elements  in  the   array,\n\n\t\t\t\t\tdivide  A  into  two  sub  arrays A1  and  A2 , each  containing  about  half  of  the  element  of  A.\n\n\n\t Implementation  of  Merge  Sort :-\n\n";
		cout<<"\n\t Enter the total number of 1st sorted list :";
	cin>>m;
	printf("\n\t Enter the element of first sorted list\n");
	for(i=0;i<m;i++)
	{
		cout<<"\n\t Enter "<<i+1<<" element :";
		cin>>a[i];		
	}
		cout<<"\n\t Enter the total number of 12nd sorted list :";
	cin>>n;
	printf("\n\t Enter the element of second sorted list\n");
	for(i=0;i<n;i++)
	{
		cout<<"\n\t Enter "<<i+1<<" element :";
		cin>>b[i];		
	}
	
	mrgmsort();
		}
		
		void mrgmsort()
		{
			i=0;j=0;k=0;
	while(k<m+n)
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			i++;k++;
		}
		else
		{
			c[k]=b[j];
			k++;j++;
		}
		if(i==m||j==n)
		break;
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;j++;
	}
	mrgprint();
		}
		void mrgprint()
		{
			cout<<"\n\t Sorted list is \n";
		for(i=0;i<n+m;i++)
	{
		cout<<c[i]<<"\t";
	}
		}
			
		           void phpahalsort()
        {
             cout<<"\n\n\t\t Pahal  Sort :- Pahal  sort  is  a  new  sorting  technique  in  Data structure. In  this  sorting  technique  the  elements  are  sorted\n\n\t\t\t\tat  the  time  of  insertion  of  elements  in  the  array.\n\n\n\t Implementation  oh  pahal  sort :-\n\n";
        	cout<<"\n\t Enter the total number of nodes :";
        	cin>>n;
        	for(i=0;i<n;i++)
        	{
        		k=i;
        		cout<<"\n\t Enter the "<<i+1<<" element of node :";
        		//fflush(stdin);
				cin>>p[i];
				e[i]=p[i];
        		
				if(i==0)
				{
					p[i];
				}
				else
				{
					for(i=k;i>=1;i--)
					{
						if(p[i]<p[i-1])
						{
							temp=p[i-1];
							p[i-1]=p[i];
							p[i]=temp;
						}
					}
					i=k;
					
				}
				if(i!=0)
				phprint(k);
			}
phprinte();
		}
          
           			void phprintfn()
			{
				cout<<"\n\n\t Final sorted list is \n\n";
				for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
					cout<<"\n\n\n\n";
			}
			void phprinte()
			{
				cout<<"\n\n\t Entered Sequence is \n\n";
				for(k=0;k<n;k++)
					{
						cout<<e[k]<<"\t";
					}
	phprintfn();
			}
			void phprint(int y)
			{
				cout<<"\n\t Sorted elements are \n\n";
				for(x=0;x<=y;x++)
					{
						cout<<p[x]<<"\t";
					}
			}
			
				void qkinput()
		{

             cout<<"\n\n\t\t\t Implementation  of  Quick sort :-\n\n";
             
			cout<<"\n\t Enter the total numbers of elements :";
			cin>>n;
			cout<<"\n\t Enter the elements \n\n";
			for(i=0;i<n;i++)
			{
				cout<<"\n\t Enter the "<<i+1<<" element :";
				cin>>p[i];
			}
			qkqsort(0,n-1);
			
qkprint();
		}
		
		void qkqsort(int low,int up)
			{
				int d;
				if(low<up)
				{
					d=qksplit(low,up);
					qkqsort(low,d-1);
					qkqsort(d+1,up);
				}
			}
			int qksplit(int beg,int en)
			{
				int left,right,temp,loc,flag;
				loc=left=beg;
				right =en;
                flag=0;
                while(flag!=1)
                {
                    while((p[loc]<=p[right])&&(loc!=right))
                    right--;
                    if(loc==right)
                    flag=1;
                    else if(p[loc] > p[right])
                    {
                        temp=p[loc];
                        p[loc]=p[right];
                        p[right]=temp;
                        loc=right;
                        cout<<"\n\t Elements after swaping\n";
                         for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
					cout<<endl;
                    }
                    if(flag!=1)
                    {
                        while((p[loc]>=p[left])&&(loc!=left))
                        left++;
                        if(loc==left)
                        flag=1;
                        else if(p[loc]<p[left])
                        {

                            temp=p[loc];
                            p[loc]=p[left];
                            p[left]=temp;
                            loc=left;
                            cout<<"\n\t Elements after swaping\n";
                            for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
					cout<<endl;
                        }

                    }

                }
                return loc;
				}
				
							void qkprint()
			{
				cout<<"\n\t Final sorted list is \n\n";
				for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
			}


		void radinput()
		{
cout<<"\n\n\t\t\t Implementation  of  Radix sort :-\n\n";
             
			cout<<"\n\t Enter the total numbers of elements :";
			cin>>n;
			cout<<"\n\t Enter the elements \n\n";
			for(i=0;i<n;i++)
			{
				cout<<"\n\t Enter the "<<i+1<<" element :";
				cin>>p[i];
			}
						radredsort(n);


radprint();
		}
		                    int radlarg(int n)
             {
                 int large=p[0],i;
                 for(i=1;i<n;i++)
                 {
                     if(p[i]>large)
                        large=p[i];

                 }
                 return large;
             }
             void radredsort(int q)
             {
                 int buck[100][100],buckc[100],i,j,k,rem,nop=0,divi=1,large,pass;
                 large=radlarg(q);
                 while(large>0)
                 {
                     nop++;
                     large/=n;
                 }
                 for(pass=0;pass<nop;pass++)
                 {
                     for(i=0;i<n;i++)
                        buckc[i]=0;
                     for(i=0;i<q;i++)
                     {
                         rem=(p[i]/divi)%n;
                         buck[rem][buckc[rem]]=p[i];
                         buckc[rem]+=1;
                     }
                     i=0;
                     for(k=0;k<n;k++)
                     {
                         for(j=0;j<buckc[k];j++)
                         {

                             p[i]=buck[k][j];
                             i++;
                         }
                     }
                     divi*=n;
                 }

             }
             		void radprint()
			       {
				cout<<"\n\t Final sorted list is \n\n";
				for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
			}


	void sltinput()
		{
			cout<<"\n\n\t\t\t Selection  Sort :- Selection  sort  is  the  sorting  algorithm  thar  has  a  quadratic  running  time  complexity  of o(n^2), thereby\n\n\t\t\t\t\t    making  it  inefficient  to  be  used  on  large  lists. Altough  selection  sort  performs  worse  than  insertion\n\n\t\t\t\t\t    sort  algorithm, it  is  noted  for  its  simplicity  and  also  has  a  performance  advantages  over  more\n\n\t\t\t\t\t    complicated  algorithms in  certain  situtaions. Selection  sort  is  generally  used  for  sorting  files  with  very\n\n\t\t\t\t\t    large  objects(records) and small keys.\n\n\n\t Implementation  of  Selection Sort :-\n\n";
			cout<<"\n\t Enter the total numbers of elements :";
			cin>>n;
	if(n==1)
	{
		cout<<"\n\n\t\t Minimum  two  values  are  requiered...";
		return;
	}
			cout<<"\n\t Enter the elements \n\n";
			for(i=0;i<n;i++)
			{
				cout<<"\n\t Enter the "<<i+1<<" element :";
				cin>>p[i];
			}
	sltselectnsort();		
		}
		       			void sltselectnsort()
			{ 
			      int min ,loc;
				for(i=0;i<n-1;i++)
				{
					min=p[i];
					loc=i;
			     cout<<"\n\t Elements after "<<i+1<<" swapping :-\n";
				for(j=i+1;j<n;j++)
				{
						
				    if(p[j]<min)
					{
						min=p[j];
						loc=j;	
						}
					}
					if(i!=loc)
					{
					temp=p[i];
					p[i]=p[loc];
					p[loc]=temp;
					}
					for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
					cout<<"\n";
				}
				
	sltprint();
			}

		
		
					void sltprint()
			{
				cout<<"\n\t Final sorted list is \n\n";
				for(k=0;k<n;k++)
					{
						cout<<p[k]<<"\t";
					}
			}

    void treinput()
    {
cout<<"\n\n\t\t\t Implementation  of  Tree sort :-\n\n";
             
        cout<<"\n\t Enter the total numbers of elements :";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"\n\t Enter the "<<i+1<<" element :";
            cin>>p[i];
        }
        t=NULL;
        cout<<"\n\t The entered elements are :-\n\n";
        for(i=0;i<n;i++)
            cout<<p[i]<<"\t";
        for(i=0;i<n;i++)
            treinserte(&t,p[i]);

            cout<<"\n\n\t Sorted list is :-\n\n";
            treprint(t);
    }

    void treinserte(tree **k,int num)
    {
        if(*k==NULL)
        {
            *k=new(tree);
            (*k)->left=NULL;
            (*k)->right=NULL;
            (*k)->num=num;
        }
        else
        {

            if(num<(*k)->num)
                treinserte(&((*k)->left),num);
            else
                treinserte(&((*k)->right),num);
        }
    }

    void treprint(tree *k)
    {

        if(k!=NULL)
        {
            treprint(k->left);
            cout<<k->num<<"\t";
            treprint(k->right);
        }
    }

                                  void bubhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Bubble Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------\n\n";

}
		void hphead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Heap Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------\n\n";

}
			void inthead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Insertion Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------------\n\n";

}
			
			void mrghead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ---------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Merge Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------\n\n";

}
			void phhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ---------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Pahal Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------\n\n";

}
			void qkhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ---------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Quick Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------\n\n";

}
			void radhead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Radix  Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------\n\n";

}
			
			void slthead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Selection Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------------\n\n";

}
			
			void trehead()
                                  {
								  
                                 
		                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Tree Sort    |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------\n\n";

}
			
			








			void sortswitch(int z)
			{
				switch(z)
				{
				
				case 1:bubhead();
				bubinput();
				getch();
					break;
			
				case 2:inthead();
				intinput();
				getch();
					break;
						case 3:slthead();
						sltinput();
					getch();
					break;
						case 4:mrghead();
						mrginput();
					getch();
					break;
						case 5:qkhead();
						qkinput();
					getch();
					break;
						case 6:radhead();
						radinput();
					getch();
					break;
						case 7:hphead();
						hpinput();
					getch();
					break;
						case 8:trehead();
						treinput();
					getch();
					break;
						case 9:phhead();
						phpahalsort();
					getch();
					break;
					default :cout<<"\n\n\t\tInvalid choice...";
					          getch();
					
			}
		}
			
			
};


class search
{
	private :
	int n,i,a[4000],mid,beg,end,key,flag,val,pos,found,x;


public :
		void binsrch()
		{
			flag=0;
           cout<<"\n\n\t\t\t Binary Search :- Binary  search  is  a  searching  algorithm  that  works  efficiently  with  a  sorted  list. In binary  search\n\n\t\t\t\t\t  the  sorted  array  is  divided  according  to  the  key  value . If  the  value  of  the  search  key  is  less  than \n\n\t\t\t\t\t  the  item  in  the  middle  of  the  interval , narrow  the  interval  to  the  lower  half  otherwise  narrow it  to\n\n\t\t\t\t\t  the  other  half.\n\n\n Implementation  of  binary  search :-\n\n";
			cout<<"\n Enter the total number of elements :";
			cin>>n;
			cout<<"\n Enter the elements in the array :\n\n";
			for(i=0;i<n;i++)
			{
				cout<<"\n Enter the "<<i+1<<" element :";
				cin>>a[i];
			}
			selection_sort(n); 
        cout<<"\n The sorted aay is: \n";
       for(i=0;i<n;i++)
       cout<<a[i]<<"\t";
         
         
         binser();
		}
		int binser()
		{
			
			cout<<"\n Enter the element you want to search :";
			cin>>key;
			beg = 0, end = n-1;
while(beg<=end)
{
mid = (beg + end)/2;
if (a[mid] == key)
{
cout<<"\n\n"<<key<<" is present in the array at position "<<mid+1<<"\n";
flag =1;
break;
}
else if (a[mid]>key)
end = mid-1;
else
beg = mid+1;
}
if (beg > end && flag == 0)
cout<<"\n\n"<<key<<" does not exist in the array"<<"\n";
return 0;

				}
		int smallest(int a[], int k, int n)
{
int pos = k, small=a[k], i;
for(i=k+1;i<n;i++)
{
if(a[i]< small)
{
small = a[i];
pos = i;
}
}
return pos;
}
void selection_sort(int n)
{
int k, pos, temp;
for(k=0;k<n;k++)
{
pos = smallest(a, k, n);
temp = a[k];
a[k] = a[pos];
a[pos] = temp;
}
}

		void interpsrch()
			{
                cout<<"\n\n\t\t\t Interpollation Search :- Interpollation  search, also  known  as  Extrapollation  search,  is  a  searching  technique  that  finds\n\n\t\t\t\t\t\t  a  specified  value  in  a  sorted  array. The  concept  of  interpollation  search  is  similar  to  how\n\n\t\t\t\t\t\t  we  search  for  names  in  a  telephone  book  or  for  keys  by  which  a  book's  entries  are  ordered.\n\n\n Implementation  of  interpollation  search:-\n\n";
				cout<<"\n Enter the total numbers of elements :";
				cin >>n;
                    if(n==1)
				{
					cout<<"\n\n\t\tMinimum two value  is  required...";
					return;
				}
				cout<<"\n Enter the sorted elements:- \n";
				for(i=0;i<n;i++)
				{
					cout<<"\n Enter the "<<i+1<<" element :";
					cin>>a[i];
				}
				cout<<"\n Enter the element you want to search :";
				cin>>val;
				pos=interpol(0,n-1,val);
				if(pos==-1)
				cout<<"\n"<<val<<" is not found in the list ";
				else
				cout<<"\n"<<val<<" is found at "<<pos+1<<" position.";
			}

			int interpol(int low,int high,int val)
			{
				int mid;
				while(low<=high)
				{
					mid=low+(high-low)*((val-a[low])/(a[high]-a[low]));
					if(val==a[mid])
					return mid;
					if(val<a[mid])
					high=mid-1;
					else
					low=mid+1;
				}
				return -1;
			}	
	
		void jmpsrch()
			{
                 cout<<"\n\n\t\t\t Jump Search :- Jump  Search  works  on  sorted  list  of  array. In  jump  search  ,  it is  not  necessary  to  scan  all the  elements\n\n\t\t\t\t\tin  the  list  to  find  the  desired  value. We  just  check  an  element  and  if  it  is  less  than  the  desired  value,\n\n\t\t\t\t\tthen  some  of  the  elements  following  are  skipped  by  jumping  ahead. After  moving  a  little  forward  again,\n\n\t\t\t\t\tthe  element  is  checked. And  similarly  this  process is  repeated  until  the  element  is  not  found. \n\n\n Implementation  of  Jump  Search :-\n\n";            
				cout<<"\n Enter the total numbers of elements :";
				cin >>n;
				if(n==1)
				{
					cout<<"\n\n\t\tMinimum two value  is  required...";
					return;
				}
				cout<<"\n Enter the sorted elements:- \n";
				for(i=0;i<n;i++)
				{
					cout<<"\n Enter the "<<i+1<<" element :";
					cin>>a[i];
				}
				cout<<"\n Enter the element you want to search :";
				cin>>val;
				pos=jumpsearch(0,n-1,val,n);
				if(pos==-1)
				cout<<"\n"<<val<<" is not found in the list ";
				else
				cout<<"\n"<<val<<" is found at "<<pos+1<<" position.";
			}

			int jumpsearch(int low,int high,int val ,int n)
			{
				int i,step;
				step=sqrt(n);
				for(i=0;i<step;i++)
				{
					if(val<a[step])
					high=step-1;
					else
					low=step+1;

				}
				for(i=low;i<=high;i++)
				{
					if(a[i]==val)
					return i;
				}
				return -1;
			}
	   
	   		void linearsrch()
			{
                cout<<"\n\n\t\t\t Linear Search :- : Linear  search  is  also  called  a  Sequential  search  , is  a  very  simple  method  used  for  searching  an\n\n\t\t\t\t\t    array  for  a  particular  value. Its  worked  by  comparing  the  value  to  be  searched  with  every  element\n\n\t\t\t\t\t    of  the  array  one  by  one  in  a  sequence  until  a  match  is  found. Linear  search  is  mostly  used  to \n\n\t\t\t\t\t    search  an  unordered  list  of  elements.\n\n\nImplementaion  of Linear search :-\n\n";
				cout<<"\n Enter the total numbers of element :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"\n Enter the "<<i+1<<" element :";
					cin>>a[i];
				}
				found = 0;
			cout<<"\n Enter the element you want to search :";
			cin>>key;
			for(i=0;i<n;i++)
			{
				if(a[i]==key)
				{
					found =1;
					cout<<"\n Element found at "<<i+1<<" postion\n";
				}
			}
			if(found==0)
			cout<<"\n Element not found in the list\n";
			}

    void serchswitch(int s)
     {
     	switch(s)
     	{
		 
     	case 1:system("cls");
     	  linhead();
		 linearsrch();
     	
		  getch();
     	break;
     	case 2:binhead();
		  binsrch();
        
		 getch();
		 break;
     	case 3:intphead();
		 interpsrch();
		 getch();
		 break;
		 case 4:jmphead();
		  jmpsrch();
		 getch();
		 break;
		 default : cout<<"\n\n\t\t Invalid choice.."; 
                     getch();
	 }
}
			void binhead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Static Binary Search   |\n";
 	cout<<"\t\t\t\t\t\t\t    ------------------------------\n\n";


				  }
	

          void jmphead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Static Jump Search   |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------------\n\n";


				  }


          void intphead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t---------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t|      Static Interpollation Search   |\n";
 	cout<<"\t\t\t\t\t\t\t---------------------------------------\n\n";


				  }



          void linhead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Static Linear Search   |\n";
 	cout<<"\t\t\t\t\t\t\t    ------------------------------\n\n";


				  }
                  

};


class dsearch
{
	private :
	int n,i,mid,beg,end,key,flag,val,pos,found,x;
		node *temp,*b[4000],*c;
		
		
		public :
			
			void dbinhead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Binary Search   |\n";
 	cout<<"\t\t\t\t\t\t\t    ------------------------------\n\n";


				  }
	

          void djmphead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Jump Search   |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------------\n\n";


				  }


          void dintphead()
                  {
                  											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t---------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t|      Dynamic Interpollation Search   |\n";
 	cout<<"\t\t\t\t\t\t\t---------------------------------------\n\n";


				  }

          void dlinhead()
                  {
	             system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t    ------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |     Dynamic Linear Search   |\n";
 	cout<<"\t\t\t\t\t\t\t    ------------------------------\n\n";


				  }



			void dbinsrch()
			{
				flag=0;
 cout<<"\n\n\t\t\t Dynamic  Binary  search :- The  function  of  dynamic  binary  search  is  similar  with  normal  binary  search  but  the  difference\n\n\t\t\t\t\t\t    is  that, in normal  binary  search  we  use  the  array  data  structure  to  store the  elements  but  in\n\n\t\t\t\t\t\t    dynamic  binary  search  we  use  linked  list  for  the  dynamic  memory  allocation  to  store  the  elements.\n\n\n Implementation  of  Dynamic  binary  Search :- \n\n";
				
				cout<<"\n Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n Enter the "<<i+1<<" element :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					b[i]=c;
					if(i>0)
					{
						b[i-1]->next=b[i];
					}
				}
						dselection_sort(n); 
        cout<<"\n The sorted elements are: \n";
       for(i=0;i<n;i++)
       cout<<b[i]->data<<"\t";

	       binserc();
			}
					int binserc()
		{
			
			cout<<"\n Enter the element you want to search :";
			cin>>key;
			beg = 0, end = n-1;
while(beg<=end)
{
mid = (beg + end)/2;
if (b[mid]->data == key)
{
cout<<"\n\n"<<key<<" is present in the list at position "<<mid+1<<"\n";
flag =1;
break;
}
else if (b[mid]->data>key)
end = mid-1;
else
beg = mid+1;
}
if (beg > end && flag == 0)
cout<<"\n\n"<<key<<" does not exist in the list"<<"\n";
return 0;

				}
		int dsmallest( int k, int n)
{
int pos = k, small=b[k]->data, i;
for(i=k+1;i<n;i++)
{
if(b[i]->data< small)
{
small = b[i]->data;
pos = i;
}
}
return pos;
}
void dselection_sort(int n)
{
int k, pos, temp;
for(k=0;k<n;k++)
{
pos = dsmallest(k, n);
temp = b[k]->data;
b[k]->data = b[pos]->data;
b[pos]->data = temp;
}
}

void dintpsrch()
			{
 cout<<"\n\n\t Dynamic  Interpollation  search :- The  function  of  dynamic  Interpollation  search  is  similar  with  normal  Interpollation  search  but  the  difference\n\n\t\t\t\t\t    is  that, in normal  Interpollation  search  we  use  the  array  data  structure  to  store the  elements  but  in\n\n\t\t\t\t\t    dynamic  Interpollation  search  we  use  linked  list  for  the  dynamic  memory  allocation  to  store  the  elements.\n\n\n Implementation  of  Dynamic  Interpollation  Search :- \n\n";

				cout<<"\n Enter the total number of elements :";
				cin>>n;
				if(n==1)
				{
					cout<<"\n\n\t\t Minimum  two  values  are  required....";
					return;
				}
				cout<<"\n Enter the sorted elements \n";
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					b[i]=c;
					if(i>0)
					{
						b[i-1]->next=b[i];
					}
				}
				cout<<"\n Enter the element you want to search :";
				cin>>val;
				pos=intersear(0,n-1,val);
				if(pos==-1)
				cout<<"\n"<<val<<" is not found in the list ";
				else
				cout<<"\n"<<val<<" is found at "<<pos+1<<" position.";
			}

         int intersear(int low,int high,int val)
         {
         					int mid;
				while(low<=high)
				{
					mid=low+(high-low)*((val-b[low]->data)/(b[high]->data-b[low]->data));
					if(val==b[mid]->data)
					return mid;
					if(val<b[mid]->data)
					high=mid-1;
					else
					low=mid+1;
				}
				return -1;

		 }




			void djmpsrch()
			{

cout<<"\n\n\t\t\t Dynamic  Jump  search :- The  function  of  dynamic  jump  search  is  similar  with  normal  jump  search  but  the  difference\n\n\t\t\t\t\t\t    is  that, in normal  jump  search  we  use  the  array  data  structure  to  store the  elements  but  in\n\n\t\t\t\t\t\t    dynamic  jump  search  we  use  linked  list  for  the  dynamic  memory  allocation  to  store  the  elements.\n\n\n Implementation  of  Dynamic  jump  Search :- \n\n";

				cout<<"\n Enter the total number of elements :";
				cin>>n;
				if(n==1)
				{
					cout<<"\n\n\t\t Minimum  two  values  are  required....";
					return;
				}
				cout<<"\n Enter the sorted elements :-\n\n";
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n Enter the data in "<<i+1<<" node :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					b[i]=c;
					if(i>0)
					{
						b[i-1]->next=b[i];
					}
				}
				cout<<"\n Enter the element you want to search :";
				cin>>val;
				pos=jumps(0,n-1,val,n);
				if(pos==-1)
				cout<<"\n"<<val<<" is not found in the list ";
				else
				cout<<"\n"<<val<<" is found at "<<pos+1<<" position.";
			}

         int jumps(int low,int high,int val,int n)
         {
         		int i,step;
				step=sqrt(n);
				for(i=0;i<step;i++)
				{
					if(val<b[step]->data)
					high=step-1;
					else
					low=step+1;

				}
				for(i=low;i<=high;i++)
				{
					if(b[i]->data==val)
					return i;
				}
				return -1;

		 }
		 
		 
		 
		 
			void dlinsrch()
			{
                 cout<<"\n\n\t\t\t Dynamic  Linear  search :- The  function  of  dynamic  linear  search  is  similar  with  normal  linear  search  but  the  difference\n\n\t\t\t\t\t\t    is  that, in normal  linear  search  we  use  the  array  data  structure  to  store the  elements  but  in\n\n\t\t\t\t\t\t    dynamic  linear  search  we  use  linked  list  for  the  dynamic  memory  allocation  to  store  the  elements.\n\n\n Implementation  of  Dynamic  Linear  Search :- \n\n";
				cout<<"\n Enter the total number of elements :";
				cin>>n;
				for(i=0;i<n;i++)
				{
					c=new(node);
					cout<<"\n Enter the "<<i+1<<" elements :";
					cin>>x;
					c->data=x;
					c->next=NULL;
					b[i]=c;
					if(i>0)
					{
						b[i-1]->next=b[i];
					}
				}
				linsera();
			}
			void linsera()
			{
				int key,flag=0;
				cout<<"\n Enter the element you want to search :";
				cin>>key;
				
				for(i=0;i<n;i++)
				{
					if(b[i]->data==key)
					{
						flag=1;
						break;
					}
				}
				if(flag==1)
				cout<<"\n Element found at "<<i+1<<" position \n\n searching is successfull";
				else
				cout<<"\n Element not found ";
	
              traverse();	
			}
			void traverse()
			{
				if(b[0]==NULL)
				cout<<"\n There is no element to search";
				else
				{
					cout<<"\n\nYour data is \n\n\n";
					for(i=0;i<n;i++)
					{
						cout<<b[i]->data<<"\t";
					}
				}
			}
			
 void dserchswitch(int s)
     {
     	switch(s)
     	{
		 
     	case 5:system("cls");
dlinhead();
		 dlinsrch();

getch();
     	break;
     	case 6:      	dbinhead();
		  dbinsrch();

     	getch();
		 break;
     	case 7:dintphead();
		 dintpsrch();
		 getch();
		 break;
		 case 8:djmphead();
		  djmpsrch();
		 getch();
		 break;
		 default : cout<<"\n\n\t\t Invalid choice.."; 
                    getch();
	 }
}


};


class multiplelinked
{
	 	private :
 		int x,n,i,nu,flag,l,m;
     node *p[500],*temp,*c,*t;
 noded *pd[500],*tempd,*cd,*td;
	public :
		
		multiplelinked()
		{
			flag=1;
			m=0;
		}
		    void mllinput()
			 {
	 	cout<<"\n\t Enter the total numbers of list you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n\t Firstly create all linked list :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n\t Enter the data for "<<i+1<<"st linked list :";
	 		if(i+1==2)
	 		cout<<"\n\t Enter the data for "<<i+1<<"nd linked list :";
	 		if(i+1==3)
	 		cout<<"\n\t Enter the data for "<<i+1<<"rd linked list :";
	 		if(i+1>3)
	 		cout<<"\n\t Enter the data for "<<i+1<<"th linked list :";
	 		cin>>x;
	 		p[i]=new(node);
	 		p[i]->data=x;
	 		p[i]->next=NULL;
	 		if(i+1!=1)
	 		cout<<"\n\t Your "<<i+1<<" linked list is created successfully\n";
		 }
		 cout<<"\n\t Your "<<n<<" linked lists is created.";
		 mllprinta();
			 }
		}
			 		void mlladdend(int nu)
			 		{
			 			if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n\t There is no linked list.";
						 }
						 else
						 {
			 			cout <<"\n\t Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			temp=p[nu];
			 			while(temp->next!=NULL)
			 			{
			 				temp=temp->next;
						 }
						 c=new(node);
						 c->data=x;
						 c->next=NULL;
						 temp->next=c;
						 cout<<"\n\t Your data is added successfully.\n";
						 mllprints(nu);
					 }
				}
					 void mlladdbeg(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n\t There is no linked list.";
						 }
						 else
						 {
					 	cout <<"\n\t Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			c=new(node);
			 			c->data=x;
			 			c->next=p[nu];
			 			p[nu]=c;
			 			 cout<<"\n\t Your data is added successfully.\n";
						 mllprints(nu);
					 }
				}
					 void mlldelbeg(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n\t There is no linked list.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	cout<<"\n\t Deleted data is :"<<temp->data;
					 	if(temp->next==NULL)
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n\t All created linked lists are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n\t Data and list deleted successfully.";
						 }
						 else
						 {
						 	p[nu]=temp->next;
					 	delete(temp);
					 	cout<<"\n\n\t Data deleted successfully.\n";
					 			 mllprints(nu);
					 }
				       }
					 }
					 void mlldelend(int nu)
					 {
					 	 if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n\t There is no linked list.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	if(temp->next==NULL)
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n\t All created linked lists are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n\t Data and list deleted successfully.";
						 }
						 else
						 {
					 	while(temp->next->next!=NULL)
					 	{
					 		temp=temp->next;
						 }
						 c=temp->next;
						 cout<<"\n\t Deleted data is : "<<c->data;
						 temp->next=NULL;
						 delete (c);
						 cout<<"\n\n\t Data deleted successfully.\n";
					 			 mllprints(nu);
					}
				       }
					 }
					 void mlldelcreate(int nu)
					 {
					 	if(p[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n\t Enter the data for the list :";
					 cin>>x;
					 p[nu]=new(node);
					 p[nu]->data=x;
					 p[nu]->next=NULL;
					 cout<<"\n\t Deleted list is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n\t "<<nu+1<<" list is not created with first time created lists";
					else
					cout<<"\n\t "<<nu+1<<" is already created.";
				}
					 }
					 void mlladdlist()
					 {
					 	cout<<"\n\n\t "<<n<<" linked list is already created"<<endl;
					 	cout<<"\n\t Enter the total number of list to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n\t"<<" Enter the data for "<<i+1<<"nd list :";
					 		if(i+1==3)
					 		cout<<"\n\n\t"<<" Enter the data for "<<i+1<<"rd list :";
					 		if(i+1>3)
					 		cout<<"\n\n\t"<<" Enter the data for "<<i+1<<"th list :";
					 		cin>>x;
					 		p[i]=new(node);
					 		p[i]->data=x;
					 		p[i]->next=NULL;
					 		n++;
					 		if(n==2)
					 		cout<<"\n\t "<<n<<"nd List is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n\t "<<n<<"rd List is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n\t "<<n<<"th List is created successfully.\n";
						 }
						 cout<<"\n\t "<<n-1<<" Lists is created successfully.";
					 }
					 void mlldelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\t "<<"("<<i+1<<")"<<" linked list is already deleted\n";
					 			delete(p[i]);
							 }
							 else
							 {
							 	temp=p[i];
							 	while(temp!=NULL)
							 	{
							 		c=temp;
							 		temp=temp->next;
							 		delete(c);
								 }
								 cout<<"\n\t "<<"("<<i+1<<")"<<" linked list is deleted\n";
							 }
						 }
						 cout<<"\n\n\t All created linked list is deleted.";
					 }
					 void mlldelg(int nu)
						{
							if(p[nu]==NULL||(nu+1>n))
							{
								cout<<"\n\n\t There is no linked list.";
							}
							else
							{
						cout<<"\n\t Enter the position of node :";
						cin>>x;
						if(x==1)
						{
							mlldelbeg(nu);
						}
						else
						{
						temp=p[nu];
						c=p[nu]->next;
							  i=0;
							   while(temp->next!=NULL)
                               {
                                    temp=temp->next;
                                    i++;
										  }
										  if(x-1>i)
										  {
										  	cout<<"\n\t There is no position of node.";
										  	i=0;
										  }
										  else
										  {
										  	i=1;
										  	temp=p[nu];
							                 c=p[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	temp=temp->next;
                                         	c=c->next;
                                         	i++;
										 }
										  }
						if(c->next==NULL)
						{
							mlldelend(nu);
						}
						else if(i!=0)
						{
						cout<<"\n\t Deleted element is "<<c->data;
						temp->next=c->next;
						delete(c);	
						cout<<"\n\n\t Deleted successfully\n";
						mllprints(nu);
						}
					}
		        }
			}
				     void mlladdaft(int nu)
				     {
				     	if(p[nu]==NULL||(nu+1>n))
				     	{
				     		cout<<"\n\t There is no linked list.";
						 }
						 else
						 {
						 	cout<<"\n\t Enter the position of node :";
						 	cin>>x;
						 	if(x==1&&p[nu]->next==NULL)
						 	{
						 		mlladdend(nu);
							 }
							 else
							 {
							   temp=p[nu];
							   c=p[nu]->next;
							              i=0;
							              while(temp->next!=NULL)
                                          {
                                          	temp=temp->next;
                                          	i++;
										  }
										  if(x-1>i)
										  {
										  	cout<<"\n\t There is no position of node.";
										  	i=0;
										  }
										  else
										  {
										  	i=0;
										  	temp=p[nu];
							                 c=p[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	temp=temp->next;
                                         	c=c->next;
                                         	i++;
										 }
										  
			                 	   if(temp->next==NULL&&c==NULL)
								   {
								   	mlladdend(nu);
									   }	
									   else if(i!=0||(x==1&&p[nu]->next!=NULL))
									   {
									   	   cout<<"\n\t Enter the data to add in list :";
							               cin>>x;
							               t=new(node);
										   t->data=x;
										   temp->next=t;
										   t->next=c;
										   cout<<"\n\t Data added successfully.\n";
										   mllprints(nu);									   	
								        }
							      }
						    }
					 }
				}
				     void mllprints(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n\t There is no linked list ";
						 }
						 else
						 {
					 	cout<<"\n\t Your data is :-\n\n";
					 	temp=p[nu];
					 	while(temp!=NULL)
					 	{
					 		cout<<"|"<<temp->data<<"|"<<"  ->  ";
					 		temp=temp->next;
						 }
						 cout<<"NULL";
					 }
					 }
					 void mllprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\n\t "<<i+1<<" linked list is deleted";
							 }
							 else
							 {
					 		temp=p[i];
					 		cout<<"\n\n\t "<<"("<< i+1<<")"<<" linked list is :-\n\n\t";
					 		while(temp!=NULL)
					 		{
					 			cout<<"  |"<<temp->data<<"|"<<"  ->  ";
					 			temp=temp->next;
							 }
							 cout<<"NULL";
					 	}
						 }
					 }
					 
					 void mllhead()
					 {
					 	system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Multiple Linked List  |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------------\n";

					 }
					 void mllmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
	mllhead();
    cout<<"\n\t\t\t Multiple linked list :- The  function  of  multiple  is  same  with  the  normal  linked  list  but  the  difference  is  that,\n\n\t\t\t\t\t\t In  multiple  linked  list  we  can  create  multiple  linked  list  at  a  time  to  store  data  in\n\n\t\t\t\t\t\t multiple  linked  lists.\n";
    cout<<"\n\t\t\tExample :-  Multiple Linked lists :-\n";
    cout<<"\n\t\t\t\t\t1. |53|2000|---->|44|4000|---->|98|6000|---->|89|8000|---->|34|1600|---->|77|NULL|\n";
	cout<<"\n\t\t\t\t\t2. |68|3000|---->|38|9000|---->|52|1200|---->|12|1800|---->|36|4100|---->|21|NULL|\n";
	cout<<"\n\t\t\t\t\t3. |16|8800|---->|27|4600|---->|91|9400|---->|30|5600|---->|02|7600|---->|85|NULL|";
	cout<<"\n\n\n\t\t\tSome operation on multiple linked list :-\n";
	cout<<"\n\n\t\t\t 1.Create multiple linked list.\t\t";				 	cout<<"\t\t 2.Add data in begening of list.\n";
    cout<<"\n\t\t\t 3.Add data in end of list.\t\t";                        cout<<"\t\t 4.Delete data from begning.\n";
 	cout<<"\n\t\t\t 5.Delete data from end.\t\t";                           cout<<"\t\t 6.Print a linked list.\n";
 	cout<<"\n\t\t\t 7.Print all linked list.\t\t";                          cout<<"\t\t 8.Again create deleted list.\n";
 	cout<<"\n\t\t\t 9.Add more linked list.\t\t";                           cout<<"\t\t 10.Delete all linked list.\n";
 	cout<<"\n\t\t\t 11.Delete the entered node.\t\t";                       cout<<"\t\t 12.Add data after the entered node\n";
 	cout<<"\n\t\t\t 13.Back to MAIN MENU\n\n\n\t\t\t Enter your choice :";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
mllhead();
			if(flag==0)
 			{
 				cout<<"\n\t Linked list is already created...";
			 }
			 else
			 {
			 	mllinput();
			 }
 			break;
 		case 2:system("cls");
mllhead();
			if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	cout<<"\n\t Enter the number of list to add data :";
			 	cin>>nu;
			 	mlladdbeg(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	cout<<"\n\t Enter the number of list to add data :";
			 	cin>>nu;
			 	mlladdend(nu-1);
			 }
			 break;
			 case 4:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	cout<<"\n\t Enter the number of list to delete data :";
			 	cin>>nu;
			 	mlldelbeg(nu-1);
			 }
			 break;
			 case 5:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	cout<<"\n\t Enter the number of list to delete data :";
			 	cin>>nu;
			 	mlldelend(nu-1);
			 }
			 break;
			 case 6:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n\t All created linked list are deleted";
					 }
					 else
					 {
			 	cout<<"\n\t Enter the number of list to print :";
			 	cin>>nu;
			 	mllprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
mllhead();
			if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n\t All created linked lists are deleted";
					 }
					 else
					 mllprinta();
			 }
			 break;
			 case 8:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	cout<<"\n\t Enter the number of deleted list to again create it :";
			 	cin>>nu;
			 	mlldelcreate(nu-1);
			 }
		 	break;
		 	case 9:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	mlladdlist();
			 }
		 		break;
		 		case 10:system("cls");
mllhead();
				 mlldelall();
		 			break;
		 			case 11:system("cls");
mllhead();
					 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else
			 {
			 	cout<<"\n\t Enter the number of list to delete data :";
			 	cin>>nu;
			 	mlldelg(nu-1);
			 }
			 break;
			 case 12:system("cls");
mllhead();
			 if(flag==1)
 			{
 				cout<<"\n\t Firstly create a linked list..";
			 }
			 else   
			 {
			 	cout<<"\n\t Enter the number of list to add data :";
			 	cin>>nu;
			 	mlladdaft(nu-1);
			 }
			 break;
			 case 13:
			if(flag==0)			 
			 mlldelall();
			 return;
 	          
			 default:cout<<"\n\t Invalid choice..";
	 }
 	getch();
 }
					}
					
					
	 void mcllinput()
	 {
	 	flag=l=0;
	 	cout<<"\n Enter the total numbers of list you want to create :";
	 	cin>>n;
	 	l=n;
	 	cout<<"\n Firstly create all circular linked list :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		cout<<"\n Enter the data for "<<i+1<<" lisked list :";
	 		cin>>x;
	 		p[i]=new(node);
	 		p[i]->data=x;
	 		p[i]->next=p[i];
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" circular linked list is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" circular linked lists is created.";
		 mcllprinta();
			 }
			 		void mclladdend(int nu)
			 		{
			 			if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular linked list.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			temp=p[nu];
			 			do
			 			{
			 				temp=temp->next;
						 }while(temp->next!=p[nu]);
			 			
						 c=new(node);
						 c->data=x;
						 c->next=p[nu];
						 temp->next=c;
						 cout<<"\n Your data is added successfully.\n";
						 mcllprints(nu);
					 }
				}
					 void mclladdbeg(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular linked list.";
						 }
						 else
						 {
					 	cout <<"\n Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			temp=p[nu];
			 			do
			 			{
			 				temp=temp->next;
						 }while(temp->next!=p[nu]);
			 			
			 			c=new(node);
			 			c->data=x;
			 			c->next=p[nu];
			 			p[nu]=c;
			 			temp->next=p[nu];
			 			cout<<"\n Your data is added successfully.\n";
						mcllprints(nu);
					 }
				}
					 void mclldelbeg(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular linked list.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	c=p[nu];
					 	do{
					 		c=c->next;
						 }while(c->next!=p[nu]);
					 	cout<<"\n Deleted data is :"<<temp->data;
					 	if(temp->next==p[nu])
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created circular linked lists are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and list deleted successfully.";
						 }
						 else
						 {
						 	p[nu]=temp->next;
						 	c->next=p[nu];
					 	delete(temp);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mcllprints(nu);
					 }
				       }
					 }
					 void mclldelend(int nu)
					 {
					 	 if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular linked list.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	if(temp->next==p[nu])
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created circular linked lists are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and list deleted successfully.";
						 }
						 else
						 {
					 	do
						 {
						 	temp=temp->next;
						 }while(temp->next->next!=p[nu]);
						 c=temp->next;
						 cout<<"\n Deleted data is : "<<c->data;
						 temp->next=p[nu];
						 delete (c);
						 cout<<"\n\n Data deleted successfully.\n";
					 			 mcllprints(nu);
					}
				       }
					 }
					 void mclldelcreate(int nu)
					 {
					 	if(p[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the list :";
					 cin>>x;
					 p[nu]=new(node);
					 p[nu]->data=x;
					 p[nu]->next=p[nu];
					 cout<<"\n Deleted list is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" list is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mclladdlist()
					 {
					 	cout<<"\n\n "<<n<<" circular linked list is already created"<<endl;
					 	cout<<"\n Enter the total number of list to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<" list :";
					 		cin>>x;
					 		p[i]=new(node);
					 		p[i]->data=x;
					 		p[i]->next=p[i];
					 		n++;
					 		cout<<"\n "<<n<<" list is created successfully.";
						 }
					 }
					 void mclldelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" circular linked list is already deleted\n";
					 			delete(p[i]);
							 }
							 else
							 {
							 	temp=p[i];
							 	do
							 	{
							 		c=temp;
							 		temp=temp->next;
							 		delete(c);
								 }while(temp!=p[i]);
								 cout<<"\n "<<"("<<i+1<<")"<<" circular linked list is deleted\n";
							 }
						 }
						 cout<<"\n\n All created circular linked list is deleted.";
					 }
					 void mclldelg(int nu)
						{
							if(p[nu]==NULL||(nu+1>n))
							{
								cout<<"\n\n There is no circular linked list.";
							}
							else
							{
						cout<<"\n Enter the position of node :";
						cin>>x;
						if(x==1)
						{
							mclldelbeg(nu);
						}
						else
						{
						temp=p[nu];
						c=p[nu]->next;
							  i=0;
							              do
                                          {
                                          	temp=temp->next;
                                          	i++;
										  }while(temp->next!=p[nu]);
										  if(x-1>i)
										  {
										  	cout<<"\n There is no position of node.";
										  	i=0;
										  }
										  else
										  {
										  	i=1;
										  	temp=p[nu];
							                 c=p[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	temp=temp->next;
                                         	c=c->next;
                                         	i++;
										 }
										  }
						if(c->next==p[nu])
						{
							mclldelend(nu);
						}
						else if(i!=0)
						{
						cout<<"\n Deleted element is "<<c->data;
						temp->next=c->next;
						delete(c);	
						cout<<"\n\n Deleted successfully";
						}
					}
					}
					
				}
				     void mclladdaft(int nu)
				     {
				     	if(p[nu]==NULL||(nu+1>n))
				     	{
				     		cout<<"\n There is no circular linked list.";
						 }
						 else
						 {
						 	cout<<"\n Enter the position of node :";
						 	cin>>x;
						 	if(x==1&&p[nu]->next==p[nu])
						 	{
						 		mclladdend(nu);
							 }
							 else
							 {
							   temp=p[nu];
							   c=p[nu]->next;
							   			i=0;
							              do
                                          {
                                          	temp=temp->next;
                                          	i++;
										  }while(temp->next!=p[nu]);
										  if(x-1>i)
										  {
										  	cout<<"\n There is no position of node.";
										  	i=0;
										  }
										  else
										  {
										  	i=0;
										  	temp=p[nu];
							                 c=p[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	temp=temp->next;
                                         	c=c->next;
                                         	i++;
										 }
										  
								   if(temp->next==p[nu]&&c==p[nu])
								   {
								   	mclladdend(nu);
									   }	
									   else if(i!=0||(x==1&&p[nu]->next!=p[nu]))
									   {
									   	     
									   	   cout<<"\n Enter the data to add in list :";
							               cin>>x;
							               t=new(node);
										   t->data=x;
										   temp->next=t;
										   t->next=c;
										   cout<<"\n Data added successfully.\n";
										   mcllprints(nu);									   	
									   
								}
							 }
						 }
						
					 }
				 }
					 void mcllprints(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular linked list ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	temp=p[nu];
					 	do
					 	{
					 		cout<<"|"<<temp->data<<"|";
					 		if(temp->next!=p[nu])
					 		cout<<"  ->   ";
					 		else
					 		cout<<"   ->   {"<<p[nu]->data<<"}";
					 		temp=temp->next;
						 }while(temp!=p[nu]);
						 
					 }
					 }
					 void mcllprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" circular linked list is deleted";
							 }
							 else
							 {
					 		temp=p[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" circular linked list is :-\n\n";
					 		do
					 		{
					 			cout<<"   |"<<temp->data<<"|";
					 			if(temp->next!=p[i])
					 			cout<<"  ->   ";
					 			else
					 			cout<<"   ->   {"<<p[i]->data<<"}";
					 			temp=temp->next;
							 }while(temp!=p[i]);
							 
					 	}
					 	
						 }
						 
					 }  
					 
					 void mcllhead()
					  {
					 	system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -----------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Multiple Circular Linked List  |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------------\n";

					 }
					 void mcllmenu()
					 {
					 	int ch;
					 	while(1)
 	{
 	
	system("cls");
mcllhead();
    cout<<"\n\t Multiple circular linked list:- The  function of  multiple circular linked list is  same  with the  normal circular linked  list  but the  difference  is that,\n\n\t\t\t\t\t In  multiple circular linked  list  we  can  create  multiple circular linked  list  at  a  time  to  store  data  in\n\n\t\t\t\t\t multiple circular linked  lists. We  can  easily  access  the  multiple  circular linked  list  at  a  time.\n";
    cout<<"\n\t\t\tExample :-  Multiple circular Linked lists :-\n";
    cout<<"\n\t\t\t\t\t1. |53|2000|---->|44|4000|---->|98|6000|---->|89|8000|---->|34|1600|---->|77|1000|\n";
	cout<<"\n\t\t\t\t\t2. |68|3000|---->|38|9000|---->|52|1200|---->|12|1800|---->|36|4100|---->|21|3900|\n";
	cout<<"\n\t\t\t\t\t3. |16|8800|---->|27|4600|---->|91|9400|---->|30|5600|---->|02|7600|---->|85|7000|";
	cout<<"\n\n\n\t\t\tSome operation on multiple linked list :-\n\n";

	cout<<"\n\t\t\t 1.Create multiple circular linked list.\t\t";			  cout<<" 2.Add data in begening of list.\n";

 	cout<<"\n\t\t\t 3.Add data in end of list.\t\t";                        cout<<"\t\t 4.Delete data from begning.\n";
 	
 	cout<<"\n\t\t\t 5.Delete data from end.\t\t";                           cout<<"\t\t 6.Print a circular linked list.\n";
 	
 	cout<<"\n\t\t\t 7.Print all circular linked list.\t\t";                 cout<<"\t 8.Again create deleted list.\n";
 	
 	cout<<"\n\t\t\t 9.Add more circular linked list.\t\t";                  cout<<"\t 10.Delete all circular linked list.\n";
 	
 	cout<<"\n\t\t\t 11.Delete the entered node.\t\t";                       cout<<"\t\t 12.Add data after the entered node\n";
 	
 	cout<<"\n\t\t\t 13.Back to MAIN MENU\n\n\t\t\t Enter your choice :";
 cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
mcllhead();

 			if(flag==0)
 			{
 				cout<<"\n Circular linked list is already created...";
			 }
			 else
			 {
			 	mcllinput();
			 }
 			break;
 		case 2:system("cls");
mcllhead();

 			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mclladdbeg(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
mcllhead();

			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mclladdend(nu-1);
			 }
			 break;
			 case 4:system("cls");
mcllhead();

			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mclldelbeg(nu-1);
			 }
			 break;
			 case 5:system("cls");
mcllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mclldelend(nu-1);
			 }
			 break;
			 case 6:system("cls");
mcllhead();

			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created circular linked list are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mcllprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
mcllhead();

			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created circular linked lists are deleted";
					 }
					 else
					 mcllprinta();
			 }
			 break;
			 case 8:system("cls");
mcllhead();

			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
			 	mclldelcreate(nu-1);
			 }
		 	break;
		 	case 9:system("cls");
mcllhead();

			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	mclladdlist();
			 }
		 		break;
		 		case 10:system("cls");
mcllhead();

				 mclldelall();
		 			break;
		 			case 11:system("cls");
mcllhead();

					 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mclldelg(nu-1);
			 }
			 break;
			 case 12:system("cls");
mcllhead();

			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mclladdaft(nu-1);
			 }
			 break;
			 case 13:
			 if(flag==0)
			 mclldelall();
			 return;
			 default:cout<<"\n Invalid choice..";
			 	
	 }
 	getch();
 }
					 }

	 void mdllinput()
	 {
	 	cout<<"\n Enter the total numbers of list you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all doubly linked list :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st doubly linked list :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd doubly linked list :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd doubly linked list :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th doubly linked list :";
	 		cin>>x;
	 		pd[i]=new(noded);
	 		pd[i]->data=x;
	 		pd[i]->next=NULL;
	 		pd[i]->prev=NULL;
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" doubly linked list is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" doubly linked lists is created.";
		 mdllprinta();
			 }
		}
			 		void mdlladdend(int nu)
			 		{
			 			if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly linked list.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			tempd=pd[nu];
			 			while(tempd->next!=NULL)
			 			{
			 				tempd=tempd->next;
						 }
						 cd=new(noded);
						 cd->data=x;
						 cd->next=NULL;
						 tempd->next=cd;
						 cd->prev=tempd;
						 cout<<"\n Your data is added successfully.\n";
						 mdllprints(nu);
					 }
				}
					 void mdlladdbeg(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly linked list.";
						 }
						 else
						 {
					 	cout <<"\n Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			cd=new(noded);
			 			cd->data=x;
			 			cd->next=pd[nu];
			 			cd->prev=NULL;
			 			pd[nu]->prev=cd;
			 			pd[nu]=cd;
			 			 cout<<"\n Your data is added successfully.\n";
						 mdllprints(nu);
					 }
				}
					 void mdlldelbeg(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly linked list.";
						 }
						 else
						 {
					 	tempd=pd[nu];
					 	cout<<"\n Deleted data is :"<<tempd->data;
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created doubly linked lists are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and list deleted successfully.";
						 }
						 else
						 {
						 	pd[nu]=tempd->next;
						 	pd[nu]->prev=NULL;
					 	delete(tempd);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mdllprints(nu);
					 }
				       }
					 }
					 
					 void mdlldelend(int nu)
					 {
					 	 if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly linked list.";
						 }
						 else
						 {
					 	tempd=pd[nu];
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created doubly linked lists are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and list deleted successfully.";
						 }
						 else
						 {
					 	while(tempd->next!=NULL)
					 	{
					 		tempd=tempd->next;
						 }
						 cd=tempd->prev;
						 cout<<"\n Deleted data is : "<<tempd->data;
						 cd->next=NULL;
						 delete (tempd);
						 cout<<"\n\n Data deleted successfully.\n";
					 			 mdllprints(nu);
					}
				       }
					 }
					 void mdlldelcreate(int nu)
					 {
					 	if(pd[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the list :";
					 cin>>x;
					 pd[nu]=new(noded);
					 pd[nu]->data=x;
					 pd[nu]->next=NULL;
					 pd[nu]->prev=NULL;
					 cout<<"\n Deleted list is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" list is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mdlladdlist()
					 {
					 	cout<<"\n\n "<<n<<" doubly linked list is already created"<<endl;
					 	cout<<"\n Enter the total number of list to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd list :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd list :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th list :";
					 		cin>>x;
					 		pd[i]=new(noded);
					 		pd[i]->data=x;
					 		pd[i]->next=NULL;
					 		pd[i]->prev=NULL;
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd List is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd List is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th List is created successfully.\n";
						 }
						 cout<<"\n "<<n<<" Lists is created successfully.";
					 }
					 void mdlldelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" doubly linked list is already deleted\n";
					 			delete(pd[i]);
							 }
							 else
							 {
							 	tempd=pd[i];
							 	while(tempd!=NULL)
							 	{
							 		cd=tempd;
							 		tempd=tempd->next;
							 		delete(cd);
								 }
								 cout<<"\n "<<"("<<i+1<<")"<<" doubly linked list is deleted\n";
							 }
						 }
						 cout<<"\n\n All created doubly linked list is deleted.";
					 }
					 void mdlldelg(int nu)
						{
							if(pd[nu]==NULL||(nu+1>n))
							{
								cout<<"\n\n There is no doubly linked list.";
							}
							else
							{
						cout<<"\n Enter the position of node :";
						cin>>x;
						if(x==1)
						{
							mdlldelbeg(nu);
						}
						else
						{
						tempd=pd[nu];
						cd=pd[nu]->next;
							  i=0;
							   while(tempd->next!=NULL)
                               {
                                    tempd=tempd->next;
                                    i++;
										  }
										  if(x-1>i)
										  {
										  	cout<<"\n There is no position of noded.";
										  	i=0;
										  }
										  else
										  {
										  	i=1;
										  	tempd=pd[nu];
							                 cd=pd[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	tempd=tempd->next;
                                         	cd=cd->next;
                                         	i++;
										 }
										  }
						if(cd->next==NULL&&cd->prev!=NULL)
						{
							mdlldelend(nu);
						}
						else if(i!=0)
						{
						cout<<"\n Deleted element is "<<cd->data;
						tempd->next=cd->next;
						cd->next->prev=tempd;
						delete(cd);	
						cout<<"\n\n Deleted successfully\n";
						mdllprints(nu);
						}
					}
		        }
			}
				     void mdlladdaft(int nu)
				     {
				     	if(pd[nu]==NULL||(nu+1>n))
				     	{
				     		cout<<"\n There is no doubly linked list.";
						 }
						 else
						 {
						 	cout<<"\n Enter the position of node :";
						 	cin>>x;
						 	if(x==1&&pd[nu]->next==NULL)
						 	{
						 		mdlladdend(nu);
							 }
							 else
							 {
							   tempd=pd[nu];
							   cd=pd[nu]->next;
							              i=0;
							              while(tempd->next!=NULL)
                                          {
                                          	tempd=tempd->next;
                                          	i++;
										  }
										  if(x-1>i)
										  {
										  	cout<<"\n There is no position of noded.";
										  	i=0;
										  }
										  else
										  {
										  	i=0;
										  	tempd=pd[nu];
							                 cd=pd[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	tempd=tempd->next;
                                         	cd=cd->next;
                                         	i++;
										 }
										  
			                 	   if(tempd->next==NULL&&cd==NULL)
								   {
								   	mdlladdend(nu);
									   }	
									   else if(i!=0||(x==1&&pd[nu]->next!=NULL))
									   {
									   	   cout<<"\n Enter the data to add in list :";
							               cin>>x;
							               td=new(noded);
										   td->data=x;
										   tempd->next=td;
										   td->prev=tempd;
										   td->next=cd;
										   cd->prev=td;
										   cout<<"\n Data added successfully.\n";
										   mdllprints(nu);									   	
								        }
							      }
						    }
					 }
				}
				     void mdllprints(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly linked list ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	cout<<" NULL  <-  ";
					 	while(tempd!=NULL)
					 	{
					 		cout<<"|"<<tempd->data<<"|";
					 		tempd=tempd->next;
					 		if(tempd!=NULL)
					 		cout<<"  <->  ";
					 	}
						 cout<<"   ->  NULL";
					mdllrevs(nu);
					}

					 }
					 void mdllrevs(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly linked list ";
						 }
						 else
						 {
			
					 	tempd=pd[nu];
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		cout<<"\n\n Reverse of list \n\n";
					 		cout<<"NULL   <- |"<<tempd->data<<"| ->  NULL";
						 }
						 else
						 {
						 
					 	while(1)
					 	{
					 		tempd=tempd->next;
					 		if(tempd->next==NULL)
					 			break;
						}
						cout<<"\n\n Reverse of the list is :-\n\n";
						cout<<" NULL   <-   ";
						while(tempd!=NULL)
						{
							cout<<"|"<<tempd->data<<"|";
							tempd=tempd->prev;
							if(tempd!=NULL)
					 		cout<<"  <->  ";
						}cout<<"    ->   NULL";
				        	 }
				        }
				}
					 void mdllprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" doubly linked list is deleted";
							 }
							 else
							 {
					 		tempd=pd[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" doubly linked list is :-\n\n";
					 		cout<<" NULL  <-  ";
					 		while(tempd!=NULL)
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->next;
					 			if(tempd!=NULL)
					 	        	cout<<"  <->  ";
							 }
							 cout<<"    ->   NULL";
					 	}
						 }
					 }
					 void mdllrevprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" doubly linked list is deleted";
							 }
							 else
							 {
							 	cd=pd[i];
							 	while(cd->next!=NULL)
							 	cd=cd->next;
					 		tempd=cd;
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" doubly linked list is :-\n\n";
					 		cout<<" NULL  <-  ";
					 		while(tempd!=NULL)
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->prev;
					 			if(tempd!=NULL)
					 		cout<<"  <->  ";
							 }
							 cout<<"   ->   NULL";
					 	}
						 }
					 }
					 
					 void mdllhead()
					 {
					 						 	system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    ---------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Multiple Doubly Linked List  |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------------------\n";


					 }
					 void mdllmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
     mdllhead();
    cout<<"\n\t Multiple doubly linked list:- The  function of  multiple doubly linked list is  same  with the  normal doubly linked  list  but the  difference  is that,\n\n\t\t\t\t\t In  multiple doubly linked  list  we  can  create  multiple doubly linked  list  at  a  time  to  store  data  in\n\n\t\t\t\t\t multiple doubly linked  lists. We  can  easily  access  the  multiple  doubly linked  list  at  a  time.\n";
    cout<<"\n\n\t\t\tExample :-  Multiple doubly Linked lists :-\n";
    cout<<"\n\t\t\t\t\t1. |NULL|53|2000|<--->|1000|44|4000|<--->|2000|98|6000|<--->|4000|89|8000|<--->|6000|34|1600|<--->|8000|77|NULL|\n";
	cout<<"\n\t\t\t\t\t2. |NULL|10|3000|<--->|7000|94|9000|<--->|8900|24|9800|<--->|9400|39|9900|<--->|9200|20|6400|<--->|5200|85|NULL|\n";
	cout<<"\n\t\t\t\t\t3. |NULL|18|1700|<--->|1000|87|8700|<--->|1100|43|3800|<--->|1700|28|2400|<--->|2100|19|8700|<--->|2700|27|NULL|";
	cout<<"\n\n\n\t\t\tSome operation on multiple doubly linked list :-\n\n";

	cout<<"\n\t\t\t 1.Create multiple doubly linked list.\t\t";				  cout<<"\t 2.Add data in begening of list.\n";
    cout<<"\n\t\t\t 3.Add data in end of list.\t\t";                        cout<<"\t\t 4.Delete data from begning.\n";
 	cout<<"\n\t\t\t 5.Delete data from end.\t\t";                           cout<<"\t\t 6.Print a doubly linked list.\n";
 	cout<<"\n\t\t\t 7.Print all doubly linked list.\t\t";                   cout<<"\t 8.Again create deleted list.\n";
 	cout<<"\n\t\t\t 9.Add more doubly linked list.\t\t";                    cout<<"\t\t 10.Delete all doubly linked list.\n";
 	cout<<"\n\t\t\t 11.Delete the entered node.\t\t";                       cout<<"\t\t 12.Add data after the entered node\n";
 	cout<<"\n\t\t\t 13.Reverse print of all doubly linked list.\t\t";       cout<<" 14.Back to MAIN MENU\n\n\t\t\t Enter your choice :";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
     mdllhead();
			if(flag==0)
 			{
 				cout<<"\n doubly linked list is already created...";
			 }
			 else
			 {
			 	mdllinput();
			 }
 			break;
 		case 2:system("cls");
     mdllhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mdlladdbeg(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mdlladdend(nu-1);
			 }
			 break;
			 case 4:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mdlldelbeg(nu-1);
			 }
			 break;
			 case 5:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mdlldelend(nu-1);
			 }
			 break;
			 case 6:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created doubly linked list are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mdllprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
     mdllhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created doubly linked lists are deleted";
					 }
					 else
					 mdllprinta();
			 }
			 break;
			 case 8:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
			 	mdlldelcreate(nu-1);
			 }
		 	break;
		 	case 9:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	mdlladdlist();
			 }
		 		break;
		 		case 10:system("cls");
     mdllhead();
				 mdlldelall();
		 			break;
		 			case 11:system("cls");
     mdllhead();
					 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mdlldelg(nu-1);
			 }
			 break;
			 case 12:system("cls");
     mdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else   
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mdlladdaft(nu-1);
			 }
			 break;
			 
			 case 13:
			 	     system("cls");
     mdllhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a doubly linked list..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created doubly linked lists are deleted";
					 }
					 else
					 mdllrevprinta();
			 }
			 break;
			 case 14:
			 if(flag==0)
			 mdlldelall();
			 return;
			 default:cout<<"\n Invalid choice..";
	 }
 	getch();
 }
					}


	 void mcdllinput()
	 {
	 	cout<<"\n Enter the total numbers of list you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all circular doubly linked list :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st circular doubly linked list :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd circular doubly linked list :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd circular doubly linked list :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th circular doubly linked list :";
	 		cin>>x;
	 		pd[i]=new(noded);
	 		pd[i]->data=x;
	 		pd[i]->next=pd[i];
	 		pd[i]->prev=pd[i];
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" circular doubly linked list is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" circular doubly linked lists is created.";
		 mcdllprinta();
			 }
		}
			 		void mcdlladdend(int nu)
			 		{
			 			if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular doubly linked list.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			tempd=pd[nu];
			 			do
			 			{
			 				tempd=tempd->next;
						 }while(tempd->next!=pd[nu]);
						 cd=new(noded);
						 cd->data=x;
						 cd->next=pd[nu];
						 tempd->next=cd;
						 pd[nu]->prev=cd;
						 cd->prev=tempd;
						 cout<<"\n Your data is added successfully.\n";
						 mcdllprints(nu);
					 }
				}
					 void mcdlladdbeg(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular doubly linked list.";
						 }
						 else
						 {
						 	tempd=pd[nu];
						 	do
			 			{
			 				tempd=tempd->next;
						 }while(tempd->next!=pd[nu]);
					 	cout <<"\n Enter the data to add in "<<nu+1<<" list :";
			 			cin>>x;
			 			cd=new(noded);
			 			cd->data=x;
			 			cd->next=pd[nu];
			 			pd[nu]->prev=cd;
			 			cd->prev=tempd;
			 			tempd->next=cd;
			 			pd[nu]=cd;
			 			 cout<<"\n Your data is added successfully.\n";
						 mcdllprints(nu);
					 }
				}
					 void mcdlldelbeg(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular doubly linked list.";
						 }
						 else
						 {
					 	tempd=cd=pd[nu];
					 	cout<<"\n Deleted data is :"<<tempd->data;
					 	if(tempd->next==pd[nu]&&tempd->prev==pd[nu])
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created circular doubly linked lists are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and list deleted successfully.";
						 }
						 else
						 {
						 	do
			 			{
			 				cd=cd->next;
						 }while(cd->next!=pd[nu]);
						 	pd[nu]=tempd->next;
						 	pd[nu]->prev=cd;
						 	cd->next=pd[nu];
					 	delete(tempd);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mcdllprints(nu);
					 }
				       }
					 }
					 
					 void mcdlldelend(int nu)
					 {
					 	 if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular doubly linked list.";
						 }
						 else
						 {
					 	tempd=pd[nu];
					 	if(tempd->next==pd[nu]&&tempd->prev==pd[nu])
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created circular doubly linked lists are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and list deleted successfully.";
						 }
						 else
						 {
					 	do
					 	{
					 		tempd=tempd->next;
						 }while(tempd->next!=pd[nu]);
						 cd=tempd->prev;
						 cout<<"\n Deleted data is : "<<tempd->data;
						 cd->next=pd[nu];
						 pd[nu]->prev=cd;
						 delete (tempd);
						 cout<<"\n\n Data deleted successfully.\n";
					 			 mcdllprints(nu);
					}
				       }
					 }
					 void mcdlldelcreate(int nu)
					 {
					 	if(pd[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the list :";
					 cin>>x;
					 pd[nu]=new(noded);
					 pd[nu]->data=x;
					 pd[nu]->next=pd[nu];
					 pd[nu]->prev=pd[nu];
					 cout<<"\n Deleted list is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" list is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mcdlladdlist()
					 {
					 	cout<<"\n\n "<<n<<" circular doubly linked list is already created"<<endl;
					 	cout<<"\n Enter the total number of list to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd list :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd list :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th list :";
					 		cin>>x;
					 		pd[i]=new(noded);
					 		pd[i]->data=x;
					 		pd[i]->next=pd[i];
					 		pd[i]->prev=pd[i];
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd List is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd List is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th List is created successfully.\n";
						 }
						 cout<<"\n "<<n<<" Lists is created successfully.";
					 }
					 void mcdlldelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" circular doubly linked list is already deleted\n";
					 			delete(pd[i]);
							 }
							 else
							 {
							 	tempd=pd[i];
							 	do
							 	{
							 		cd=tempd;
							 		tempd=tempd->next;
							 		delete(cd);
								 }while(tempd!=pd[i]);
								 cout<<"\n "<<"("<<i+1<<")"<<" circular doubly linked list is deleted\n";
							 }
						 }
						 cout<<"\n\n All created circular doubly linked list is deleted.";
					 }
					 void mcdlldelg(int nu)
						{
							if(pd[nu]==NULL||(nu+1>n))
							{
								cout<<"\n\n There is no circular doubly linked list.";
							}
							else
							{
						cout<<"\n Enter the position of node :";
						cin>>x;
						if(x==1)
						{
							mcdlldelbeg(nu);
						}
						else
						{
						tempd=pd[nu];
						cd=pd[nu]->next;
							  i=0;
							   while(tempd->next!=pd[nu])
                               {
                                    tempd=tempd->next;
                                    i++;
										  }
										  if(x-1>i)
										  {
										  	cout<<"\n There is no position of noded.";
										  	i=0;
										  }
										  else
										  {
										  	i=1;
										  	tempd=pd[nu];
							                 cd=pd[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	tempd=tempd->next;
                                         	cd=cd->next;
                                         	i++;
										 }
										  }
						if(cd->next==pd[nu]&&cd->prev!=pd[nu])
						{
							mcdlldelend(nu);
						}
						else if(i!=0)
						{
						cout<<"\n Deleted element is "<<cd->data;
						tempd->next=cd->next;
						cd->next->prev=tempd;
						delete(cd);	
						cout<<"\n\n Deleted successfully\n";
						mcdllprints(nu);
						}
					}
		        }
			}
				     void mcdlladdaft(int nu)
				     {
				     	if(pd[nu]==NULL||(nu+1>n))
				     	{
				     		cout<<"\n There is no circular doubly linked list.";
						 }
						 else
						 {
						 	cout<<"\n Enter the position of node :";
						 	cin>>x;
						 	if(x==1&&pd[nu]->next==NULL)
						 	{
						 		mcdlladdend(nu);
							 }
							 else
							 {
							   tempd=pd[nu];
							   cd=pd[nu]->next;
							              i=0;
							              while(tempd->next!=pd[nu])
                                          {
                                          	tempd=tempd->next;
                                          	i++;
										  }
										  if(x-1>i)
										  {
										  	cout<<"\n There is no position of node.";
										  	i=0;
										  }
										  else
										  {
										  	i=0;
										  	tempd=pd[nu];
							                 cd=pd[nu]->next;
							   
										  	while(i<x-1)
                                         {
                                         	tempd=tempd->next;
                                         	cd=cd->next;
                                         	i++;
										 }
										  
			                 	   if(tempd->next==pd[nu]&&cd==pd[nu])
								   {
								   	mcdlladdend(nu);
									   }	
									   else if(i!=0||(x==1&&pd[nu]->next!=pd[nu]))
									   {
									   	   cout<<"\n Enter the data to add in list :";
							               cin>>x;
							               td=new(noded);
										   td->data=x;
										   tempd->next=td;
										   td->prev=tempd;
										   td->next=cd;
										   cd->prev=td;
										   cout<<"\n Data added successfully.\n";
										   mcdllprints(nu);									   	
								        }
							      }
						    }
					 }
				}
				     void mcdllprints(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular doubly linked list ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	cout<<"{"<<pd[nu]->prev->data<<"}"<<"  <-  ";
					 	do
					 	{
					 		cout<<"|"<<tempd->data<<"|";
					 		tempd=tempd->next;
					 		if(tempd!=pd[nu])
					 		cout<<"  <->  ";
					 	}while(tempd!=pd[nu]);
					 	cout<<"  ->  "<<"{"<<pd[nu]->data<<"}";
					mcdllrevs(nu);						 
					}

					 }
					 void mcdllrevs(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular doubly linked list ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	while(1)
					 	{
					 		tempd=tempd->next;
					 		if(tempd->next==pd[nu])
					 			break;
						}
						cd=tempd;
						cout<<"\n\n Reverse of the list is :-\n\n";
						      cout<<"{"<<pd[nu]->data<<"}"<<"   <-   ";
						do
						{
							cout<<"|"<<tempd->data<<"|";
							tempd=tempd->prev;
							if(tempd!=cd)
							cout<<"  <->  ";
						}while(tempd!=cd);
						cout<<"  ->  "<<"{"<<pd[nu]->prev->data<<"}";
				        	 }
				}
					 void mcdllprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" circular doubly linked list is deleted";
							 }
							 else
							 {
					 		tempd=pd[i];
					 		cout<<"\n\n "<<"("<<i+1<<")"<<" circular doubly linked list is :-\n\n";
					 		cout<<"{"<<pd[i]->prev->data<<"}"<<"  <-  ";
					 		do
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->next;
					 			if(tempd!=pd[i])
					 			cout<<"  <->  ";
							 }while(tempd!=pd[i]);
							 cout<<"  ->  "<<"{"<<pd[i]->data<<"}";
							
												 	}
						 }
					 }
					 void mcdllrevprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" circular doubly linked list is deleted";
							 }
							 else
							 {
							 	cd=pd[i];
							 	while(cd->next!=pd[i])
							 	cd=cd->next;
					 		tempd=cd;
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" circular doubly linked list is :-\n\n";
					 		cout<<"{"<<pd[i]->data<<"}"<<"   <-   ";
					 		do
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->prev;
					 			if(tempd!=cd)
					 			cout<<"  <->  ";
							 }while(tempd!=cd);
							 cout<<"   ->  "<<"{"<<pd[i]->prev->data<<"}";
					 	}
						 }
					 }
					 
					 void mcdllhead()
					 {
					 							 	system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t    ------------------------------------------\n";
 	cout<<"\t\t\t\t\t\t    |  Multiple Circular Doubly Linked List  |\n";
 	cout<<"\t\t\t\t\t\t    ------------------------------------------\n";


					 }
					 void mcdllmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
	mcdllhead();
    cout<<"\n\t Multiple circular doubly linked list:- The  function  of  multiple  circular  doubly  linked  list is  same  with the  normal  circular  doubly  linked\n\n\t\t\t\t\t\tlist  but the  difference  is  that, In  multiple  circular  doubly linked  list  we  can  create  multiple circular\n\n\t\t\t\t\t\tdoubly  linked  list  at  a  time  to  store  data  in  multiple  circular  doubly linked  lists. We  can  easily\n\n\t\t\t\t\t\taccess  the  multiple  circular  doubly linked  list  at  a  time.\n";
    cout<<"\n\n\t\t\tExample :-  Multiple doubly Linked lists :-\n";
    cout<<"\n\t\t\t\t\t1. |8325|53|2000|<--->|1000|44|4000|<--->|2000|98|6000|<--->|4000|89|8000|<--->|6000|34|1600|<--->|8000|77|7891|\n";
	cout<<"\n\t\t\t\t\t2. |1254|10|3000|<--->|7000|94|9000|<--->|8900|24|9800|<--->|9400|39|9900|<--->|9200|20|6400|<--->|5200|85|7858|\n";
	cout<<"\n\t\t\t\t\t3. |3265|18|1700|<--->|1000|87|8700|<--->|1100|43|3800|<--->|1700|28|2400|<--->|2100|19|8700|<--->|2700|27|8569|";
	cout<<"\n\n\n\t\t\tSome operation on multiple doubly linked list :-\n\n";
	
	cout<<"\n\t\t\t 1.Create multiple circular doubly linked list.\t\t";		   cout<<"\t 2.Add data in begening of list.\n";
    cout<<"\n\t\t\t 3.Add data in end of list.\t\t";                               cout<<"\t\t\t 4.Delete data from begning.\n";
 	cout<<"\n\t\t\t 5.Delete data from end.\t\t";                                  cout<<"\t\t\t 6.Print a circular doubly linked list.\n";
 	cout<<"\n\t\t\t 7.Print all circular doubly linked list.\t\t";                 cout<<"\t 8.Again create deleted list.\n";
 	cout<<"\n\t\t\t 9.Add more circular doubly linked list.\t\t";                  cout<<"\t 10.Delete all circular doubly linked list.\n";
 	cout<<"\n\t\t\t 11.Delete the entered node.\t\t";                              cout<<"\t\t\t 12.Add data after the entered node\n";
 	cout<<"\n\t\t\t 13.Reverse print of all circular doubly linked list.\t\t";     cout<<" 14.Back to MAIN MENU\n\n\t\t\t Enter your choice :";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
	mcdllhead();
			if(flag==0)
 			{
 				cout<<"\n Circular doubly linked list is already created...";
			 }
			 else
			 {
			 	mcdllinput();
			 }
 			break;
 		case 2:system("cls");
	mcdllhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mcdlladdbeg(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mcdlladdend(nu-1);
			 }
			 break;
			 case 4:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mcdlldelbeg(nu-1);
			 }
			 break;
			 case 5:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mcdlldelend(nu-1);
			 }
			 break;
			 case 6:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created circular doubly linked list are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mcdllprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
	mcdllhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created circular doubly linked lists are deleted";
					 }
					 else
					 mcdllprinta();
			 }
			 break;
			 case 8:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
			 	mcdlldelcreate(nu-1);
			 }
		 	break;
		 	case 9:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	mcdlladdlist();
			 }
		 		break;
		 		case 10:system("cls");
	mcdllhead();
				 mcdlldelall();
		 			break;
		 			case 11:system("cls");
	mcdllhead();
					 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to delete data :";
			 	cin>>nu;
			 	mcdlldelg(nu-1);
			 }
			 break;
			 case 12:system("cls");
	mcdllhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else   
			 {
			 	cout<<"\n Enter the number of list to add data :";
			 	cin>>nu;
			 	mcdlladdaft(nu-1);
			 }
			 break;
			 
			 case 13:
			 	     system("cls");
	mcdllhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular doubly linked list..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created circular doubly linked lists are deleted";
					 }
					 else
					 mcdllrevprinta();
			 }
			 break;
			 case 14:
			 	if(flag==0)
			 	 mcdlldelall();
			         return;
			 default:cout<<"\n Invalid choice..";
	 }
 	getch();
 }
					}
	 void mstkinput()
	 {
	 	cout<<"\n Enter the total numbers of stack you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all stack :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st stack :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd stack :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd stack :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th stack :";
	 		cin>>x;
	 		p[i]=new(node);
	 		p[i]->data=x;
	 		p[i]->next=NULL;
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" stack is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" stacks is created.";
		 mstkprinta();
			 }
		}
			 		void mstkspush(int nu)
			 		{
			 			if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stack.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to push in "<<nu+1<<" stack :";
			 			cin>>x;
			 			temp=p[nu];
			 			while(temp->next!=NULL)
			 			{
			 				temp=temp->next;
						 }
						 c=new(node);
						 c->data=x;
						 c->next=NULL;
						 temp->next=c;
						 cout<<"\n Your data is pushed successfully.\n";
						 mstkprints(nu);
					 }
				}
					 void mstkspop(int nu)
					 {
					 	 if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stack.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	if(temp->next==NULL)
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created stacks are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and stack deleted successfully.";
						 }
						 else
						 {
					 	while(temp->next->next!=NULL)
					 	{
					 		temp=temp->next;
						 }
						 c=temp->next;
						 cout<<"\n Poped data is : "<<c->data;
						 temp->next=NULL;
						 delete (c);
						 cout<<"\n\n Data poped successfully.\n";
					 			 mstkprints(nu);
					}
				       }
					 }
					 
					 					 void mstkaddlist()
					 {
					 	cout<<"\n\n "<<n<<" stack is already created"<<endl;
					 	cout<<"\n Enter the total number of stack to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd stack :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd stack :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th stack :";
					 		cin>>x;
					 		p[i]=new(node);
					 		p[i]->data=x;
					 		p[i]->next=NULL;
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd stack is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd stack is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th stack is created successfully.\n";
						 }
						 cout<<"\n "<<n-1<<" stack is created successfully.";
					 }
					 void mstkdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" stack is already deleted\n";
					 			delete(p[i]);
							 }
							 else
							 {
							 	temp=p[i];
							 	while(temp!=NULL)
							 	{
							 		c=temp;
							 		temp=temp->next;
							 		delete(c);
								 }
								 cout<<"\n "<<"("<<i+1<<")"<<" stack is deleted\n";
							 }
						 }
						 cout<<"\n\n All created stack is deleted.";
					 }

					 					 void mstkdelcreate(int nu)
					 {
					 	if(p[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the stack :";
					 cin>>x;
					 p[nu]=new(node);
					 p[nu]->data=x;
					 p[nu]->next=NULL;
					 cout<<"\n Deleted stack is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" stack is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
                     void mstkprints(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stack ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	temp=p[nu];
					 	while(temp!=NULL)
					 	{
					 		cout<<"|"<<temp->data<<"|"<<"  ->  ";
					 		temp=temp->next;
						 }
						 cout<<"NULL";
					 }
					 }
					 void mstkprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" stack is deleted";
							 }
							 else
							 {
					 		temp=p[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" stack is :-\n\n";
					 		while(temp!=NULL)
					 		{
					 			cout<<"  |"<<temp->data<<"|"<<"  ->  ";
					 			temp=temp->next;
							 }
							 cout<<"NULL";
					 	}
						 }
					 }
         
		                          void mstkhead()
		                          {
		                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Stack   |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------\n\n";

								  }
		 
		                     
                              	 void mstkmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
   mstkhead();
    cout<<"\n\t\t\t Multiple Dynamic Stack :- The  function  of  multiple  dynamic  stack  is  same  with  the  normal  stack  but  the  difference  is\n\n\t\t\t\t\t\t   that  we  can  create  multiple  dynamic  stacks  and  access them  at  a  time  to  store  the  data. We\n\n\t\t\t\t\t\t   use  the  concept  of  multiple  linked  list  to  create  the  multiple  dynamic  stack.";
    cout<<"\n\n\n\t\t\t Operations to create multiple dynamic Stacks :-\n";
	cout<<"\n\n\n\t\t\t 1.Create multiple stacks.\t\t";				 	  cout<<"\t\t 2.Push data.\n";
    cout<<"\n\t\t\t 3.Pop data.\t\t";                                    cout<<"\t\t\t\t 4.Add more stacks.\n";
 	cout<<"\n\t\t\t 5.Again create deleted stack.\t";                     cout<<"\t\t\t 6.Print a stack.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all stacks.\t\t";                         cout<<"\t\t\t 8.Delete all stacks.\n";
    cout<<"\n\t\t\t 9.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
   mstkhead();
			if(flag==0)
 			{
 				cout<<"\n stack is already created...";
			 }
			 else
			 {
			 	mstkinput();
			 }
 			break;
 		case 2:system("cls");
   mstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of stack to add data :";
			 	cin>>nu;
			 	mstkspush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
   mstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mstkspop(nu-1);
			 }
			 break;
			 case 4:system("cls");
   mstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	mstkaddlist();
			 }
			 break;
			 case 5:system("cls");
   mstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mstkdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
   mstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created stack are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mstkprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
   mstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created stacks are deleted";
					 }
					 else
					 mstkprinta();
			 }
			 break;
			 case 8:system("cls");
   mstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	
			 	mstkdelall();
			 }
		 	break;
		 	case 9:
			 if(flag==0)
			 mstkdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}

		 	 void mcstkinput()
	 {
	 	flag=l=0;
	 	cout<<"\n Enter the total numbers of stacks you want to create :";
	 	cin>>n;
	 	l=n;
	 	cout<<"\n Firstly create all stacks :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		cout<<"\n Enter the data for "<<i+1<<" stack :";
	 		cin>>x;
	 		p[i]=new(node);
	 		p[i]->data=x;
	 		p[i]->next=p[i];
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" stack is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" stack is created.";
		 mcstkprinta();
			 }
			 		void mcstkcpush(int nu)
			 		{
			 			if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to push in "<<nu+1<<" list :";
			 			cin>>x;
			 			temp=p[nu];
			 			do
			 			{
			 				temp=temp->next;
						 }while(temp->next!=p[nu]);
			 			
						 c=new(node);
						 c->data=x;
						 c->next=p[nu];
						 temp->next=c;
						 cout<<"\n Your data is pushed successfully.\n";
						 mcstkprints(nu);
					 }
				}

                  					 void mcstkcpop(int nu)
					 {
					 	 if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	if(temp->next==p[nu])
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created stackss are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and stack deleted successfully.";
						 }
						 else
						 {
					 	do
						 {
						 	temp=temp->next;
						 }while(temp->next->next!=p[nu]);
						 c=temp->next;
						 cout<<"\n Poped data is : "<<c->data;
						 temp->next=p[nu];
						 delete (c);
						 cout<<"\n\n Data Poped successfully.\n";
					 			 mcstkprints(nu);
					}
				       }
					 }
					 void mcstkdelcreate(int nu)
					 {
					 	if(p[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the stack :";
					 cin>>x;
					 p[nu]=new(node);
					 p[nu]->data=x;
					 p[nu]->next=p[nu];
					 cout<<"\n Deleted stack is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" stack is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mcstkaddlist()
					 {
					 	cout<<"\n\n "<<n<<" stacks is already created"<<endl;
					 	cout<<"\n Enter the total number of stack to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<" stack :";
					 		cin>>x;
					 		p[i]=new(node);
					 		p[i]->data=x;
					 		p[i]->next=p[i];
					 		n++;
					 		cout<<"\n "<<n<<" stack is created successfully.";
						 }
					 }
					 void mcstkdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" stacks is already deleted\n";
					 			delete(p[i]);
							 }
							 else
							 {
							 	temp=p[i];
							 	do
							 	{
							 		c=temp;
							 		temp=temp->next;
							 		delete(c);
								 }while(temp!=p[i]);
								 cout<<"\n "<<"("<<i+1<<")"<<" stacks is deleted\n";
							 }
						 }
						 cout<<"\n\n All created stacks is deleted.";
					 }
                      
                      					 void mcstkprints(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks ";
						 }
						 else
						 {
					 	cout<<"\n Your stack is :-\n\n";
					 	temp=p[nu];
					 	do
					 	{
					 		cout<<"|"<<temp->data<<"|";
					 		if(temp->next!=p[nu])
					 		cout<<"  ->   ";
					 		else
					 		cout<<"   ->   {"<<p[nu]->data<<"}";
					 		temp=temp->next;
						 }while(temp!=p[nu]);
						 
					 }
					 }
					 void mcstkprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" stacks is deleted";
							 }
							 else
							 {
					 		temp=p[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" stacks is :-\n\n";
					 		do
					 		{
					 			cout<<"   |"<<temp->data<<"|";
					 			if(temp->next!=p[i])
					 			cout<<"  ->   ";
					 			else
					 			cout<<"   ->   {"<<p[i]->data<<"}";
					 			temp=temp->next;
							 }while(temp!=p[i]);
							 
					 	}
					 	
						 }
						 
					 }
                            void mcstkhead()
							{
										                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Circular Stack   |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------------------\n\n";

											 }                 
                     void mcstkmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
      mcstkhead();
    cout<<"\n\t\t Multiple Circular Dynamic Stack:- The  function  of  multiple Circular  dynamic  stack  is  same  with  the  normal  stack  but  the  difference  is\n\n\t\t\t\t\t\t   that  we  can  create  multiple Circular dynamic  stacks  and  access them  at  a  time  to  store  the  data. We\n\n\t\t\t\t\t\t   use  the  concept  of  multiple Circular linked  list  to  create  the  multiple Circular dynamic  stack.";
    cout<<"\n\n\n\t\t\t Operations to create multiple Circular dynamic Stacks :-\n\n\n";

	cout<<"\n\t\t\t 1.Create multiple stacks.\t\t";				 	  cout<<"\t\t 2.Push data.\n";
    cout<<"\n\t\t\t 3.Pop data.\t\t";                                    cout<<"\t\t\t\t 4.Add more stacks.\n";
 	cout<<"\n\t\t\t 5.Again create deleted stack.\t";                     cout<<"\t\t\t 6.Print a stack.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all stacks.\t\t";                         cout<<"\t\t\t 8.Delete all stacks.\n";
    cout<<"\n\t\t\t 9.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
      mcstkhead();
			if(flag==0)
 			{
 				cout<<"\n stack is already created...";
			 }
			 else
			 {
			 	mcstkinput();
			 }
 			break;
 		case 2:system("cls");
      mcstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of stack to add data :";
			 	cin>>nu;
			 	mcstkcpush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
      mcstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mcstkcpop(nu-1);
			 }
			 break;
			 case 4:system("cls");
      mcstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	mcstkaddlist();
			 }
			 break;
			 case 5:system("cls");
      mcstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mcstkdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
      mcstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created stack are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mcstkprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
      mcstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created stacks are deleted";
					 }
					 else
					 mcstkprinta();
			 }
			 break;
			 case 8:system("cls");
      mcstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	
			 	mcstkdelall();
			 }
		 	break;
		 	case 9:
			 if(flag==0)
			 mcstkdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}


            void mdstkinput()
	 {
	 	cout<<"\n Enter the total numbers of stack you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all stacks :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st stacks :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd stacks :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd stacks :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th stacks :";
	 		cin>>x;
	 		pd[i]=new(noded);
	 		pd[i]->data=x;
	 		pd[i]->next=NULL;
	 		pd[i]->prev=NULL;
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" stacks is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" stacks is created.";
		 mdstkprinta();
			 }
		}
			 		void mdstkdpush(int nu)
			 		{
			 			if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to push in "<<nu+1<<" stack :";
			 			cin>>x;
			 			tempd=pd[nu];
			 			while(tempd->next!=NULL)
			 			{
			 				tempd=tempd->next;
						 }
						 cd=new(noded);
						 cd->data=x;
						 cd->next=NULL;
						 tempd->next=cd;
						 cd->prev=tempd;
						 cout<<"\n Your data is pushed successfully.\n";
						 mdstkprints(nu);
					 }
				}
	
                 void mdstkdpop(int nu)
					 {
					 	 if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks.";
						 }
						 else
						 {
					 	tempd=pd[nu];
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created stacks are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and stack deleted successfully.";
						 }
						 else
						 {
					 	while(tempd->next!=NULL)
					 	{
					 		tempd=tempd->next;
						 }
						 cd=tempd->prev;
						 cout<<"\n Poped data is : "<<tempd->data;
						 cd->next=NULL;
						 delete (tempd);
						 cout<<"\n\n Data poped successfully.\n";
					 			 mdstkprints(nu);
					}
				       }
					 }
					 void mdstkdelcreate(int nu)
					 {
					 	if(pd[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the stack :";
					 cin>>x;
					 pd[nu]=new(noded);
					 pd[nu]->data=x;
					 pd[nu]->next=NULL;
					 pd[nu]->prev=NULL;
					 cout<<"\n Deleted stack is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" stack is not created with first time created stacks";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mdstkaddlist()
					 {
					 	cout<<"\n\n "<<n<<" stacks is already created"<<endl;
					 	cout<<"\n Enter the total number of stack to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd stack :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd stack :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th stack :";
					 		cin>>x;
					 		pd[i]=new(noded);
					 		pd[i]->data=x;
					 		pd[i]->next=NULL;
					 		pd[i]->prev=NULL;
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd stack is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd stack is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th stack is created successfully.\n";
						 }
						 cout<<"\n "<<n<<" stack is created successfully.";
					 }
					 void mdstkdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" stacks is already deleted\n";
					 			delete(pd[i]);
							 }
							 else
							 {
							 	tempd=pd[i];
							 	while(tempd!=NULL)
							 	{
							 		cd=tempd;
							 		tempd=tempd->next;
							 		delete(cd);
								 }
								 cout<<"\n "<<"("<<i+1<<")"<<" stacks is deleted\n";
							 }
						 }
						 cout<<"\n\n All created stacks is deleted.";
					 }

                        void mdstkprints(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	cout<<" NULL  <-  ";
					 	while(tempd!=NULL)
					 	{
					 		cout<<"|"<<tempd->data<<"|";
					 		tempd=tempd->next;
					 		if(tempd!=NULL)
					 		cout<<"  <->  ";
					 	}
						 cout<<"   ->  NULL";
					mdstkrevs(nu);
					}

					 }
					 void mdstkrevs(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks ";
						 }
						 else
						 {
			
					 	tempd=pd[nu];
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		cout<<"\n\n Reverse of stack \n\n";
					 		cout<<"NULL   <- |"<<tempd->data<<"| ->  NULL";
						 }
						 else
						 {
						 
					 	while(1)
					 	{
					 		tempd=tempd->next;
					 		if(tempd->next==NULL)
					 			break;
						}
						cout<<"\n\n Reverse of the stack is :-\n\n";
						cout<<" NULL   <-   ";
						while(tempd!=NULL)
						{
							cout<<"|"<<tempd->data<<"|";
							tempd=tempd->prev;
							if(tempd!=NULL)
					 		cout<<"  <->  ";
						}cout<<"    ->   NULL";
				        	 }
				        }
				}
					 void mdstkprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" stacks is deleted";
							 }
							 else
							 {
					 		tempd=pd[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" stacks is :-\n\n";
					 		cout<<" NULL  <-  ";
					 		while(tempd!=NULL)
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->next;
					 			if(tempd!=NULL)
					 	        	cout<<"  <->  ";
							 }
							 cout<<"    ->   NULL";
					 	}
						 }
					 }
					 void mdstkrevprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" stacks is deleted";
							 }
							 else
							 {
							 	cd=pd[i];
							 	while(cd->next!=NULL)
							 	cd=cd->next;
					 		tempd=cd;
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" stacks is :-\n\n";
					 		cout<<" NULL  <-  ";
					 		while(tempd!=NULL)
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->prev;
					 			if(tempd!=NULL)
					 		cout<<"  <->  ";
							 }
							 cout<<"   ->   NULL";
					 	}
						 }
					 }        
					 
					 void mdstkhead()
					 {
					 											                system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Doubly Stack   |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------------------\n\n";

					 }
                                
                                 void mdstkmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
     mdstkhead();
    cout<<"\n\t\t Multiple Doubly Dynamic Stack:- The  function  of  multiple Doubly  dynamic  stack  is  same  with  the  normal  stack  but  the  difference  is\n\n\t\t\t\t\t\t that  we  can  create  multiple Doubly dynamic  stacks  and  access them  at  a  time  to  store  the  data. We\n\n\t\t\t\t\t\t use  the  concept  of  multiple Doubly linked  list  to  create  the  multiple Doubly dynamic  stack.";
    cout<<"\n\n\n\t\t\t Operations to create multiple Doubly dynamic Stacks :-\n\n\n";
	cout<<"\n\t\t\t 1.Create multiple stacks.\t\t";				 	  cout<<"\t\t 2.Push data.\n";
    cout<<"\n\t\t\t 3.Pop data.\t\t";                                    cout<<"\t\t\t\t 4.Add more stacks.\n";
 	cout<<"\n\t\t\t 5.Again create deleted stack.\t";                     cout<<"\t\t\t 6.Print a stack.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all stacks.\t\t";                         cout<<"\t\t\t 8.Delete all stacks.\n";
    cout<<"\n\t\t\t 9.Reverse print of all stacks.\t";                cout<<"\t\t\t 10.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
     mdstkhead();
			if(flag==0)
 			{
 				cout<<"\n stack is already created...";
			 }
			 else
			 {
			 	mdstkinput();
			 }
 			break;
 		case 2:system("cls");
     mdstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of stack to add data :";
			 	cin>>nu;
			 	mdstkdpush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
     mdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mdstkdpop(nu-1);
			 }
			 break;
			 case 4:system("cls");
     mdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	mdstkaddlist();
			 }
			 break;
			 case 5:system("cls");
     mdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mdstkdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
     mdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created stack are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mdstkprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
     mdstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created stacks are deleted";
					 }
					 else
					 mdstkprinta();
			 }
			 break;
			 case 8:system("cls");
     mdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	
			 	mdstkdelall();
			 }
		 	break;
		 			case 9:system("cls");
     mdstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created stacks are deleted";
					 }
					 else
					 mdstkrevprinta();
			 }
			 break;
		 	case 10:
			 if(flag==0)
			 	mdstkdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}

        
        	 void mcdstkinput()
	 {
	 	cout<<"\n Enter the total numbers of stacks you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all stacks :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st stacks :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd stacks :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd stacks :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th stacks :";
	 		cin>>x;
	 		pd[i]=new(noded);
	 		pd[i]->data=x;
	 		pd[i]->next=pd[i];
	 		pd[i]->prev=pd[i];
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" stacks is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" stackss is created.";
		 mcdstkprinta();
			 }
		}
			 		void mcdstkcdpush(int nu)
			 		{
			 			if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to add in "<<nu+1<<" stacks :";
			 			cin>>x;
			 			tempd=pd[nu];
			 			do
			 			{
			 				tempd=tempd->next;
						 }while(tempd->next!=pd[nu]);
						 cd=new(noded);
						 cd->data=x;
						 cd->next=pd[nu];
						 tempd->next=cd;
						 pd[nu]->prev=cd;
						 cd->prev=tempd;
						 cout<<"\n Your data is added successfully.\n";
						 mcdstkprints(nu);
					 }
				}
 
                  	 void mcdstkcdpop(int nu)
					 {
					 	 if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks.";
						 }
						 else
						 {
					 	tempd=pd[nu];
					 	if(tempd->next==pd[nu]&&tempd->prev==pd[nu])
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created stackss are deleted";	 
					 		flag=1;
					 	    }
					 		cout<<"\n Data and stacks deleted successfully.";
						 }
						 else
						 {
					 	do
					 	{
					 		tempd=tempd->next;
						 }while(tempd->next!=pd[nu]);
						 cd=tempd->prev;
						 cout<<"\n Deleted data is : "<<tempd->data;
						 cd->next=pd[nu];
						 pd[nu]->prev=cd;
						 delete (tempd);
						 cout<<"\n\n Data deleted successfully.\n";
					 			 mcdstkprints(nu);
					}
				       }
					 }
					 void mcdstkdelcreate(int nu)
					 {
					 	if(pd[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the stacks :";
					 cin>>x;
					 pd[nu]=new(noded);
					 pd[nu]->data=x;
					 pd[nu]->next=pd[nu];
					 pd[nu]->prev=pd[nu];
					 cout<<"\n Deleted stacks is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" stacks is not created with first time created stackss";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mcdstkaddstacks()
					 {
					 	cout<<"\n\n "<<n<<" stacks is already created"<<endl;
					 	cout<<"\n Enter the total number of stacks to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd stacks :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd stacks :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th stacks :";
					 		cin>>x;
					 		pd[i]=new(noded);
					 		pd[i]->data=x;
					 		pd[i]->next=pd[i];
					 		pd[i]->prev=pd[i];
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd stacks is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd stacks is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th stacks is created successfully.\n";
						 }
						 cout<<"\n "<<n<<" stackss is created successfully.";
					 }
					 void mcdstkdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" stacks is already deleted\n";
					 			delete(pd[i]);
							 }
							 else
							 {
							 	tempd=pd[i];
							 	do
							 	{
							 		cd=tempd;
							 		tempd=tempd->next;
							 		delete(cd);
								 }while(tempd!=pd[i]);
								 cout<<"\n "<<"("<<i+1<<")"<<" stacks is deleted\n";
							 }
						 }
						 cout<<"\n\n All created stacks is deleted.";
					 }
					 
					     void mcdstkprints(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	cout<<"{"<<pd[nu]->prev->data<<"}"<<"  <-  ";
					 	do
					 	{
					 		cout<<"|"<<tempd->data<<"|";
					 		tempd=tempd->next;
					 		if(tempd!=pd[nu])
					 		cout<<"  <->  ";
					 	}while(tempd!=pd[nu]);
					 	cout<<"  ->  "<<"{"<<pd[nu]->data<<"}";
					mcdstkrevs(nu);						 
					}

					 }
					 void mcdstkrevs(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no stacks ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	while(1)
					 	{
					 		tempd=tempd->next;
					 		if(tempd->next==pd[nu])
					 			break;
						}
						cd=tempd;
						cout<<"\n\n Reverse of the stacks is :-\n\n";
						      cout<<"{"<<pd[nu]->data<<"}"<<"   <-   ";
						do
						{
							cout<<"|"<<tempd->data<<"|";
							tempd=tempd->prev;
							if(tempd!=cd)
							cout<<"  <->  ";
						}while(tempd!=cd);
						cout<<"  ->  "<<"{"<<pd[nu]->prev->data<<"}";
				        	 }
				}
					 void mcdstkprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" stacks is deleted";
							 }
							 else
							 {
					 		tempd=pd[i];
					 		cout<<"\n\n "<<"("<<i+1<<")"<<" stacks is :-\n\n";
					 		cout<<"{"<<pd[i]->prev->data<<"}"<<"  <-  ";
					 		do
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->next;
					 			if(tempd!=pd[i])
					 			cout<<"  <->  ";
							 }while(tempd!=pd[i]);
							 cout<<"  ->  "<<"{"<<pd[i]->data<<"}";
							
												 	}
						 }
					 }
					 void mcdstkrevprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" stacks is deleted";
							 }
							 else
							 {
							 	cd=pd[i];
							 	while(cd->next!=pd[i])
							 	cd=cd->next;
					 		tempd=cd;
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" stacks is :-\n\n";
					 		cout<<"{"<<pd[i]->data<<"}"<<"   <-   ";
					 		do
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->prev;
					 			if(tempd!=cd)
					 			cout<<"  <->  ";
							 }while(tempd!=cd);
							 cout<<"   ->  "<<"{"<<pd[i]->prev->data<<"}";
					 	}
						 }
					 }
			                 void mcdstkhead()
							 {
		             system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Circular Doubly Stack   |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------------------------\n\n";

									  }		 
	           void mcdstkmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
     mcdstkhead();
    cout<<"\n\t Multiple circular Doubly Dynamic Stack:- The  function  of  multiple circular Doubly  dynamic  stack is  same with  the  normal stack  but the  difference is\n\n\t\t\t\t\t\t that  we  can  create  multiple circular Doubly dynamic  stacks and  access them  at a time  to  store  the  data. We\n\n\t\t\t\t\t\t use  the  concept  of  multiple circular Doubly linked  list  to  create  the  multiple circular Doubly dynamic  stack.";
    cout<<"\n\n\n\t\t\t Operations to create multiple circular Doubly dynamic Stacks :-\n\n\n";

	cout<<"\n\t\t\t 1.Create multiple stacks.\t\t";				 	  cout<<"\t\t 2.Push data.\n";
    cout<<"\n\t\t\t 3.Pop data.\t\t";                                    cout<<"\t\t\t\t 4.Add more stacks.\n";
 	cout<<"\n\t\t\t 5.Again create deleted stack.\t";                     cout<<"\t\t\t 6.Print a stack.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all stacks.\t\t";                         cout<<"\t\t\t 8.Delete all stacks.\n";
    cout<<"\n\t\t\t 9.Reverse print of all stacks.\t";                cout<<"\t\t\t 10.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
     mcdstkhead();
			if(flag==0)
 			{
 				cout<<"\n stack is already created...";
			 }
			 else
			 {
			 	mcdstkinput();
			 }
 			break;
 		case 2:system("cls");
     mcdstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of stack to add data :";
			 	cin>>nu;
			 	mcdstkcdpush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
     mcdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mcdstkcdpop(nu-1);
			 }
			 break;
			 case 4:system("cls");
     mcdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	mcdstkaddstacks();
			 }
			 break;
			 case 5:system("cls");
     mcdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mcdstkdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
     mcdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created stack are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mcdstkprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
     mcdstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created stacks are deleted";
					 }
					 else
					 mcdstkprinta();
			 }
			 break;
			 case 8:system("cls");
     mcdstkhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			 {
			 	
			 	mcdstkdelall();
			 }
		 	break;
		 			case 9:system("cls");
     mcdstkhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a stack..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created stacks are deleted";
					 }
					 else
					 mcdstkrevprinta();
			 }
			 break;
		 	case 10:
			 if(flag==0)
			mcdstkdelall();
             return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}

	 void mqinput()
	 {
	 	cout<<"\n Enter the total numbers of queue you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all queue :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st queue :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd queue :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd queue :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th queue :";
	 		cin>>x;
	 		p[i]=new(node);
	 		p[i]->data=x;
	 		p[i]->next=NULL;
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" queue is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" queues is created.";
		 mqprinta();
			 }
		}
			 		void mqspush(int nu)
			 		{
			 			if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queue.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to push in "<<nu+1<<" queue :";
			 			cin>>x;
			 			temp=p[nu];
			 			while(temp->next!=NULL)
			 			{
			 				temp=temp->next;
						 }
						 c=new(node);
						 c->data=x;
						 c->next=NULL;
						 temp->next=c;
						 cout<<"\n Your data is pushed successfully.\n";
						 mqprints(nu);
					 }
				}
					
					void mqdelbeg(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queue.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	cout<<"\n Deleted data is :"<<temp->data;
					 	if(temp->next==NULL)
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created queues are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and queue deleted successfully.";
						 }
						 else
						 {
						 	p[nu]=temp->next;
					 	delete(temp);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mqprints(nu);
					 }
				       }
					 }
					
					 
					 					 void mqaddlist()
					 {
					 	cout<<"\n\n "<<n<<" queue is already created"<<endl;
					 	cout<<"\n Enter the total number of queue to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd queue :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd queue :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th queue :";
					 		cin>>x;
					 		p[i]=new(node);
					 		p[i]->data=x;
					 		p[i]->next=NULL;
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd queue is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd queue is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th queue is created successfully.\n";
						 }
						 cout<<"\n "<<n-1<<" queue is created successfully.";
					 }
					 void mqdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" queue is already deleted\n";
					 			delete(p[i]);
							 }
							 else
							 {
							 	temp=p[i];
							 	while(temp!=NULL)
							 	{
							 		c=temp;
							 		temp=temp->next;
							 		delete(c);
								 }
								 cout<<"\n "<<"("<<i+1<<")"<<" queue is deleted\n";
							 }
						 }
						 cout<<"\n\n All created queue is deleted.";
					 }

					 					 void mqdelcreate(int nu)
					 {
					 	if(p[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the queue :";
					 cin>>x;
					 p[nu]=new(node);
					 p[nu]->data=x;
					 p[nu]->next=NULL;
					 cout<<"\n Deleted queue is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" queue is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
                     void mqprints(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queue ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	temp=p[nu];
					 	while(temp!=NULL)
					 	{
					 		cout<<"|"<<temp->data<<"|"<<"  ->  ";
					 		temp=temp->next;
						 }
						 cout<<"NULL";
					 }
					 }
					 void mqprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" queue is deleted";
							 }
							 else
							 {
					 		temp=p[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" queue is :-\n\n";
					 		while(temp!=NULL)
					 		{
					 			cout<<"  |"<<temp->data<<"|"<<"  ->  ";
					 			temp=temp->next;
							 }
							 cout<<"NULL";
					 	}
						 }
					 }
					 
					 
					        void mqhead()
					        {
					        			             system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Queue   |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------\n\n";

							}
                             
                              	 void mqmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
    mqhead();
    cout<<"\n\t\t\t Multiple Dynamic Queue :- The  function  of  multiple  dynamic  queue  is  same  with  the  normal  queue  but  the  difference  is\n\n\t\t\t\t\t\t   that  we  can  create  multiple  dynamic  queue  and  access them  at  a  time  to  store  the  data. We\n\n\t\t\t\t\t\t   use  the  concept  of  multiple  linked  list  to  create  the  multiple  dynamic  queue.";
    cout<<"\n\n\n\t\t\t Operations to create multiple dynamic Queue :-\n";

	cout<<"\n\n\t\t\t 1.Create multiple queues.\t\t";				 	  cout<<"\t\t 2.Insert data in queue.\n";
    cout<<"\n\t\t\t 3.Delete data from queue.\t\t";                           cout<<"\t\t 4.Add more queues.\n";
 	cout<<"\n\t\t\t 5.Again create deleted queue.\t";                     cout<<"\t\t\t 6.Print a queue.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all queues.\t\t";                         cout<<"\t\t\t 8.Delete all queues.\n";
    cout<<"\n\t\t\t 9.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
    mqhead();
			if(flag==0)
 			{
 				cout<<"\n queue is already created...";
			 }
			 else
			 {
			 	mqinput();
			 }
 			break;
 		case 2:system("cls");
    mqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of queue to add data :";
			 	cin>>nu;
			 	mqspush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
    mqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mqdelbeg(nu-1);
			 }
			 break;
			 case 4:system("cls");
    mqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	mqaddlist();
			 }
			 break;
			 case 5:system("cls");
    mqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mqdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
    mqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created queue are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mqprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
    mqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created queues are deleted";
					 }
					 else
					 mqprinta();
			 }
			 break;
			 case 8:system("cls");
    mqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	
			 	mqdelall();
			 }
		 	break;
		 	case 9:
			 if(flag==0)
			 mqdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}

		 	 void mcqinput()
	 {
	 	flag=l=0;
	 	cout<<"\n Enter the total numbers of queues you want to create :";
	 	cin>>n;
	 	l=n;
	 	cout<<"\n Firstly create all queues :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		cout<<"\n Enter the data for "<<i+1<<" queue :";
	 		cin>>x;
	 		p[i]=new(node);
	 		p[i]->data=x;
	 		p[i]->next=p[i];
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" queue is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" queue is created.";
		 mcqprinta();
			 }
			 		void mcqcpush(int nu)
			 		{
			 			if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queues.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to push in "<<nu+1<<" list :";
			 			cin>>x;
			 			temp=p[nu];
			 			do
			 			{
			 				temp=temp->next;
						 }while(temp->next!=p[nu]);
			 			
						 c=new(node);
						 c->data=x;
						 c->next=p[nu];
						 temp->next=c;
						 cout<<"\n Your data is pushed successfully.\n";
						 mcqprints(nu);
					 }
				}

                  									 void mcqdelbeg(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular queue.";
						 }
						 else
						 {
					 	temp=p[nu];
					 	c=p[nu];
					 	do{
					 		c=c->next;
						 }while(c->next!=p[nu]);
					 	cout<<"\n Deleted data is :"<<temp->data;
					 	if(temp->next==p[nu])
					 	{
					 		p[nu]=NULL;
					 		delete(temp);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created circular queue are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and list deleted successfully.";
						 }
						 else
						 {
						 	p[nu]=temp->next;
						 	c->next=p[nu];
					 	delete(temp);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mcqprints(nu);
					 }
				       }
					 }

					 void mcqdelcreate(int nu)
					 {
					 	if(p[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the queue :";
					 cin>>x;
					 p[nu]=new(node);
					 p[nu]->data=x;
					 p[nu]->next=p[nu];
					 cout<<"\n Deleted queue is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" queue is not created with first time created lists";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mcqaddlist()
					 {
					 	cout<<"\n\n "<<n<<" queues is already created"<<endl;
					 	cout<<"\n Enter the total number of queue to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<" queue :";
					 		cin>>x;
					 		p[i]=new(node);
					 		p[i]->data=x;
					 		p[i]->next=p[i];
					 		n++;
					 		cout<<"\n "<<n<<" queue is created successfully.";
						 }
					 }
					 void mcqdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" queues is already deleted\n";
					 			delete(p[i]);
							 }
							 else
							 {
							 	temp=p[i];
							 	do
							 	{
							 		c=temp;
							 		temp=temp->next;
							 		delete(c);
								 }while(temp!=p[i]);
								 cout<<"\n "<<"("<<i+1<<")"<<" queues is deleted\n";
							 }
						 }
						 cout<<"\n\n All created queues is deleted.";
					 }
                      
                      					 void mcqprints(int nu)
					 {
					 	if(p[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queues ";
						 }
						 else
						 {
					 	cout<<"\n Your queue is :-\n\n";
					 	temp=p[nu];
					 	do
					 	{
					 		cout<<"|"<<temp->data<<"|";
					 		if(temp->next!=p[nu])
					 		cout<<"  ->   ";
					 		else
					 		cout<<"   ->   {"<<p[nu]->data<<"}";
					 		temp=temp->next;
						 }while(temp!=p[nu]);
						 
					 }
					 }
					 void mcqprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(p[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" queues is deleted";
							 }
							 else
							 {
					 		temp=p[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" queues is :-\n\n";
					 		do
					 		{
					 			cout<<"   |"<<temp->data<<"|";
					 			if(temp->next!=p[i])
					 			cout<<"  ->   ";
					 			else
					 			cout<<"   ->   {"<<p[i]->data<<"}";
					 			temp=temp->next;
							 }while(temp!=p[i]);
							 
					 	}
					 	
						 }
						 
					 }
                             void mcqhead()
							 {
     			             system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Circular Queue   |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------------------\n\n";

												}                   
                     void mcqmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
     mcqhead();
    cout<<"\n\t\t Multiple Circular Dynamic Queue:- The  function  of  multiple Circular  dynamic  queue  is  same  with  the  normal  queue  but  the  difference  is\n\n\t\t\t\t\t\t   that  we  can  create  multiple Circular dynamic  queues  and  access them  at  a  time  to  store  the  data. We\n\n\t\t\t\t\t\t   use  the  concept  of  multiple Circular linked  list  to  create  the  multiple Circular dynamic  queue.";
    cout<<"\n\n\n\t\t\t Operations to create multiple Circular dynamic Queues :-\n\n\n";

	cout<<"\n\t\t\t 1.Create multiple queues.\t\t";				 	  cout<<"\t\t 2.Insert data in queue.\n";
    cout<<"\n\t\t\t 3.Delete data from queue.\t\t";                                    cout<<"\t\t 4.Add more queues.\n";
 	cout<<"\n\t\t\t 5.Again create deleted queue.\t";                     cout<<"\t\t\t 6.Print a queue.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all queues.\t\t";                         cout<<"\t\t\t 8.Delete all queues.\n";
    cout<<"\n\t\t\t 9.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
     mcqhead();

			if(flag==0)
 			{
 				cout<<"\n queue is already created...";
			 }
			 else
			 {
			 	mcqinput();
			 }
 			break;
 		case 2:system("cls");
     mcqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of queue to add data :";
			 	cin>>nu;
			 	mcqcpush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
     mcqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mcqdelbeg(nu-1);
			 }
			 break;
			 case 4:system("cls");
     mcqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	mcqaddlist();
			 }
			 break;
			 case 5:system("cls");
     mcqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mcqdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
     mcqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created queue are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mcqprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
     mcqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created queues are deleted";
					 }
					 else
					 mcqprinta();
			 }
			 break;
			 case 8:system("cls");
     mcqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	
			 	mcqdelall();
			 }
		 	break;
		 	case 9:
			 if(flag==0)
			 mcqdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}
		 

            void mdqinput()
	 {
	 	cout<<"\n Enter the total numbers of queue you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all queues :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st queues :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd queues :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd queues :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th queues :";
	 		cin>>x;
	 		pd[i]=new(noded);
	 		pd[i]->data=x;
	 		pd[i]->next=NULL;
	 		pd[i]->prev=NULL;
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" queues is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" queues is created.";
		 mdqprinta();
			 }
		}
			 		void mdqdpush(int nu)
			 		{
			 			if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queues.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to push in "<<nu+1<<" queue :";
			 			cin>>x;
			 			tempd=pd[nu];
			 			while(tempd->next!=NULL)
			 			{
			 				tempd=tempd->next;
						 }
						 cd=new(noded);
						 cd->data=x;
						 cd->next=NULL;
						 tempd->next=cd;
						 cd->prev=tempd;
						 cout<<"\n Your data is pushed successfully.\n";
						 mdqprints(nu);
					 }
				}
	
                 void mdqdelbeg(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no doubly queue.";
						 }
						 else
						 {
					 	tempd=pd[nu];
					 	cout<<"\n Deleted data is :"<<tempd->data;
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created doubly queue are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and queue deleted successfully.";
						 }
						 else
						 {
						 	pd[nu]=tempd->next;
						 	pd[nu]->prev=NULL;
					 	delete(tempd);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mdqprints(nu);
					 }
				       }
					 }
					 void mdqdelcreate(int nu)
					 {
					 	if(pd[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the queue :";
					 cin>>x;
					 pd[nu]=new(noded);
					 pd[nu]->data=x;
					 pd[nu]->next=NULL;
					 pd[nu]->prev=NULL;
					 cout<<"\n Deleted queue is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" queue is not created with first time created queues";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mdqaddlist()
					 {
					 	cout<<"\n\n "<<n<<" queues is already created"<<endl;
					 	cout<<"\n Enter the total number of queue to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd queue :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd queue :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th queue :";
					 		cin>>x;
					 		pd[i]=new(noded);
					 		pd[i]->data=x;
					 		pd[i]->next=NULL;
					 		pd[i]->prev=NULL;
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd queue is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd queue is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th queue is created successfully.\n";
						 }
						 cout<<"\n "<<n<<" queue is created successfully.";
					 }
					 void mdqdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" queues is already deleted\n";
					 			delete(pd[i]);
							 }
							 else
							 {
							 	tempd=pd[i];
							 	while(tempd!=NULL)
							 	{
							 		cd=tempd;
							 		tempd=tempd->next;
							 		delete(cd);
								 }
								 cout<<"\n "<<"("<<i+1<<")"<<" queues is deleted\n";
							 }
						 }
						 cout<<"\n\n All created queues is deleted.";
					 }

                        void mdqprints(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queues ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	cout<<" NULL  <-  ";
					 	while(tempd!=NULL)
					 	{
					 		cout<<"|"<<tempd->data<<"|";
					 		tempd=tempd->next;
					 		if(tempd!=NULL)
					 		cout<<"  <->  ";
					 	}
						 cout<<"   ->  NULL";
					mdqrevs(nu);
					}

					 }
					 void mdqrevs(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no queues ";
						 }
						 else
						 {
			
					 	tempd=pd[nu];
					 	if(tempd->next==NULL&&tempd->prev==NULL)
					 	{
					 		cout<<"\n\n Reverse of queue \n\n";
					 		cout<<"NULL   <- |"<<tempd->data<<"| ->  NULL";
						 }
						 else
						 {
						 
					 	while(1)
					 	{
					 		tempd=tempd->next;
					 		if(tempd->next==NULL)
					 			break;
						}
						cout<<"\n\n Reverse of the queue is :-\n\n";
						cout<<" NULL   <-   ";
						while(tempd!=NULL)
						{
							cout<<"|"<<tempd->data<<"|";
							tempd=tempd->prev;
							if(tempd!=NULL)
					 		cout<<"  <->  ";
						}cout<<"    ->   NULL";
				        	 }
				        }
				}
					 void mdqprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" queues is deleted";
							 }
							 else
							 {
					 		tempd=pd[i];
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" queues is :-\n\n";
					 		cout<<" NULL  <-  ";
					 		while(tempd!=NULL)
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->next;
					 			if(tempd!=NULL)
					 	        	cout<<"  <->  ";
							 }
							 cout<<"    ->   NULL";
					 	}
						 }
					 }
					 void mdqrevprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" queues is deleted";
							 }
							 else
							 {
							 	cd=pd[i];
							 	while(cd->next!=NULL)
							 	cd=cd->next;
					 		tempd=cd;
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" queues is :-\n\n";
					 		cout<<" NULL  <-  ";
					 		while(tempd!=NULL)
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->prev;
					 			if(tempd!=NULL)
					 		cout<<"  <->  ";
							 }
							 cout<<"   ->   NULL";
					 	}
						 }
					 }
                                   void mdqhead()
								   {
   			             system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Doubly Queue   |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------\n\n";

														  }                       
                                 void mdqmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
         mdqhead();
    cout<<"\n\t\t Multiple Doubly Dynamic Queue:- The  function  of  multiple Doubly  dynamic  queue  is  same  with  the  normal  queue  but  the  difference  is\n\n\t\t\t\t\t\t that  we  can  create  multiple Doubly dynamic  queues  and  access them  at  a  time  to  store  the  data. We\n\n\t\t\t\t\t\t use  the  concept  of  multiple Doubly linked  list  to  create  the  multiple Doubly dynamic  queues.";
    cout<<"\n\n\n\t\t\t Operations to create multiple Doubly dynamic Queues :-\n\n\n";

	cout<<"\n\t\t\t 1.Create multiple queues.\t\t";				 	  cout<<"\t\t 2.Insert data in queue.\n";
    cout<<"\n\t\t\t 3.Delete data from queue.\t\t";                                    cout<<"\t\t 4.Add more queues.\n";
 	cout<<"\n\t\t\t 5.Again create deleted queue.\t";                     cout<<"\t\t\t 6.Print a queue.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all queues.\t\t";                         cout<<"\t\t\t 8.Delete all queues.\n";
    cout<<"\n\t\t\t 9.Reverse print of all queues.\t";                cout<<"\t\t\t 10.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
         mdqhead();
			if(flag==0)
 			{
 				cout<<"\n queue is already created...";
			 }
			 else
			 {
			 	mdqinput();
			 }
 			break;
 		case 2:system("cls");
         mdqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of queue to add data :";
			 	cin>>nu;
			 	mdqdpush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
         mdqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mdqdelbeg(nu-1);
			 }
			 break;
			 case 4:system("cls");
         mdqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	mdqaddlist();
			 }
			 break;
			 case 5:system("cls");
         mdqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mdqdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
         mdqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created queue are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mdqprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
         mdqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created queues are deleted";
					 }
					 else
					 mdqprinta();
			 }
			 break;
			 case 8:system("cls");
         mdqhead();
			 if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			 {
			 	
			 	mdqdelall();
			 }
		 	break;
		 			case 9:system("cls");
         mdqhead();
			if(flag==1)
 			{
 				cout<<"\n Firstly create a queue..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created queues are deleted";
					 }
					 else
					 mdqrevprinta();
			 }
			 break;
		 	case 10:
			 if(flag==0)
			 mdqdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}

        
        	 void mcdqinput()
	 {
	 	cout<<"\n Enter the total numbers of circular queues you want to create :";
	 	cin>>n;
	 	if(n>0)
	 	{
	 		flag=l=0;
		l=n;
	 	cout<<"\n Firstly create all circular queues :-\n\n";
	 	for(i=0;i<n;i++)
	 	{
	 		if(i+1==1)
	 		cout<<"\n Enter the data for "<<i+1<<"st circular queues :";
	 		if(i+1==2)
	 		cout<<"\n Enter the data for "<<i+1<<"nd circular queues :";
	 		if(i+1==3)
	 		cout<<"\n Enter the data for "<<i+1<<"rd circular queues :";
	 		if(i+1>3)
	 		cout<<"\n Enter the data for "<<i+1<<"th circular queues :";
	 		cin>>x;
	 		pd[i]=new(noded);
	 		pd[i]->data=x;
	 		pd[i]->next=pd[i];
	 		pd[i]->prev=pd[i];
	 		if(i+1!=1)
	 		cout<<"\n Your "<<i+1<<" circular queues is created successfully\n";
		 }
		 cout<<"\n Your "<<n<<" circular queues is created.";
		 mcdqprinta();
			 }
		}
			 		void mcdqcdpush(int nu)
			 		{
			 			if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular queues.";
						 }
						 else
						 {
			 			cout <<"\n Enter the data to add in "<<nu+1<<" circular queues :";
			 			cin>>x;
			 			tempd=pd[nu];
			 			do
			 			{
			 				tempd=tempd->next;
						 }while(tempd->next!=pd[nu]);
						 cd=new(noded);
						 cd->data=x;
						 cd->next=pd[nu];
						 tempd->next=cd;
						 pd[nu]->prev=cd;
						 cd->prev=tempd;
						 cout<<"\n Your data is added successfully.\n";
						 mcdqprints(nu);
					 }
				}
 
                  						 void mcdqdelbeg(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular queue list.";
						 }
						 else
						 {
					 	tempd=cd=pd[nu];
					 	cout<<"\n Deleted data is :"<<tempd->data;
					 	if(tempd->next==pd[nu]&&tempd->prev==pd[nu])
					 	{
					 		pd[nu]=NULL;
					 		delete(tempd);
					 		l--;
					 		if(l==0)
					 		{
						      cout<<"\n All created circular queue lists are deleted";	 
					 		flag=1;
					 	    }
					 			 cout<<"\n\n Data and queue deleted successfully.";
						 }
						 else
						 {
						 	do
			 			{
			 				cd=cd->next;
						 }while(cd->next!=pd[nu]);
						 	pd[nu]=tempd->next;
						 	pd[nu]->prev=cd;
						 	cd->next=pd[nu];
					 	delete(tempd);
					 	cout<<"\n\n Data deleted successfully.\n";
					 			 mcdqprints(nu);
					 }
				       }
					 }
					 

					 void mcdqdelcreate(int nu)
					 {
					 	if(pd[nu]==NULL&&(nu+1<=n))
					 	{
					 cout<<"\n Enter the data for the circular queues :";
					 cin>>x;
					 pd[nu]=new(noded);
					 pd[nu]->data=x;
					 pd[nu]->next=pd[nu];
					 pd[nu]->prev=pd[nu];
					 cout<<"\n Deleted circular queues is again created successfully.";
				}
				else
				{
					if(nu+1>n)
					cout<<"\n "<<nu+1<<" circular queues is not created with first time created circular queuess";
					else
					cout<<"\n "<<nu+1<<" is already created.";
				}
					 }
					 void mcdqaddlist()
					 {
					 	cout<<"\n\n "<<n<<" circular queues is already created"<<endl;
					 	cout<<"\n Enter the total number of circular queues to create :";
					 	cin>>m;
					 	l+=m;
					 	m+=n;
					 	for(i=n;i<m;i++)
					 	{
					 		if(i+1==2)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"nd circular queues :";
					 		if(i+1==3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"rd circular queues :";
					 		if(i+1>3)
					 		cout<<"\n\n"<<" Enter the data for "<<i+1<<"th circular queues :";
					 		cin>>x;
					 		pd[i]=new(noded);
					 		pd[i]->data=x;
					 		pd[i]->next=pd[i];
					 		pd[i]->prev=pd[i];
					 		n++;
					 		if(n==2)
					 		cout<<"\n "<<n<<"nd circular queues is created successfully.\n";
					 		if(n==3)
					 		cout<<"\n "<<n<<"rd circular queues is created successfully.\n";
					 		if(n>3)
					 		cout<<"\n "<<n<<"th circular queues is created successfully.\n";
						 }
						 cout<<"\n "<<n<<" circular queues is created successfully.";
					 }
					 void mcdqdelall()
					 {
					 	flag=1;
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n "<<"("<<i+1<<")"<<" circular queues is already deleted\n";
					 			delete(pd[i]);
							 }
							 else
							 {
							 	tempd=pd[i];
							 	do
							 	{
							 		cd=tempd;
							 		tempd=tempd->next;
							 		delete(cd);
								 }while(tempd!=pd[i]);
								 cout<<"\n "<<"("<<i+1<<")"<<" circular queues is deleted\n";
							 }
						 }
						 cout<<"\n\n All created circular queues is deleted.";
					 }
					 
					     void mcdqprints(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular queues ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	cout<<"{"<<pd[nu]->prev->data<<"}"<<"  <-  ";
					 	do
					 	{
					 		cout<<"|"<<tempd->data<<"|";
					 		tempd=tempd->next;
					 		if(tempd!=pd[nu])
					 		cout<<"  <->  ";
					 	}while(tempd!=pd[nu]);
					 	cout<<"  ->  "<<"{"<<pd[nu]->data<<"}";
					mcdqrevs(nu);						 
					}

					 }
					 void mcdqrevs(int nu)
					 {
					 	if(pd[nu]==NULL||(nu+1>n))
					 	{
					 		cout<<"\n There is no circular queues ";
						 }
						 else
						 {
					 	cout<<"\n Your data is :-\n\n";
					 	tempd=pd[nu];
					 	while(1)
					 	{
					 		tempd=tempd->next;
					 		if(tempd->next==pd[nu])
					 			break;
						}
						cd=tempd;
						cout<<"\n\n Reverse of the circular queues is :-\n\n";
						      cout<<"{"<<pd[nu]->data<<"}"<<"   <-   ";
						do
						{
							cout<<"|"<<tempd->data<<"|";
							tempd=tempd->prev;
							if(tempd!=cd)
							cout<<"  <->  ";
						}while(tempd!=cd);
						cout<<"  ->  "<<"{"<<pd[nu]->prev->data<<"}";
				        	 }
				}
					 void mcdqprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" circular queues is deleted";
							 }
							 else
							 {
					 		tempd=pd[i];
					 		cout<<"\n\n "<<"("<<i+1<<")"<<" circular queues is :-\n\n";
					 		cout<<"{"<<pd[i]->prev->data<<"}"<<"  <-  ";
					 		do
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->next;
					 			if(tempd!=pd[i])
					 			cout<<"  <->  ";
							 }while(tempd!=pd[i]);
							 cout<<"  ->  "<<"{"<<pd[i]->data<<"}";
							
												 	}
						 }
					 }
					 void mcdqrevprinta()
					 {
					 	for(i=0;i<n;i++)
					 	{
					 		if(pd[i]==NULL)
					 		{
					 			cout<<"\n\n "<<i+1<<" circular queues is deleted";
							 }
							 else
							 {
							 	cd=pd[i];
							 	while(cd->next!=pd[i])
							 	cd=cd->next;
					 		tempd=cd;
					 		cout<<"\n\n "<<"("<< i+1<<")"<<" circular queues is :-\n\n";
					 		cout<<"{"<<pd[i]->data<<"}"<<"   <-   ";
					 		do
					 		{
					 			cout<<"  |"<<tempd->data<<"|";
					 			tempd=tempd->prev;
					 			if(tempd!=cd)
					 			cout<<"  <->  ";
							 }while(tempd!=cd);
							 cout<<"   ->  "<<"{"<<pd[i]->prev->data<<"}";
					 	}
						 }
					 }
		                             void mcdqhead()
									 {
									 	   			             system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |   Multiple Circular Doubly Queue   |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------------------------\n\n";

												  }			 
					                                  void mcdqmenu()
					 {
					 	SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
    mcdqhead();
    cout<<"\n\t Multiple circular Doubly Dynamic Queue:- The  function  of  multiple circular Doubly  dynamic  queue is  same with  the  normal queue  but the  difference is\n\n\t\t\t\t\t\t that  we  can  create  multiple circular Doubly dynamic  queues and  access them  at a time  to  store  the  data. We\n\n\t\t\t\t\t\t use  the  concept  of  multiple circular Doubly linked  list  to  create  the  multiple circular Doubly dynamic  queue.";
    cout<<"\n\n\n\t\t\t Operations to create multiple circular Doubly dynamic Queues :-\n\n\n";
	cout<<"\n\t\t\t 1.Create multiple circular queues.\t\t";				 	  cout<<"\t\t 2.Insert data in queue.\n";
    cout<<"\n\t\t\t 3.Delete data from queue.\t\t";                                    cout<<"\t\t\t 4.Add more circular queues.\n";
 	cout<<"\n\t\t\t 5.Again create deleted circular queue.\t";                     cout<<"\t\t\t 6.Print a circular queue.\t\n";                           
 	cout<<"\n\t\t\t 7.Print all circular queues.\t\t";                         cout<<"\t\t\t 8.Delete all circular queues.\n";
    cout<<"\n\t\t\t 9.Reverse print of all circular queues.\t";                cout<<"\t\t 10.Back to MAIN MENU \n\n\t\t\t Please enter your choice :";
    cin>>ch;
 	switch(ch)
 	{
 		case 1:system("cls");
      mcdqhead();
 			if(flag==0)
 			{
 				cout<<"\n circular queue is already created...";
			 }
			 else
			 {
			 	mcdqinput();
			 }
 			break;
 		case 2:system("cls");
      mcdqhead();
 			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of circular queue to add data :";
			 	cin>>nu;
			 	mcdqcdpush(nu-1);
			 }
		 	break;
		 	case 3:system("cls");
      mcdqhead();
 			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of list to pop data :";
			 	cin>>nu;
			 	mcdqdelbeg(nu-1);
			 }
			 break;
			 case 4:system("cls");
      mcdqhead();
 			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			 {
			 	mcdqaddlist();
			 }
			 break;
			 case 5:system("cls");
      mcdqhead();
 			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			 {
			 	cout<<"\n Enter the number of deleted list to again create it :";
			 	cin>>nu;
				 mcdqdelcreate(nu-1);
			 }
			 break;
			 case 6:system("cls");
      mcdqhead();
 			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			     {
			     	if(l==0)
			     	{
			     		cout<<"\n All created circular queue are deleted";
					 }
					 else
					 {
			 	cout<<"\n Enter the number of list to print :";
			 	cin>>nu;
			 	mcdqprints(nu-1);
			 }
			 }
			 break;
			case 7:system("cls");
      mcdqhead();
 			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created circular queues are deleted";
					 }
					 else
					 mcdqprinta();
			 }
			 break;
			 case 8:system("cls");
      mcdqhead();
 			 if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			 {
			 	
			 	mcdqdelall();
			 }
		 	break;
		 			case 9:system("cls");
      mcdqhead();
 			if(flag==1)
 			{
 				cout<<"\n Firstly create a circular queue..";
			 }
			 else
			     {
			 	if(l==0)
			     	{
			     		cout<<"\n All created circular queues are deleted";
					 }
					 else
					 mcdqrevprinta();
			 }
			 break;
		 	case 10:
			 if(flag==0)
			 mcdqdelall();
			 return;
			 break;
		 default: cout<<"\n\n Invalid choice...";
	}
	getch();
}
}
void mlinkedswitch(int l)
{
	switch(l)
	{
		case 5:mllmenu();
		break;
		case 6:mcllmenu();
		break;
		case 7:mdllmenu();
		break;
		case 8:mcdllmenu();
		break;
		default :cout<<"\n\n\t\t\t Invalid choice..";
		
	}
					}					


void mstackswitch(int s)
{
	switch(s)
	{
		case 6:mstkmenu();
		break;
		case 7:mcstkmenu();
		break;
		case 8:mdstkmenu();
		break;
		case 9:mcdstkmenu();
		break;
		default : cout<<"\n\n\n\t\t\t\t Invalid choice..";
	}
}

void mqueueswitch(int q)
{
	switch(q)
	{
		case 7:mqmenu();
		break;
		case 8:mcqmenu();
		break;
		case 9:mdqmenu();
		break;
		case 10:mcdqmenu();
		break;
		default : cout<<"\n\n\n\t\t\t\t Invalid choice..";
	}
}
		
};



class singlinked
{
	private:
     int x,n,i;
		node *p,*temp,*t;
		noded *pd,*tempd,*td;
		public :
		
			void llinput()
			{
				cout<<"\n\n\t\t\t Enter your data :";
				cin>>x;
			}
			void llcreate()
			{
				
				
				if(root!=NULL)
				cout<<"\n\t\t\t Your linked list is already created.....";
				else{
				p=new(node);
				p->data=x;
				p->next=NULL;
				root=p;
				cout<<"\n\t\t\t Your liniked list is created successfully";
				}
			}
			void lladdbeg()
			{
				p=new(node);
				p->data=x;
				p->next=root;
				root=p;
				cout<<"\n\t\t\t Your data is saved successfully";
					}
					void lladdend()
					{
						p=new(node);
						p->data=x;
						temp=root;
						while(temp->next!=NULL)
						{
							temp=temp->next;
							
						}
						temp->next=p;
						p->next=NULL;
						cout<<"\n\t\t\t Your data is saved successfully";
					}		
					void lladdbefore()
					{
						
						cout<<"\n\t\t\t Enter the number of node :";
						cin>>n;
						if(n==1)
						{
					     llinput();	
						lladdbeg();
					}
						else
						{
						
						i=0;
						temp=root;
						while(temp!=NULL)
						{
							temp=temp->next;
							i++;
						}
						if(n>i)
						{
							cout<<"\n\t\t\t There is no position of node";
							getch();
						}else
						{
						temp=root;
						t=root->next;
					    for(i=0;i<n-2;i++)
						{
							temp=temp->next;
							t=t->next;
						}
						llinput();
						p=new(node);
						p->data=x;
						
						temp->next=p;
						p->next=t;
						cout<<"\n\t\t\t Your data is saved successfully";
						}
							}
						}
						void lladdafter()
						
						{						
						cout<<"\n\t\t\t Enter the number of node :";
						cin>>n;
						
						
						
						i=0;
						temp=root;
						while(temp!=NULL)
						{
							temp=temp->next;
							i++;
						}
						if(n>i)
						{
							cout<<"\n\t\t\t There is no position of node";
							getch();
						}else
						{
						temp=root;
						t=root->next;
					    for(i=0;i<n-1;i++)
						{
							temp=temp->next;
							t=t->next;
						}
						llinput();
						p=new(node);
						p->data=x;
						
						temp->next=p;
						p->next=t;
						cout<<"\n\t\t\t Your data is saved successfully";
						}
							
		}
						void lldelbeg()
						{
							if(root->next==NULL)
							{
							cout<<"\n\t\t\t Deleted element is "<<root->data;
								root=NULL;
							}
							else
							{
							
							temp=root;
							cout<<"\n\t\t\t Deleted element is "<<temp->data;
							root=root->next;
							delete(temp);
							
						}
										}
						void lldelend()
						{
							if(root->next==NULL)
							{
							cout<<"\n\t\t\t Deleted element is "<<root->data;
							root=NULL;
							}
							else
							{
							
							t=root->next;
							temp=root;
							while(t->next!=NULL)
							{
								t=t->next;
								temp=temp->next;
							}
							cout<<"\n\t\t\t Deleted element is "<<t->data;
							temp->next=NULL;
							delete(t);
							cout<<"\n\n\t\t\t Deleted ";
							}
						}
						void lldelg()
						{
						cout<<"\n\t\t\t Enter the number of node :";
						
						cin>>n;
						if(n==1)
						lldelbeg();
						else
						{
													
						i=0;
						temp=root;
						while(temp!=NULL)
						{
							temp=temp->next;
							i++;
						}
						if(n>i)
						{
							cout<<"\n\t\t\t There is no position of node";
							getch();
						}else
						{
						temp=root;
						t=root->next;
					    for(i=1;i<n-1;i++)
						{
							temp=temp->next;
							t=t->next;
						}
						cout<<"\n\t\t\t Deleted element is "<<t->data;
						temp->next=t->next;
						delete(t);	
						cout<<"\n\t\t\t Deleted ";
						}
					}
					}
					
						void lldisplay()
					{
						temp=root;
						cout<<"\n\t\t\t Your linked list is\n\n\t\t\t";
						while(temp!=NULL)
						{
							cout<<"|"<<temp->data<<"|"<<"-->";
							temp=temp->next;
						}cout<<"NULL";
						
					}
					void llhead()
					{
							system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |   Linked List   |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";

					}
					void llmenu()
					{
							int choice;
	
	while(1)
	{
		llhead();
    cout<<"\n\n\t\t\tLinked list : A  Singly  linked  list  is  the  simplest  type  of  linked  list  in  which  every  node  contains  some  data\n\n\t\t\t\t      and  a  pointer  to  the  next  node  of  the  same  data  type.\n";
    cout<<"\n\t\t\tExample :-\n";
    cout<<"\n\t\tLinked list ----->\t|53|2000|---->|44|4000|---->|98|6000|---->|89|8000|---->|34|1600|---->|77|NULL|";
    cout<<"\n\n\t\t\t\t\t  1000\t\t2000\t      4000\t    6000\t  8000\t\t 1600  <----Address of nodes";
    cout<<"\n\n\n\n\n\t\t\tSome operations on linked list :-\n\n\n";
	cout<<"\n\t\t\t1.Create a linked llist";
	cout<<"\t\t\t\t\t2.Display the linked list\n";
	cout<<"\n\t\t\t3.Add a node at the begning";
	cout<<"\t\t\t\t4.Add the at the end\n";
	cout<<"\n\t\t\t5.Add a node before the given node";
	cout<<"\t\t\t6.Add the node after the given node\n";
	cout<<"\n\t\t\t7.Delete the node at begning";
	cout<<"\t\t\t\t8.Delete the node at end\n";
	cout<<"\n\t\t\t9.Delete a given node";
	cout<<"\n\n\t\t\t10.Back to MAIN MENU\n";
	cout<<"\n\n\t\t\tEnter your choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		       llhead();
			   if(root==NULL)
			llinput();
			 llcreate();  
		break;
		
		case 2:system("cls");
		       llhead();   if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   lldisplay();
		break;
		
		case 3:system("cls");
		       llhead();
			   if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else{
				  
			   llinput();
		       lladdbeg();}
		break;
		
		case 4:system("cls");
		       llhead();if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   {
			   llinput();
		       lladdend();}
		break;
		
		case 5:system("cls");
		      llhead();if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
		       lladdbefore();
		break;
		
		case 6:system("cls");
		       llhead();if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   lladdafter();
		break;
		
		case 7:system("cls");
		       llhead();if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
			  else
			   lldelbeg();
		       
		break;
		
		case 8:system("cls");
		       llhead();if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   lldelend();
		break;
		
		case 9:system("cls");
		       llhead();if(root==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   lldelg();
		break;
		
		case 10:root=NULL;
		return;
		break;
		default : cout<<"\n\t\t\t Invalid choice";
	}
getch();
}
					}	


			void cllinput()
			{
				cout<<"\n\n\t\t\t Enter the data for circular linked list:";
				cin>>x;
			}
			void cllcreate()
			{
				
				if(root!=NULL)
				cout<<"\n\n\t\t\t Your circular linked list is already created";
				else{
				p=new(node);
				p->data=x;
				p->next=p;
				root=p;
				tail=p;
				cout<<"\n\n\t\t\t Your circular linked list is created successfully";
				}
			}
			void clladdbeg()
			{
				p=new(node);
				p->data=x;
				p->next=root;
				root=p;
				tail->next=root;
				cout<<"\n\n\t\t\t Your data is saved successfully";
					}
					void clladdend()
					{
						p=new(node);
						p->data=x;
						tail->next=p;
						p->next=root;
						tail=p;
						cout<<"\n\n\t\t\t Your data is saved successfully";
					}		
					void clladdbefore()
					{
						cout<<"\n\n\t\t\t Enter the number of node :";
						cin>>n;
						if(n==1)
						{
					     cllinput();	
						clladdbeg();
					}
						else
						{
						
						i=0;
						temp=root->next;
						while(temp!=root)
						{
							temp=temp->next;
							i++;
						}
						if(n>i+1)
						{
							cout<<"\n\t\t\t There is no position of node";
							getch();
						}else
						{
						temp=root;
						t=root->next;
					    for(i=0;i<n-2;i++)
						{
							temp=temp->next;
							t=t->next;
						}
						cllinput();
						p=new(node);
						p->data=x;
						
						temp->next=p;
						p->next=t;
						cout<<"\n\n\t\t\t Your data is saved successfully";
							}
						}
					}
						void clladdafter()
						{
						cout<<"\n\n\t\t\t Enter the number of node :";
						cin>>n;
						
						
						i=0;
						temp=root->next;
						while(temp!=root)
						{
							temp=temp->next;
							i++;
						}
						if(n>i+1)
						{
							cout<<"\n\t\t\t There is no position of node";
							getch();
						}else
						{
						temp=root;
						t=root->next;
					    for(i=0;i<n-1;i++)
						{
							temp=temp->next;
							t=t->next;
						}
						if(temp->next==root&&t==root)
						{
					     cllinput();	
						clladdend();
					}else
					{
					
						cllinput();
						p=new(node);
						p->data=x;
						temp->next=p;
						p->next=t;
						cout<<"\n\n\t\t\t Your data is saved successfully";
								}
							}
						}
						void clldelbeg()
						{
							if(root==tail)
							{
								temp=root;
								cout<<"\n\n\t\t\t Deleted element is "<<root->data;
								root=NULL;
								tail=NULL;
								delete(temp);
							}else
							{
							temp=root;
							cout<<"\n\n\t\t\t Deleted element is "<<temp->data;
							root=root->next;
							tail->next=root;
							delete(temp);
						}
							}
						void clldelend()
						{
							if(root==tail)
							{
								temp=root;
								cout<<"\n\n\t\t\t Deleted element is "<<root->data;
								root=NULL;
								tail=NULL;
								delete(temp);
							}
							else
							{
							t=root->next;
							temp=root;
							while(t->next!=root)
							{
								t=t->next;
								temp=temp->next;
							}
							cout<<"\n\n\t\t\t Deleted element is "<<t->data;
							temp->next=root;
							 tail=temp;
							delete(t);
						}
							cout<<"\n Deleted ";
							}
						void clldelg()
						{
						cout<<"\n\n\t\t\t Enter the number of node :";
						cin>>n;
						if(n==1)
						clldelbeg();
						else
						{
													
						i=0;
						temp=root->next;
						while(temp!=root)
						{
							temp=temp->next;
							i++;
						}
						if(n>i+1)
						{
							cout<<"\n\t\t\t There is no position of node";
							getch();
						}else
						{
						temp=root;
						t=root->next;
					    for(i=1;i<n-1;i++)
						{
							temp=temp->next;
							t=t->next;
						}

						
						cout<<"\n\n\t\t\t Deleted element is "<<t->data;
						temp->next=t->next;
						delete(t);	
						cout<<"\n Deleted ";
						}
					}
				}
						
						void clldisplay()
					{
						temp=root;
						cout<<"\n\n\t\t\t Your data is\n\n\n\t\t\t";
						do
						{
							cout<<"|"<<temp->data<<"|"<<"-->";
							temp=temp->next;
						}while(temp!=root);
						cout<<"{"<<root->data<<"}";
					}
		
		void cllhead()
					{
							system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t  ---------------------------\n";
 	cout<<"\t\t\t\t\t\t\t  |  Circular Linked List   |\n";
 	cout<<"\t\t\t\t\t\t\t  ---------------------------\n";

					}
					void cllmenu()
					{
						int choice;
	
	while(1)
	{
	system("cls");
	  cllhead();
cout<<"\n\n\t\t\tCircular linked list : A  Circular  linked  list  is  same  as  linked  list  but  the  difference  is  that  the  last  node \n\n\t\t\t\t\t       of  the  circular  linked  list  contains  the  address  of  first  node  of  the  list.\n";
    cout<<"\n\t\t\tExample :-\n";
    cout<<"\n\n\t\tCircular linked list ----->\t\t|53|2000|---->|44|4000|---->|98|6000|---->|89|8000|---->|34|1600|---->|77|1000|";
    cout<<"\n\n\t\t\t\t\t\t\t  1000\t\t2000\t      4000\t    6000\t  8000\t\t 1600  <----Address of nodes";
    cout<<"\n\n\n\n\t\t\tSome operations on Circular linked list :-\n\n\n";
	
	cout<<"\n\t\t\t1.Create a circular linked llist";
	cout<<"\t\t\t2.Display the circular linked list\n";
	cout<<"\n\t\t\t3.Add a node at the begning";
	cout<<"\t\t\t\t4.Add the at the end\n";
	cout<<"\n\t\t\t5.Add a node before the given node";
	cout<<"\t\t\t6.Add the node after the given node\n";
	cout<<"\n\t\t\t7.Delete the node at begning";
	cout<<"\t\t\t\t8.Delete the node at end\n";
	cout<<"\n\t\t\t9.Delete a given node";
	cout<<"\n\n\t\t\t10.Back to MAIN MENU\n";
	cout<<"\n\n\t\t\tEnter your choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		       
	cllhead();
		       if(root==NULL)
			cllinput();
			 cllcreate();  
		break;
		
		case 2:system("cls");
	cllhead();
		          if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   clldisplay();
		break;
		
		case 3:system("cls");
	cllhead();
		       if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else{
				  
			   cllinput();
		       clladdbeg();}
		break;
		
		case 4:system("cls");
	cllhead();
		       if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   {
			   cllinput();
		       clladdend();}
		break;
		
		case 5:system("cls");
	cllhead();
		      if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
		       clladdbefore();
		break;
		
		case 6:system("cls");
	cllhead();
		       if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   clladdafter();
		break;
		
		case 7:system("cls");
	
	cllhead();
		       if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   clldelbeg();
		       
		break;
		
		case 8:system("cls");
	cllhead();
		       if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   clldelend();
		break;
		
		case 9:system("cls");
	cllhead();
		       if(root==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a linked list";
				  } 
				  else
			   clldelg();
		break;
		case 10:root=NULL;return;
		default : cout<<"\n\n\t\t\t Invalid choice";
	}
getch();}
					}
		
			void dllinput()
			{
				cout<<"\n\n\t\t\t Enter the data for doubly linked list:";
				cin>>x;
			}
			void dllcreate()
			{
				
				if(rootd!=NULL)
				cout<<"\n\n\t\t\t Your doubly linked list is already created";
				else{
				pd=new(noded);
				pd->data=x;
				pd->prev=NULL;
				pd->next=NULL;
				rootd=pd;
				taild=pd;
				cout<<"\n\n\t\t\t Your doubly linked list is created successfully";
				}
			}
			void dlladdbeg()
			{
				pd=new(noded);
				pd->data=x;
				pd->prev=NULL;
				pd->next=rootd;
				rootd->prev=pd;
				rootd=pd;
				cout<<"\n\n\t\t\t Your data is saved successfully";
					}
					void dlladdend()
					{
						pd=new(noded);
						pd->data=x;
						taild->next=pd;
						pd->prev=taild;
						pd->next=NULL;
						taild=pd;
						cout<<"\n\n\t\t\t Your data is saved successfully";
					}		
					void dlladdbefore()
					{
						cout<<"\n\n\t\t\t Enter the number of node :";
						cin>>n;
						if(n==1)
						{
							
					     dllinput();	
						dlladdbeg();
					}
						else
						{
						
						i=0;
						tempd=rootd;
						while(tempd!=NULL)
						{
							tempd=tempd->next;
							i++;
						}
						if(n>i)
						{
							cout<<"\n\t\t\t There is no position of noded";
							getch();
						}else
						{
						tempd=rootd;
						td=rootd->next;
					    for(i=0;i<n-2;i++)
						{
							tempd=tempd->next;
							td=td->next;
						}
						dllinput();
						pd=new(noded);
						pd->data=x;
						tempd->next=pd;
						pd->prev=tempd;
						pd->next=td;
						td->prev=pd;
					    cout<<"\n\n\t\t\t Your data is saved successfully";
							}
						}
					}
						void dlladdafter()
						{
						cout<<"\n\n\t\t\t Enter the number of node :";
						cin>>n;
						
						
						i=0;
						tempd=rootd;
						while(tempd!=NULL)
						{
							tempd=tempd->next;
							i++;
						}
						if(n>i)
						{
							cout<<"\n\t\t\t There is no position of noded";
							getch();
						}else
						{
						tempd=rootd;
						td=rootd->next;
					    for(i=0;i<n-1;i++)
						{
							tempd=tempd->next;
							td=td->next;
						}
						if(tempd->next==NULL&&t==NULL)
						{
							dllinput();
							dlladdend();
						}
						else
						{
						
						dllinput();
						pd=new(noded);
						pd->data=x;
						tempd->next=pd;
						pd->prev=tempd;
						pd->next=td;
						td->prev=pd;
							
						cout<<"\n\n\t\t\t Your data is saved successfully";
								}
							}
					}
						void dlldelbeg()
						{
							if(rootd==taild)
							{
							cout<<"\n\n\t\t\t Deleted element is "<<rootd->data;
							
								rootd=NULL;
								taild=NULL;
							}
							else
							{
							
							tempd=rootd;
							cout<<"\n\n\t\t\t Deleted element is "<<rootd->data;
							rootd=tempd->next;
							rootd->prev=NULL;
							}
						}
						void dlldelend()
						{
							if(rootd==taild)
							{
							cout<<"\n\n\t\t\t Deleted element is "<<rootd->data;
							
								rootd=NULL;
								taild=NULL;
							}
							else
							{
							
							tempd=taild;
							cout<<"\n\n\t\t\t Deleted element is "<<taild->data;
							taild=tempd->prev;
							taild->next=NULL;
							cout<<"\n Deleted ";
							}
						}
						void dlldelg()
						{
						cout<<"\n\n\t\t\t Enter the number of node :";
						
						cin>>n;
						if(n==1)
						dlldelbeg();
						else
						{
													
						i=0;
						tempd=rootd;
						while(tempd!=NULL)
						{
							tempd=tempd->next;
							i++;
						}
						if(n>i)
						{
							cout<<"\n\t\t\t There is no position of noded";
							getch();
						}else
						{
						tempd=rootd;
						td=rootd->next;
					    for(i=1;i<n-1;i++)
						{
							tempd=tempd->next;
							td=td->next;
						}
						if(tempd->next->next==NULL&&td->next==NULL)
						dlldelend();
						else
                        {
						cout<<"\n\n\t\t\t Deleted element is "<<td->data;
						tempd->next=td->next;
						td->next->prev=tempd;
						delete(td);	
						cout<<"\n\n\t\t\t Deleted ";
						}
					}
				}
				}
						void dlldisplay()
					{
						tempd=rootd;
						cout<<"\n\n\t\t\t Your doubly linked list is\n\n\n\t\t\t";
						cout<<"NULL<--";
						while(tempd!=NULL)
						{
							cout<<"|"<<tempd->data<<"|"<<"-->";
							tempd=tempd->next;
						}cout<<"NULL";
					}
					void dlldisplayr()
					{
						tempd=taild;
						cout<<"\n\n\t\t\t Your doubly linked list is\n\n\n\t\t\t";
						cout<<"NULL<--";
						while(tempd!=NULL)
						{
							cout<<"|"<<tempd->data<<"|"<<"-->";
							tempd=tempd->prev;
						}
						cout<<"-->NULL";
					}
					void dllhead()
					{
													system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Doubly Linked List   |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------------\n";


					}
					void dllmenu()
					{
						int choice;
	
	while(1)
	{
	system("cls");
	dllhead();
    cout<<"\n\n\t\t\tDoubly linked list : A  Doubly  linked  list  or  a  two-way  linked  list  is  a  more  complex  type  of  linked  list  which  contains \n\n\t\t\t\t\t     a  pointer  to  thye  next  as  well  as  the  previous  node  in  the  sequence. Each  node  of  doubly  linked  list \n\n\t\t\t\t\t     contains  the  address  of  next  node  as  well  as  previous  node. \n";
    cout<<"\n\t\t\tExample :-\n";
    cout<<"\n\n\tDoubly linked list -----> \t|NULL|53|2000|<--->|1000|44|4000|<--->|2000|98|6000|<--->|4000|89|8000|<--->|6000|34|1600|<--->|8000|77|NULL|";
    cout<<"\n\n\t\t\t\t\t      1000\t\t2000\t\t   4000\t\t      6000\t\t  8000\t\t    1600  <----Address of nodes";
    cout<<"\n\n\n\n\t\t\tSome operations on Doubly  linked list :-\n\n\n";

	cout<<"\n\t\t\t1.Create a doubly linked llist";
	cout<<"\t\t\t\t2.Display the doubly linked list\n";
	cout<<"\n\t\t\t3.Add a node at the begning";
	cout<<"\t\t\t\t4.Add the at the end\n";
	cout<<"\n\t\t\t5.Add a node before the given node";
	cout<<"\t\t\t6.Add the node after the given node\n";
	cout<<"\n\t\t\t7.Delete the node at begning";
	cout<<"\t\t\t\t8.Delete the node at end\n";
	cout<<"\n\t\t\t9.Delete a given node";
	cout<<"\t\t\t\t\t10.Reverse display of doubly linked list\n";
	cout<<"\n\t\t\t11.Back to MAIN MENU\n";
	cout<<"\n\n\t\t\tEnter your choice :";
cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		       dllhead();
			   if(rootd==NULL)
			dllinput();
			 dllcreate();  
		break;
		
		case 2:system("cls");
		       dllhead();
			      if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
			   dlldisplay();
		break;
		
		case 3:system("cls");
		       dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else{
				  
			   dllinput();
		       dlladdbeg();}
		break;
		
		case 4:system("cls");
		       dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
			   {
			   dllinput();
		       dlladdend();}
		break;
		
		case 5:system("cls");
		      dllhead();
			  if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
		       dlladdbefore();
		break;
		
		case 6:system("cls");
		      dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
			   dlladdafter();
		break;
		
		case 7:system("cls");
		      dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
			   dlldelbeg();
		       
		break;
		
		case 8:system("cls");
		      dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
			   dlldelend();
		break;
		
		case 9:system("cls");
		      dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
			   dlldelg();
		break;
		
	
		case 10:system("cls");
		      dllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\n\t\t\t Warning.....\n\n firstly create a  DOUBLY LINKED list";
				  } 
				  else
				  dlldisplayr();
				  break;
	    case 11:rootd=NULL;return;	  
		default : cout<<"\n\n\t\t\t Invalid choice";
	}
getch();}
					}
						
			void cdllinput()
			{
				cout<<"\n\n\n\t\t\t Enter the data for circular doubly linked list :";
				cin>>x;
			}
			void cdllcreate()
			{
				
				if(rootd!=NULL)
				cout<<"\n\n\n\t\t\t Your circular doubly linked list is already created";
				else{
				pd=new(noded);
				pd->data=x;
				pd->prev=pd;
				pd->next=pd;
				rootd=pd;
				taild=pd;
				cout<<"\n\n\n\t\t\t Your circular doubly liniked list is created successfully";
				}
			}
			void cdlladdbeg()
			{
				pd=new(noded);
				pd->data=x;
				pd->prev=taild;
				pd->next=rootd;
				rootd->prev=pd;
				rootd=pd;
				taild->next=rootd;
				cout<<"\n\n\n\t\t\t Your data is saved successfully";
					}
					void cdlladdend()
					{
						pd=new(noded);
						pd->data=x;
						taild->next=pd;
						pd->prev=taild;
						pd->next=rootd;
						taild=pd;
						rootd->prev=taild;
						cout<<"\n\n\n\t\t\t Your data is saved successfully";
					}		
					void cdlladdbefore()
					{
						cout<<"\n\n\n\t\t\t Enter the number of node :";
						cin>>n;
						if(n==1)
						{
					     cdllinput();	
						cdlladdbeg();
					}
						else
						{
						
						i=0;
						tempd=rootd->next;
						while(tempd!=rootd)
						{
							tempd=tempd->next;
							i++;
						}
						if(n>i+1)
						{
							cout<<"\n\n\n\t\t\t There is no position of noded";
							getch();
						}else
						{
						tempd=rootd;
						td=rootd->next;
					    for(i=0;i<n-2;i++)
						{
							tempd=tempd->next;
							td=td->next;
						}
					
						cdllinput();
						pd=new(noded);
						pd->data=x;
						tempd->next=pd;
						pd->prev=tempd;
						pd->next=td;
						td->prev=pd;
					    cout<<"\n\n\n\t\t\t Your data is saved successfully";
							}	
						}
					}
						void cdlladdafter()
						{
						cout<<"\n\n\n\t\t\t Enter the number of node :";
						cin>>n;
						
						i=0;
						tempd=rootd->next;
						while(tempd!=rootd)
						{
							tempd=tempd->next;
							i++;
						}
						if(n>i+1)
						{
							cout<<"\n\n\n\t\t\t There is no position of noded";
							getch();
						}else
						{
						tempd=rootd;
						td=rootd->next;
					    for(i=0;i<n-1;i++)
						{
							tempd=tempd->next;
							td=td->next;
						}
						if(tempd->next==rootd&&td==rootd)
						{
							cdllinput();
							cdlladdend();
						}
						else
						{
						
						cdllinput();
						pd=new(noded);
						pd->data=x;
						tempd->next=pd;
						pd->prev=tempd;
						pd->next=td;
						td->prev=pd;
							
						cout<<"\n\n\n\t\t\t Your data is saved successfully";
						
								}
							}
						}
						
						void cdlldelbeg()
						{
							if(rootd==taild)
							{
							cout<<"\n\n\n\t\t\t Deleted element is "<<rootd->data;
							
								rootd=NULL;
								taild=NULL;
							}
						    else
							{
									
							tempd=rootd;
							cout<<"\n\n\n\t\t\t Deleted element is "<<rootd->data;
							rootd=tempd->next;
							rootd->prev=taild;
							taild->next=rootd;
							}
						}
						void cdlldelend()
						{
							if(rootd==taild)
							{
							cout<<"\n\n\n\t\t\t Deleted element is "<<rootd->data;
							
								rootd=NULL;
								taild=NULL;
							}
							else
							{
							
							tempd=taild;
							cout<<"\n\n\n\t\t\t Deleted element is "<<taild->data;
							taild=tempd->prev;
							taild->next=rootd;
							rootd->prev=taild;
							cout<<"\n\n\t\t\t Deleted ";
							}
						}
						void cdlldelg()
						{
						cout<<"\n\n\n\t\t\t Enter the number of node :";
						fflush(stdin);
						cin>>n;
						if(n==1||rootd==taild)
						cdlldelbeg();
						else
						{
													
						i=0;
						tempd=rootd->next;
						while(tempd!=rootd)
						{
							tempd=tempd->next;
							i++;
						}
						if(n>i+1)
						{
							cout<<"\n\n\n\t\t\t There is no position of noded";
							getch();
						}else
						{
						tempd=rootd;
						td=rootd->next;
					    for(i=1;i<n-1;i++)
						{
							tempd=tempd->next;
							td=td->next;
						}
						if(tempd->next->next==rootd&&td->next==rootd)
						cdlldelend();
						else
                        {

						cout<<"\n\n\n\t\t\t Deleted element is "<<td->data;
						tempd->next=td->next;
						td->next->prev=tempd;
						delete(td);	
						cout<<"\n\n\n\t\t\t Deleted ";
						}
					}
				}
			}
					void cdlldisplay()
					{
						tempd=rootd;
						cout<<"\n\t\t\t Your circular doubly linked list is\n\n\n\n\t\t\t";
						cout<<"{"<<taild->data<<"}<--";
						
						do
						{
							cout<<"|"<<tempd->data<<"|"<<"-->";
							tempd=tempd->next;
					}while(tempd!=rootd);
					cout<<"{"<<rootd->data<<"}";
						
					}
					
					void cdlldisplayr()
					{
						tempd=taild;
						cout<<"\n\t\t\t Your circular doubly linked list is\n\n\n\n\t\t\t";
						cout<<"{"<<rootd->data<<"}<--";
						
						do
						{
							cout<<"|"<<tempd->data<<"|"<<"-->";
							tempd=tempd->prev;
						}while(tempd!=taild);
					cout<<"{"<<taild->data<<"}";
						
					}
					void cdllhead()
					{
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    ---------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Circular Doubly Linked List  |\n";
 	cout<<"\t\t\t\t\t\t\t    ---------------------------------\n";



					}
					void cdllmenu()
					{
						int choice;
	
	while(1)
	{
	system("cls");
	cdllhead();
	cout<<"\n\n\t\t\tCircular Doubly linked list : A Circular  Doubly  linked  list   is  same  as  doubly  linked  list  but  the  difference  is  that  ,\n\n\t\t\t\t\t\t      the  next  pointer  of  last  node  of  the  list  contains  the  address  of  first  node  and the  previous\n\n\t\t\t\t\t\t       pointer  of  the  first  node  contains  the  address  of  last  node.\n";
    cout<<"\n\t\t\tExample :-\n";
    cout<<"\n\nCircular Doubly linked list -----> \t|1600|53|2000|<--->|1000|44|4000|<--->|2000|98|6000|<--->|4000|89|8000|<--->|6000|34|1600|<--->|8000|77|1000|";
    cout<<"\n\n\t\t\t\t\t      1000\t\t2000\t\t   4000\t\t      6000\t\t  8000\t\t    1600  <----Address of nodes";
    cout<<"\n\n\n\n\t\t\tSome operations on Circular Doubly  linked list :-\n\n\n";

	cout<<"\t\t\t1.Create a circular doubly linked list";
	cout<<"\t\t\t2.Display the circular doubly linked list\n";
	cout<<"\n\t\t\t3.Add a node at the begning";
	cout<<"\t\t\t\t4.Add the at the end\n";
	cout<<"\n\t\t\t5.Add a node before the given node";
	cout<<"\t\t\t6.Add the node after the given node\n";
	cout<<"\n\t\t\t7.Delete the node at begning";
	cout<<"\t\t\t\t8.Delete the node at end\n";
	cout<<"\n\t\t\t9.Delete a given node";
	cout<<"\t\t\t\t\t10.Reverse display of circular doubly linked list\n";
	cout<<"\n\t\t\t11.Back to MAIN MENU\n";
	cout<<"\n\n\t\t\tEnter your choice :";
cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		       cdllhead();
			   if(rootd==NULL)
			cdllinput();
			 cdllcreate();  
		break;
		
		case 2:system("cls");
		       cdllhead();
			      if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
			   cdlldisplay();
		break;
		
		case 3:system("cls");
		       cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else{
				  
			   cdllinput();
		       cdlladdbeg();}
		break;
		
		case 4:system("cls");
		       cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
			   {
			   cdllinput();
		       cdlladdend();}
		break;
		
		case 5:system("cls");
		      cdllhead();
			  if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
		       cdlladdbefore();
		break;
		
		case 6:system("cls");
		      cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
			   cdlladdafter();
		break;
		
		case 7:system("cls");
		      cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
			   cdlldelbeg();
		       
		break;
		
		case 8:system("cls");
		      cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
			   cdlldelend();
		break;
		
		case 9:system("cls");
		      cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
			   cdlldelg();
		break;
		
		case 10:system("cls");
		      cdllhead();
			   if(rootd==NULL)
		          {
		          	cout<<"\n\n\t\t\t Warning.....\n\n firstly create a  CIRCULAR DOUBLY LINKED list";
				  } 
				  else
				  cdlldisplayr();
				  break;
	    case 11:rootd=NULL;return;	  
		default : cout<<"\n\t\t\t Invalid choice";
	}
getch();}
					}
	void stkinput()
	{
		cout<<"\n\n\t\t\t Enter the data for dynamic stack :";
		cin>>x;
			
		}	
		void stkcreate()
		{
			if(root!=NULL)
			{
				cout<<"\n\n\t\t\tDynamic Stack is already created";
			}
			else
			{
			stkinput();
			p=new(node);
			p->data=x;
			p->next=NULL;
			root=p;
			top=p;
			cout<<"\n\n\t\t\tDynamic stack is created ande data saved successfully";
		}
		}
		void stkpush()
		{
			if(root==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else
			{
			stkinput();	
			p=new(node);
			p->data=x;
			p->next=NULL;
			top->next=p;
			top=p;
			cout<<"\n\n\t\t\t Data pushed successfully";
		}
		}
		void stkpop()
		{
			if(root==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
				if(root==top)
				{
					cout<<"\n\n\t\t\t Deleted data is :"<<top->data;
					temp=root;
					root=NULL;
					top=NULL;
					delete(temp);
				cout<<"\n\n\t\t\t Stack is empty";	
				}
				else
				{
				
				temp=root;
				cout<<"\n\n\t\t\t Deleted data is :"<<top->data;
				while(temp->next!=top)
				{
					temp=temp->next;
				}
				temp->next=NULL;
				delete(top);
				top=temp;
			}
		}
		}
		void stkhead()
		{
			
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Stack  |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------\n";

		}
		void stktraverse()
		{
			if(root==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
			temp=root;
			cout<<"\n\n\t\t\t Data in stack is \n\n\n\n\t\t\t";
			while(temp!=NULL)
			{
				cout<<"|"<<temp->data<<"|"<<"\t";
				if(temp->next==NULL)
				cout<<"\n\n\n\n\t\t\t Top of Stack is "<<temp->data;
				temp=temp->next;
			}
		}
		}
		void stkmenu()
		{
			int choice;
	
	while(1)
	{
	system("cls");
stkhead();
    cout<<"\n\t\t\tDynamic stack :- The  concept  of  dynamic  stack  is  same  with  general  stack  but  the  difference  is  that,  in  static  stack  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  stack  but  in  dynamic  stack  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  stack  we  use  the  concept  of  linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data.";
    cout<<"\n\n\n\t\t Operations on Dynamic stack : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic stack\n";
	cout<<"\n\n\t\t\t2.Push\n";
	cout<<"\n\n\t\t\t3.Pop\n";
	cout<<"\n\n\t\t\t4.Traverse\n";
	cout<<"\n\n\t\t\t5.Back to MAIN MENU\n\n\n\t\t\tEnter your choice :";
    cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		  stkhead();
		    stkcreate();
			break;
			
			case 2:system("cls");
		    stkhead();
			stkpush();
			break;
			
			case 3:system("cls");
		    stkhead();
			stkpop();
			break;
			
			case 4:system("cls");
		    stkhead();
			stktraverse();
			break;
			
			case 5:root=NULL;return;
			break;
			default: cout<<"\n\n\t\t\t Invalid choice \n\n\t\t\tSelect correct choice..";
	}
getch();}
		}
		
		
	void cstkinput()
	{
		cout<<"\n\n\t\t\t Enter the data for circular dynamic stack :";
		cin>>x;
			
		}	
		void cstkcreate()
		{
			if(root!=NULL)
			{
				cout<<"\n\n\t\t\tCircular Stack is already created";
			}
			else
			{
			cstkinput();
			p=new(node);
			p->data=x;
			p->next=p;
			root=p;
			top=p;
			cout<<"\n\n\t\t\tCircular Dynamic stack is created ande data saved successfully";
		}
		}
		void cstkpush()
		{
			if(root==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else
			{
			cstkinput();	
			p=new(node);
			p->data=x;
			p->next=root;
			top->next=p;
			top=p;
			cout<<"\n\n\t\t\t Data pushed successfully";
		}
		}
		void cstkpop()
		{
			if(root==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
				if(root==top)
				{
					cout<<"\n\n\t\t\t Deleted data is :"<<top->data;
					temp=root;
					root=NULL;
					top=NULL;
					delete(temp);
				cout<<"\n\n\t\t\t Stack is empty";	
				}
				else
				{
				
				temp=root;
				cout<<"\n\n\t\t\t Deleted data is :"<<top->data;
				while(temp->next!=top)
				{
					temp=temp->next;
				}
				temp->next=root;
				delete(top);
				top=temp;
			}
		}
		}
		void cstkhead()
		{
			
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Circular Stack  |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------------\n";

		}
		void cstktraverse()
		{
			if(root==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
			temp=root;
			cout<<"\n\n\t\t\t Data in stack is \n\n\n\n\t\t\t";
			do
			{
				cout<<"|"<<temp->data<<"|--> ";
				temp=temp->next;
			}while(temp!=root);
			cout<<"{"<<root->data<<"}";
			cout<<"\n\n\n\n\t\t\t Top of Stack is "<<top->data;
				
		}
		}
		void cstkmenu()
		{
			int choice;
	
	while(1)
	{
	system("cls");	
    cstkhead();
    cout<<"\n\t\tCircular Dynamic stack:- The concept  of Circular dynamic  stack  is  same with  general stack  but  the  difference  is  that,  in  static  stack  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  stack  but  in Circular dynamic  stack  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  stack  we  use  the  concept  of Circular  linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data. The  last  node  of  the  list  contain  the  address  of  first  node.";
    cout<<"\n\n\n\t\t Operations on Circluar Dynamic stack : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic circular stack\n";
	cout<<"\n\n\t\t\t2.Push\n";
	cout<<"\n\n\t\t\t3.Pop\n";
	cout<<"\n\n\t\t\t4.Traverse\n";
	cout<<"\n\n\t\t\t5.Back to MAIN MENU\n\n\n\t\t\tEnter your choice :";
    cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		  cstkhead();
		   cstkcreate();
			break;
			
			case 2:system("cls");
		    cstkhead();
			cstkpush();
			break;
			
			case 3:system("cls");
		    cstkhead();
			cstkpop();
			break;
			
			case 4:system("cls");
		    cstkhead();
			cstktraverse();
			break;
			
			case 5:root=NULL;return;
			break;
			default: cout<<"\n\n\t\t\t Invalid choice \n\n\t\t\tSelect correct choice..";
	}
getch();}
		}
		

void dstkinput()
	{
		cout<<"\n\n\t\t\t Enter the data for doubly stack :";
		cin>>x;
			
		}	
		void dstkcreate()
		{
			if(rootd!=NULL)
			{
				cout<<"\n\n\t\t\t Stack is already created";
			}
			else
			{
			dstkinput();
			pd=new(noded);
			pd->data=x;
			pd->next=NULL;
			pd->prev=NULL;
			rootd=pd;
			topd=pd;
			cout<<"\n\n\t\t\tDoubly Dynamic stack is created ande data saved successfully";
		}
		}
		void dstkpush()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else
			{
			dstkinput();	
			pd=new(noded);
			pd->data=x;
			pd->next=NULL;
			pd->prev=topd;
			topd->next=pd;
			topd=pd;
			cout<<"\n\n\t\t\t Data pushed successfully";
		}
		}
		void dstkpop()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
				if(rootd==topd)
				{
					cout<<"\n\n\t\t\t Deleted data is :"<<topd->data;
					tempd=rootd;
					rootd=NULL;
					topd=NULL;
					delete(tempd);
				cout<<"\n\n\t\t\t Stack is empty";	
				}
				else
				{
				
				tempd=rootd;
				cout<<"\n\n\t\t\t Deleted data is :"<<topd->data;
				while(tempd->next!=topd)
				{
					tempd=tempd->next;
				}
				tempd->next=NULL;
				delete(topd);
				topd=tempd;
			}
		}
		}
		void dstktraverse()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
			tempd=rootd;
			cout<<"\n\n\t\t\t Data in stack is \n\n\n\t\t\t";
			cout<<"NULL <-- ";
			while(tempd!=NULL)
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->next;
			}
			cout<<"NULL";
			cout<<"\n\n\n\n\t\t\t Top of the stack is :"<<topd->data;
		}
		}
		void dstktraverser()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n Firstly create a stack";
			}
			else{
			tempd=topd;
			cout<<"\n\n\t\t\t Data in stack is \n\n\n\t\t\t";
			cout<<"NULL <-- ";
			while(tempd!=NULL)
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->prev;
			}
			cout<<"NULL";
		}
		}
				void dstkhead()
		{
			
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Doubly Stack  |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------------\n";

		}

		void dstkmenu()
		{
			int choice;
	
	while(1)
	{
	system("cls");
	dstkhead();
    cout<<"\n\t\tDoubly Dynamic stack:- The concept  of Doubly dynamic  stack  is  same with  general stack  but  the  difference  is  that,  in  static  stack  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  stack  but  in Doubly dynamic  stack  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  stack  we  use  the  concept  of Doubly  linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data. ";
    cout<<"\n\n\n\t\t Operations on Doubly Dynamic stack : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic doubly stack\n";
	cout<<"\n\n\t\t\t2.Push\n";
	cout<<"\n\n\t\t\t3.Pop\n";
	cout<<"\n\n\t\t\t4.Traverse\n";
	cout<<"\n\n\t\t\t5.Reverse Traverse\n";
	cout<<"\n\n\t\t\t6.Back to MAIN MENU\n\n\n\t\t\tEnter your choice :";

	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		    dstkhead();
			dstkcreate();
			break;
			
			case 2:system("cls");
		    dstkhead();
			dstkpush();
			break;
			
			case 3:system("cls");
		    dstkhead();
			dstkpop();
			break;
			
			case 4:system("cls");
		    dstkhead();
			dstktraverse();
			break;
			
			case 5:
			system("cls");
		    dstkhead();
			dstktraverser();
			break;
			case 6:rootd=NULL;return;
			default: cout<<"\n\n\t\t\t Invalid choice \n\n\n\t\t\tSelect correct choice..";
	}
getch();}
		}

	void cdstkinput()
	{
		cout<<"\n\n\t\t\t Enter the data for circular doubly stack :";
		cin>>x;
			
		}	
		void cdstkcreate()
		{
			if(rootd!=NULL)
			{
				cout<<"\n\n\t\t\t Stack is already created";
			}
			else
			{
			cdstkinput();
			pd=new(noded);
			pd->data=x;
			pd->next=pd;
			pd->prev=pd;
			rootd=pd;
			topd=pd;
			cout<<"\n\n\t\t\tCircular Doubly Dynamic stack is created and data saved successfully";
		}
		}
		void cdstkpush()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else
			{
			cdstkinput();	
			pd=new(noded);
			pd->data=x;
			pd->next=rootd;
			pd->prev=topd;
			topd->next=pd;
			rootd->prev=topd=pd;
			cout<<"\n\n\t\t\t Data pushed successfully";
		}
		}
		void cdstkpop()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
				if(rootd==topd)
				{
					cout<<"\n\n\t\t\t Deleted data is :"<<topd->data;
					tempd=rootd;
					rootd=NULL;
					topd=NULL;
					delete(tempd);
				cout<<"\n\n\t\t\t Stack is empty";	
				}
				else
				{
				
				tempd=rootd;
				cout<<"\n\n\t\t\t Deleted data is :"<<topd->data;
				while(tempd->next!=topd)
				{
					tempd=tempd->next;
				}
				tempd->next=rootd;
				rootd->prev=tempd;
				delete(topd);
				topd=tempd;
			}
		}
		}
		void cdstktraverse()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n firstly create a stack";
			}
			else{
			tempd=rootd;
			cout<<"\n\n\t\t\t Data in stack is \n\n\n\t\t\t";
			cout<<"{"<<topd->data<<"}"<<" <-- ";
			do
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->next;
			}while(tempd!=rootd);
			cout<<"{"<<rootd->data<<"}";
			cout<<"\n\n\n\n\t\t\t Top of the stack is :"<<topd->data;
		}
		}
		void cdstktraverser()
		{
			if(rootd==NULL)
			{
				cout<<"\n\n\t\t\tWarning.....\n\n Firstly create a stack";
			}
			else{
			tempd=topd;
			cout<<"\n\n\t\t\t Data in stack is \n\n\n\t\t\t";
			cout<<"{"<<rootd->data<<"}"<<" <-- ";
			do
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->prev;
			}while(tempd!=topd);
			cout<<"{"<<topd->data<<"}";
			cout<<"\n\n\n\n\t\t\t Top of the stack is :"<<topd->data;
		
		}
		}
				void cdstkhead()
		{
			
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -----------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Circular Doubly Stack  |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------------\n";

		}

		void cdstkmenu()
		{
			int choice;
	
	while(1)
	{
	system("cls");
	cdstkhead();
	cout<<"\n\tCircular doubly Dynamic stack:- The concept of Circular doubly dynamic  stack is same with  general stack  but  the difference is that, in static stack  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  stack  but  in Circular doubly dynamic  stack  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  stack  we  use  the  concept  of Circular doubly linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data.";
    cout<<"\n\n\n\t\t Operations on Circluar doubly Dynamic stack : \n\n";
    cout<<"\n\n\t\t\t1.Create a circular doubly stack\n";
	cout<<"\n\n\t\t\t2.Push\n";
	cout<<"\n\n\t\t\t3.Pop\n";
	cout<<"\n\n\t\t\t4.Traverse\n";
	cout<<"\n\n\t\t\t5.Reverse Traverse\n";
	cout<<"\n\n\t\t\t6.Back to MAIN MENU\n\n\n\t\t\tEnter your choice :";

	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
		    cdstkhead();
			cdstkcreate();
			break;
			
			case 2:system("cls");
		    cdstkhead();
			cdstkpush();
			break;
			
			case 3:system("cls");
		    cdstkhead();
			cdstkpop();
			break;
			
			case 4:system("cls");
		    cdstkhead();
			cdstktraverse();
			break;
			
			case 5:
			system("cls");
		    cdstkhead();
			cdstktraverser();
			break;
			case 6:rootd=NULL;return;
			default: cout<<"\n\n\t\t\t Invalid choice \n\n\n\t\t\tSelect correct choice..";
	}
getch();}
		}

			void qinput()
			{
			   cout<<"\n\n\t\t\t Enter the data for queue:";
			   cin>>x;
			}
			void qcreate()
			{
				if(front!=NULL)
				{
					cout<<"\n\n\t\t\tDynamic Queue is already created...";
				}
				else
				{
					qinput();
					p=new(node);
					p->data=x;
					p->next=NULL;
					front=p;
					rear=p;
					cout<<"\n\n\t\t\tDynamic queue is created and your data is saved successfully.";
				}
			}
			void qinsert()
			{
				if(front==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					qinput();
					p=new(node);
					p->data=x;
					p->next=NULL;
					rear->next=p;
					rear=p;
					cout<<"\n\n\t\t\t Your data is saved successfully";
					
				}
			}
			void qdel()
			{
				if(front==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					if(front==rear)
					{
						temp=front;
						cout<<"\n\n\t\t\t Deleted element is :"<<front->data;
						front=NULL;
						rear=NULL;
						delete(temp);
						cout<<"\n\n\n\t\t\tQueue is empty";
					}
					else
					{
					
					temp=front;
					cout<<"\n\n\t\t\t Deleted element is :"<<front->data;
					front=temp->next;
					delete(temp);
				}
				}
			}
			void qtraverse()
			{
				if(front==NULL)
				{
						cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
				
				
				temp=front;
				cout<<"\n\n\t\t\t Your data is \n\n\n\t\t\t";
				while(temp!=NULL)
			{
				cout<<"|"<<temp->data<<"|--> ";
				temp=temp->next;
			}
			cout<<"NULL";
			cout<<"\n\n\n\n\t\t\t Front : "<<front->data;
			cout<<"\n\n\n\t\t\t Rear : "<<rear->data;
			
			}
		}
			void qhead()
			{
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Queue  |\n";
 	cout<<"\t\t\t\t\t\t\t    -------------------\n";

			}
			void qmenu()
			{
				int choice;
	
	while(1)
	{
	system("cls");
	qhead();
    cout<<"\n\t\t\tDynamic queue :- The  concept  of  dynamic  queue  is  same  with  general  queue  but  the  difference  is  that,  in  static  queue  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  queue  but  in  dynamic  queue  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  queue  we  use  the  concept  of  linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data.";
    cout<<"\n\n\n\t\t Operations on Dynamic  queue : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic Queue\n";
	cout<<"\n\n\t\t\t2.insert data\n";
	cout<<"\n\n\t\t\t3.delete data\n";
	cout<<"\n\n\t\t\t4.traverse data\n";
	cout<<"\n\n\t\t\t5.Back to MAIN MENU\n\n\n\t\t\tEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
			qhead();
			qcreate();
			break;
			
			case 2:system("cls");
			qhead();
			qinsert();
			break;
			
			case 3:system("cls");
			qhead();
			qdel();
			break;
			
			case 4:system("cls");
			qhead();
			qtraverse();
			break;
			
			case 5:front=NULL;return;
			break;
	}
getch();}
			}



			void cqinput()
			{
			   cout<<"\n\n\t\t\t Enter the data for queue:";
			   cin>>x;
			}
			void cqcreate()
			{
				if(front!=NULL)
				{
					cout<<"\n\n\t\t\tDynamic Queue is already created...";
				}
				else
				{
					cqinput();
					p=new(node);
					p->data=x;
					p->next=p;
					front=p;
					rear=p;
					cout<<"\n\n\t\t\tDynamic queue is created and your data is saved successfully.";
				}
			}
			void cqinsert()
			{
				if(front==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					cqinput();
					p=new(node);
					p->data=x;
					p->next=front;
					rear->next=p;
					rear=p;
					cout<<"\n\n\t\t\t Your data is saved successfully";
					
				}
			}
			void cqdel()
			{
				if(front==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					if(front==rear)
					{
						temp=front;
						cout<<"\n\n\t\t\t Deleted element is :"<<front->data;
						front=NULL;
						rear=NULL;
						delete(temp);
						cout<<"\n\n\n\t\t\tQueue is empty";
					}
					else
					{
					
					temp=front;
					cout<<"\n\n\t\t\t Deleted element is :"<<front->data;
					front=temp->next;
					rear->next=front;
					delete(temp);
				}
				}
			}
			void cqtraverse()
			{
				if(front==NULL)
				{
						cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
				
				temp=front;
				cout<<"\n\n\t\t\t Your data is \n\n\n\t\t\t";
				do
			{
				cout<<"|"<<temp->data<<"|--> ";
				temp=temp->next;
			}while(temp!=front);
			cout<<"{"<<front->data<<"}";
			cout<<"\n\n\n\n\t\t\t Front : "<<front->data;
			cout<<"\n\n\n\t\t\t Rear : "<<rear->data;
			
			}
		}
			void cqhead()
			{
					system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    ----------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Circular Queue  |\n";
 	cout<<"\t\t\t\t\t\t\t    ----------------------------\n";

			}
			void cqmenu()
			{
				int choice;
	
	while(1)
	{
	system("cls");
	cqhead();
    cout<<"\n\t\tCircular Dynamic queue:- The concept  of Circular dynamic  queue  is  same with  general queue  but  the  difference  is  that,  in  static  queue  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  queue  but  in Circular dynamic  queue  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  queue  we  use  the  concept  of Circular  linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data. The  last  node  of  the  list  contain  the  address  of  first  node.";
    cout<<"\n\n\n\t\t Operations on Circluar Dynamic queue : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic Queue\n";
	cout<<"\n\n\t\t\t2.insert data\n";
	cout<<"\n\n\t\t\t3.delete data\n";
	cout<<"\n\n\t\t\t4.traverse data\n";
	cout<<"\n\n\t\t\t5.Back to MAIN MENU\n\n\n\t\t\tEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
			cqhead();
			cqcreate();
			break;
			
			case 2:system("cls");
			cqhead();
			cqinsert();
			break;
			
			case 3:system("cls");
			cqhead();
			cqdel();
			break;
			
			case 4:system("cls");
			cqhead();
			cqtraverse();
			break;
			
			case 5:front=NULL;return;
			break;
	}
getch();}
			}






			void dqinput()
			{
			   cout<<"\n\n\t\t\t Enter your data :";
			   cin>>x;
			}
			void dqcreate()
			{
				if(frontd!=NULL)
				{
					cout<<"\n\n\t\t\tDynamic Queue is already created...";
				}
				else
				{
					dqinput();
					pd=new(noded);
					pd->data=x;
					pd->next=NULL;
					pd->prev=NULL;
					frontd=pd;
					reard=pd;
					cout<<"\n\n\t\t\tDynamic queue is created and your data is saved successfully.";
				}
			}
			void dqinsert()
			{
				if(frontd==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					dqinput();
					pd=new(noded);
					pd->data=x;
					pd->next=NULL;
					reard->next=pd;
					pd->prev=reard;
					reard=pd;
					cout<<"\n\n\t\t\t Your data is saved successfully";
					
				}
			}
			void dqdel()
			{
				if(frontd==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					if(frontd==reard)
					{
						tempd=frontd;
						cout<<"\n\n\t\t\t Deleted element is :"<<frontd->data;
						frontd=NULL;
						reard=NULL;
						delete(tempd);
						cout<<"\n\n\n\t\t\tQueue is empty";
					}
					else
					{
					
					tempd=frontd;
					cout<<"\n\n\t\t\t Deleted element is :"<<frontd->data;
					frontd=tempd->next;
					frontd->prev=NULL;
					delete(tempd);
				}
				}
			}
			void dqtraverse()
			
			{
				if(frontd==NULL)
				{
						cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
				
				tempd=frontd;
				cout<<"\n\n\t\t\t Your data is\n\n\n\t\t\t";
				cout<<"NULL <-- ";
				
				while(tempd!=NULL)
				
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->next;
			}
			cout<<"NULL";
			cout<<"\n\n\n\t\t\t front :"<<frontd->data;
			cout<<"\n\n\n\t\t\t Rear :"<<reard->data;
			
			}
		}
			void dqrtraverse()
			{
				if(frontd==NULL)
				{
						cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
				
				tempd=reard;
				cout<<"\n\n\t\t\t Your data isn\n\n\n\t\t\t";
				cout<<"NULL <-- ";
				while(tempd!=NULL)
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->prev;
			}
			cout<<"NULL";
			cout<<"\n\n\n\t\t\t Front :"<<frontd->data;
			cout<<"\n\n\n\t\t\t Rear :"<<reard->data;
			
			}
		}
			void dqhead()
			{
									system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    --------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Doubly Queue  |\n";
 	cout<<"\t\t\t\t\t\t\t    --------------------------\n";


			}
			void dqmenu()
			{
				
	int choice;
	
	while(1)
	{
	system("cls");
	dqhead();
    cout<<"\n\t\tDoubly Dynamic queue:- The concept  of Doubly dynamic  queue  is  same with  general queue  but  the  difference  is  that,  in  static  queue  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  queue  but  in Doubly dynamic  queue  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  queue  we  use  the  concept  of Doubly  linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data. ";
    cout<<"\n\n\n\t\t Operations on Doubly Dynamic queue : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic Queue\n";
	cout<<"\n\n\t\t\t2.Insert data\n";
	cout<<"\n\n\t\t\t3.Delete data\n";
	cout<<"\n\n\t\t\t4.Traverse data\n";
	cout<<"\n\n\t\t\t5.Reverse traverse\n";
	cout<<"\n\n\t\t\t6.Back to MAIN MENU\n\n\n\t\t\tEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
	dqhead();
			dqcreate();
			break;
			
			case 2:system("cls");
	dqhead();
			dqinsert();
			break;
			
			case 3:system("cls");
	dqhead();
			dqdel();
			break;
			
			case 4:system("cls");
	dqhead();
			dqtraverse();
			break;
			
			case 5:system("cls");
	dqhead();
	        dqrtraverse();
			break;
			case 6:frontd=NULL;return;
			default :cout<<"\n\n\t\t\t Invalid choice\n\n\n\t\t\t Plese select correct choice";
	}
getch();}
			}


			void cdqinput()
			{
			   cout<<"\n\n\t\t\t Enter your data :";
			   cin>>x;
			}
			void cdqcreate()
			{
				if(frontd!=NULL)
				{
					cout<<"\n\n\t\t\tDynamic Queue is already created...";
				}
				else
				{
					cdqinput();
					pd=new(noded);
					pd->data=x;
					pd->next=pd;
					pd->prev=pd;
					frontd=pd;
					reard=pd;
					cout<<"\n\n\t\t\tDynamic queue is created and your data is saved successfully.";
				}
			}
			void cdqinsert()
			{
				if(frontd==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					cdqinput();
					pd=new(noded);
					pd->data=x;
					pd->next=frontd;
					reard->next=pd;
					pd->prev=reard;
					reard=pd;
					frontd->prev=reard;
					cout<<"\n\n\t\t\t Your data is saved successfully";
					
				}
			}
			void cdqdel()
			{
				if(frontd==NULL)
				{
					cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
					if(frontd==reard)
					{
						tempd=frontd;
						cout<<"\n\n\t\t\t Deleted element is :"<<frontd->data;
						frontd=NULL;
						reard=NULL;
						delete(tempd);
						cout<<"\n\n\n\t\t\tQueue is empty";
					}
					else
					{
					
					tempd=frontd;
					cout<<"\n\n\t\t\t Deleted element is :"<<frontd->data;
					frontd=tempd->next;
					frontd->prev=reard;
					reard->next=frontd;
					delete(tempd);
				}
				}
			}
			void cdqtraverse()
			
			{
				if(frontd==NULL)
				{
						cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
				
				tempd=frontd;
				cout<<"\n\n\t\t\t Your data is\n\n\n\t\t\t";
				cout<<"{"<<reard->data<<"}"<<" <-- ";
				
				
				do
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->next;
			}while(tempd!=frontd);
			cout<<"{"<<frontd->data<<"}";
			cout<<"\n\n\n\t\t\t Front :"<<frontd->data;
			cout<<"\n\n\n\t\t\t Rear :"<<reard->data;
			
			}
		}
			void cdqrtraverse()
			{
				if(frontd==NULL)
				{
						cout<<"\n\n\t\t\t Warning....\n\nfirstly create a dynamic queue";
				}
				else
				{
				
				tempd=reard;
				cout<<"\n\n\t\t\t Your data isn\n\n\n\t\t\t";
				cout<<"{"<<frontd->data<<"}"<<" <-- ";
				do
			{
				cout<<"|"<<tempd->data<<"|--> ";
				tempd=tempd->prev;
			}while(tempd!=reard);
			cout<<"{"<<reard->data<<"}";
			cout<<"\n\n\n\t\t\t Front :"<<frontd->data;
			cout<<"\n\n\n\t\t\t Rear :"<<reard->data;
			
			}
		}
			void cdqhead()
			{
									system("cls");
							SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t ===================================================\n";
	cout<<"\t\t\t\t\t\t|             	   DATA STRUCTURE                   |\n";
	cout<<"\t\t\t\t\t\t|	                                            |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t ===================================================\n";
    cout<<"\t\t\t\t\t\t\t    -----------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t    |  Dynamic Circular Doubly Queue  |\n";
 	cout<<"\t\t\t\t\t\t\t    -----------------------------------\n";


			}
			void cdqmenu()
			{
				
	int choice;
	while(1)
	{
	system("cls");
	cdqhead();
	cout<<"\n\tCircular doubly Dynamic queue:- The concept of Circular doubly dynamic  queue is same with  general queue  but  the difference is that, in static queue  we\n\n\t\t\t\t\t have  limited  space  to  store  data  in  queue  but  in Circular doubly dynamic  queue  we  have  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  data.  In  dynamic  queue  we  use  the  concept  of Circular doubly linked  list  for  dynamic  memory  allocation\n\n\t\t\t\t\t to  store  the  data.";
    cout<<"\n\n\n\t\t Operations on Circluar doubly Dynamic queue : \n\n";
	cout<<"\n\n\t\t\t1.Create a dynamic Queue\n";
	cout<<"\n\n\t\t\t2.Insert data\n";
	cout<<"\n\n\t\t\t3.Delete data\n";
	cout<<"\n\n\t\t\t4.Traverse data\n";
	cout<<"\n\n\t\t\t5.Reverse traverse\n";
	cout<<"\n\n\t\t\t6.Back to MAIN MENU\n\n\n\t\t\tEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:system("cls");
	cdqhead();
			cdqcreate();
			break;
			
			case 2:system("cls");
	cdqhead();
			cdqinsert();
			break;
			
			case 3:system("cls");
	cdqhead();
			cdqdel();
			break;
			
			case 4:system("cls");
	cdqhead();
			cdqtraverse();
			break;
			
			case 5:system("cls");
	cdqhead();
	        cdqrtraverse();
			break;
			case 6:frontd=NULL;return;
			default :cout<<"\n\n\t\t\t Invalid choice\n\n\n\t\t\t Plese select correct choice";
	}
getch();}
			}
void linkedswitch(int ch)
{
	switch(ch)
	{
		case 1:llmenu();
		break;
		case 2:cllmenu();
		break;
		case 3:dllmenu();
		break;
		case 4:cdllmenu();
		break;
		default :cout<<"\n\n\t\t\t Invalid choice..";
	}
}

void stackswitch(int ch)
{
	switch(ch)
	{
		case 2:stkmenu();
		break;
		case 3:cstkmenu();
		break;
		case 4:dstkmenu();
		break;
		case 5:cdstkmenu();
		break;
		default :cout<<"\n\n\t\t\t Invalid choice..";
	}
}

void queueswitch(int ch)
{
	switch(ch)
	{
		case 3:qmenu();
		break;
		case 4:cqmenu();
		break;
		case 5:dqmenu();
		break;
		case 6:cdqmenu();
		break;
		default :cout<<"\n\n\t\t\t Invalid choice..";
	}
}

};


class menuinterface
{
	public :
		void linkedlistint()
		{	cout<<"\n\n\t\t\t\t\t\t\t\t    Linked list";
	cout<<"\n\t\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t\t-----------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t|\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\tSingly Linked list\t\t\t\t\t      Multiple Linked list";
	cout<<"\n\t\t\t\t        |\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t        |-> 1.Simple Linked list\t\t\t\t\t|-> 5.Multiple  Linked list";
	cout<<"\n\t\t\t\t        |\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t        |-> 2.Circular  Linked list\t\t\t\t\t|-> 6.Multiple Circular  Linked list";
	cout<<"\n\t\t\t\t        |\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t        |-> 3.Doubly  Linked list\t\t\t\t\t|-> 7.Multiple Doubly  Linked list";
	cout<<"\n\t\t\t\t        |\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t        |-> 4.Circular doubly  Linked list\t\t\t\t|-> 8.Multiple Circular doubly  Linked list";
		 
		 } 
		void stackint()
		{
	cout<<"\n\n\t\t\t\t\t\t\t\t\t      Stack";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t--------------------------------------------------------|";
	cout<<"\n\t\t\t|\t\t\t\t\t\t\t|";
	cout<<"\n\t\t1.Single static stack\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t|\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\tSingle dynamic stack\t\t\t\t\t\tMultiple dynamic stack";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 2.Dynamic stack\t\t\t\t\t\t |-> 6.Multiple Dynamic stack";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 3.Circular dynamic stack\t\t\t\t\t |-> 7.Multiple Circular dynamic stack";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 4.Doubly dynamic stack\t\t\t\t\t |-> 8.Multiple Doubly dynamic stack";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 5.Circular doubly dynamic stack\t\t\t\t |-> 9.Multiple Circular doubly dynamic stack";
		}
		void queueint()
		{	cout<<"\n\n\t\t\t\t\t\t\t\t\t      Queue";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t\t--------------------------------------------------------|";
	cout<<"\n\t\t\t|\t\t\t\t\t\t\t|";
	cout<<"\n\t\t1.Single static Queue\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t2.Static circular queue\t\t\t\t\t\t|";
	cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t|\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\tSingle dynamic Queue\t\t\t\t\t\t  Multiple dynamic Queue";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 3.Dynamic Queue\t\t\t\t\t\t |-> 7.Multiple Dynamic Queue";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 4.Circular dynamic Queue\t\t\t\t\t |-> 8.Multiple Circular dynamic Queue";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 5.Doubly dynamic Queue\t\t\t\t\t |-> 9.Multiple Doubly dynamic Queue";
	cout<<"\n\t\t\t\t\t        |\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t\t        |-> 6.Circular doubly dynamic Queue\t\t\t\t |-> 10.Multiple Circular doubly dynamic Queue";

		
}
		void searchingint()
		{
	cout<<"\n \n\t\t\t\t\t\t\t\t\t searching";
	cout<<"\n\t\t\t\t\t\t\t\t\t    |";
	cout<<"\n\t\t\t\t\t--------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t     Static\t\t\t\t\t\t\t\t\tDynamic";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 1.Linear search\t\t\t\t\t\t\t |-> 5.Linear search";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 2.Binary search\t\t\t\t\t\t\t |-> 6.Binary search";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 3.Interpollation search\t\t\t\t\t\t |-> 7.Interpollation search";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 4.Jump search\t\t\t\t\t\t\t\t |-> 8.Jump search";

		}
		void sortingint()
		{
	cout<<"\n \n\t\tTypes of sorting :-\t\t\t\t\t Sorting";
	cout<<"\n\t\t\t\t\t\t\t\t\t    |";
	cout<<"\n\t\t\t\t\t--------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t     Static\t\t\t\t\t\t\t\t\tDynamic";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 1.Bubble sort\t\t\t\t\t\t\t\t |-> 10.Bubble sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 2.Insertion sort\t\t\t\t\t\t\t |-> 11.Insertion sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 3.Selection sort\t\t\t\t\t\t\t |-> 12.Selection sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 4.Merge sort\t\t\t\t\t\t\t\t |-> 13.Merge sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 5.Quick sort\t\t\t\t\t\t\t\t |-> 14.Quick sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 6.Radix sort\t\t\t\t\t\t\t\t |-> 15.Radix sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 7.Heap sort\t\t\t\t\t\t\t\t |-> 16.Heap sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 8.Tree sort\t\t\t\t\t\t\t\t |-> 17.Tree sort";
	cout<<"\n\t\t\t\t      |\t\t\t\t\t\t\t\t\t\t |";
	cout<<"\n\t\t\t\t      |-> 9.Pahal sort\t\t\t\t\t\t\t\t |-> 18.Pahal sort";

		}
};

class Array
{
	private :
			int  a[200],b[200],c[200],i,n,sum,m,ch;
	      double mul;
	      	int  p[200][200],q[200][200],r[200][200],j,k,nu;
	      
	      public:
	      	Array()
	      	{
	      	sum=0;
			mul=1;
			  }
			  

			void sporder()
			{
				cout<<"\n\n\t\t Enter the order matrix : ";
			   
				cin>>n>>m;
				
			}
			void sphead()
			{
										SYSTEMTIME d;
                        GetSystemTime(&d);
    system("cls");  
	cout<<"\t\t\t\t\t\t =====================================================\n";
	cout<<"\t\t\t\t\t\t|                     DATA STRUCTURE                  |\n";
	cout<<"\t\t\t\t\t\t|                                                     |\n";
    cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t =====================================================\n";
 	cout<<"\t\t\t\t\t\t\t\t-----------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t|    Sparse Matrix    |\n";
 	cout<<"\t\t\t\t\t\t\t\t-----------------------\n\n";

			}
			void spprint()
			{
				    for(i=0;i<n;i++)
				{cout<<"\t\t";
				for(j=0;j<m;j++)
				{
					cout<<"\t"<<p[i][j];
					
				}
				cout<<"\n"<<endl;
		        }
			}
			
			void spupleft()
			{
				cout<<"\n\n\t\t Enter the elements in the matrix : \n";
				for(i=0;i<n;i++)
				{
				for(j=0;j<m;j++)
				{
					
				if(i+j<=n/2)
				{
				cout<<"\t\t";
				cin>>p[i][j];
				
				}else
				p[i][j]=0;
			    }
		        }
		        cout<<"\n\n\t\t Upper left triangular sparse matrix is :\n\n";
		       spprint();
			}
			
			void spupright()
			{
				cout<<"\n\n\t\t Enter the elements in the matrix : \n";
				for(i=0;i<n;i++)
				{
				for(j=0;j<m;j++)
				{
				if(i<j)
				{
				cout<<"\t\t";
				cin>>p[i][j];
				}else
				p[i][j]=0;
			    }
		        }
		        cout<<"\n\n\t\t Upper right triangular sparse matrix is :\n\n";
		       spprint();
			}
			
			void spleftd()
			{
				cout<<"\n\n\t\t Enter the elements in the matrix : \n";
				for(i=0;i<n;i++)
				{
				for(j=0;j<m;j++)
				{
				if(i+j==n-1)
				{
				cout<<"\t\t";
				cin>>p[i][j];
				}else
				p[i][j]=0;
			    }
		        }
		        cout<<"\n\n\t\t Left diagonal sparse matrix is :\n\n";
		       spprint();
			}
			
			void sprightd()
			{
				cout<<"\n\n\t\t Enter the elements in the matrix : \n";
				for(i=0;i<n;i++)
				{
				for(j=0;j<m;j++)
				{
				if(i==j)
				{
				cout<<"\t\t";
				cin>>p[i][j];
				}else
				p[i][j]=0;
			    }
		        }
		        cout<<"\n\n\t\t Right diagonal sparse matrix is :\n\n";
		       spprint();
			}
			
			void splowleft()
			{
				cout<<"\n\n\t\t Enter the elements in the matrix : \n";
				for(i=0;i<n;i++)
				{
				for(j=0;j<m;j++)
				{
				if(i>j)
				{
				cout<<"\t\t";
				cin>>p[i][j];
				}else
				p[i][j]=0;
			    }
		        }
		        cout<<"\n\n\t\t Lower left triangular sparse matrix is :\n\n";
		       spprint();
			}
			
			void splowright()
			{
				cout<<"\n\n\t\t Enter the elements in the matrix : \n";
				for(i=0;i<n;i++)
				{
				for(j=0;j<m;j++)
				{
				if(i+j>n-1)
				{
				cout<<"\t\t";
				cin>>p[i][j];
				}else
				p[i][j]=0;
			    }
		        }
		        cout<<"\n\n\t\t Lower right triangular sparse matrix is :\n\n";
		       spprint();
			}
			
			void sparmenu()
			{
		
				while(1)
				{
				
               	sphead();
				cout<<"\t\t\t Sparse Matrix :- A  matrix  is  called  sparse  matrix  if  maximum  numbers  of  elements  in  the  matrix  are 0.  In  simple\n\n\t\t\t\t\t  words  we  can  say  that  if  most  of  the  elements  of  the  matrix  have  0 value , then  it  is  called\n\n\t\t\t\t\t  a  sparse  matrix.\n\n";   			
                cout<<"\t\t\t\t\t\t\t\t\t Sparse Matrix\n";
			    cout<<"\t\t\t\t\t\t\t\t\t\t|";
			    cout<<"\n\t\t\t\t\t\t\t\t\t\t|\n";
			    cout<<"\t\t\t-------------------------------------------------------------------------------------------------------------------------";
			    cout<<"\n\t\t\t|\t\t\t\t\t\t\t|\t\t\t\t\t\t\t\t|";
			    cout<<"\n\t\tUpper Triangular\t\t\t\t\t     Diagonal\t\t\t\t\t\t\t Lower Triangular";
			    cout<<"\n\t\t\t|\t\t\t\t\t\t\t|\t\t\t\t\t\t\t\t|";
			    cout<<"\n\t\t\t|\t\t\t\t\t\t\t|\t\t\t\t\t\t\t\t|";
			    cout<<"\n\t  ---------------------------------\t\t\t------------------------------------\t\t\t      ---------------------------------";
			    cout<<"\n\t  |\t\t\t\t  |\t\t\t|\t\t\t\t   |\t\t\t      |\t\t\t\t      |";
			    cout<<"\n      Upper Left\t\t    Upper Right\t\t Left Diagonal\t\t\t   Right Diagonal\t\t Lower Left\t\t\t Lower Right";
			    cout<<"\n\n\n\n\t Implementation of Sparse Matrix :\n\n";
			    cout<<"\n\t 1. Upper Left Triangular Sparse Matrix\t\t\t 2. Left Diagonal Sparse Matrix\t\t\t\t3. Lower Left Triangular Sparse Matrix";
			    cout<<"\n\n\n\t 4. Upper Right Triangular Sparse Matrix\t\t 5. Right Diagonal Sparse Matrix\t\t\t6. Lower Right Triangular Sparse Matrix";
			    cout<<"\n\n\n\t 7. Back to Menu";
				cout<<"\n\n\n\t Enter your choice : ";
			    cin>>ch;
			    switch(ch)
			    {
			    	case 1: system("cls");
			    	sphead();
			    	sporder();
					if(m==n)
			    	{
					spupleft();
			        }
			        else
			        {
			        	cout<<"\n\n\t\t Order of Matrix will be same..";
					}
					break;
			    	case 2: system("cls");
			    	sphead();
			    	sporder();
			    	if(m==n)
			    	spleftd();
			    	else
			    	cout<<"\n\n\t\t Order of Matrix will be same..";
					break;
			    	case 3:system("cls");
			    	sphead();
			    	sporder();
			    	if(m==n)
					splowleft();
					else
					cout<<"\n\n\t\t Order of Matrix will be same..";
					break;
					case 4:system("cls");
			    	sphead();
			    	sporder();
			    	if(m==n)
					spupright();
					else
					cout<<"\n\n\t\t Order of Matrix will be same..";
					break;
					case 5:system("cls");
			    	sphead();
			    	sporder();
					if(m==n)
					sprightd();
					else
					cout<<"\n\n\t\t Order of Matrix will be same..";
					break;
					case 6:system("cls");
			    	sphead();
			    	sporder();
			    	if(m==n)
					splowright();
					else
					cout<<"\n\n\t\t Order of Matrix will be same..";
					break;
					case 7:
					return;
					default :cout<<"\n\n\t\t\tInvalid choice.."; 
				}
		getch();
			}
		}
		  
	void oinput()
		{
			for(i=0;i<n;i++)
			{
				cout<<"\n\t\t Enter the "<<i+1<<" element :";
				cin>>a[i];
			}
		}
		void soinput()
		{
			for(i=0;i<n;i++)
			{
				cout<<"\n\t\t Enter the "<<i+1<<" element :";
				cin>>b[i];
			}
		}
		void oprint()
		{
			cout<<"\n\t\t Stored elements are :-\n";
			for(i=0;i<n;i++)
			cout<<"\n\n\t\t"<<" Element at "<<i+1<<" position :"<<a[i];
		}
		void reverse()
		{
			cout<<"\n\t\t Reverse of array is :-\n";
			for(i=n-1;i>=0;i--)
			cout<<"\n\n\t\t"<<" Element at "<<i+1<<" position :"<<a[i];
		}
		void osume()
		{
			cout<<"\n\t\t";
			for(i=0;i<n;i++)
			{
			sum =sum+a[i];
			cout<<" "<<a[i];
			if(i<n-1)
			cout<<" + ";
		}
			cout<<"\n\n\t\t Sum of all elemets of array = "<<sum;
		}
		void omult()
		{
			cout<<"\n \t\t";
			for(i=0;i<n;i++)
			{
			mul=mul*a[i];
			cout<<" "<<a[i];
			if(i<n-1)
			cout<<" x ";
		}
			cout<<"\n\n\t\t Multiplication of all elemets of array = "<<mul;
		}
		void tmul()
		{
			cout<<"\n\t\t Product of both the array is :\n";
				for(i=0;i<n;i++)
				{
				c[i]=a[i]*b[i];
			    cout<<"\n\n\t\t "<<a[i]<<" x "<<b[i]<<" = "<<c[i];
			    }
		}
		void head ()
		{
						SYSTEMTIME d;
                        GetSystemTime(&d);
    
			 	system("cls");
	cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |   One D Array   |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";

		}
		void tsum()
		{
			    cout<<"\n\t\t Sum of both the array is :\n";
				for(i=0;i<n;i++)
				{
				c[i]=a[i]+b[i];
			    cout<<"\n\n\t\t "<<a[i]<<" + "<<b[i]<<" = "<<c[i];
			    }
		}		  
			  
		void omenu()
		{
	                    int ch;
					 	while(1)
 	{
 	system("cls");
    head();
 	cout<<"\n\n\n";
    cout<<"\t\tOne D Array :-One  dimensional  array  is  linear  data  structure  in  which  elements  are  stored  in  linear  order.\n\n\t\t\t      There  is  no  rows  column  in  one dimensional  array.\n\n\n";
    cout<<"\n\t\tSome  operation  on  One  Dimensional  Array :-\n\n\n";
	cout<<"\t\t\t\t 1.Store and print an array.\t\t";				 	  cout<<"\t\t 2.Sum of all elements.\n\n";
    cout<<"\n\t\t\t\t 3.Multiplication of all elements.\t\t";                           cout<<"\t 4.Sum of two arrays.\n\n";
 	cout<<"\n\t\t\t\t 5.Multiplication of two arrays.\t";                     cout<<"\t\t 6.Reverse of array.\t\n\n";
	 cout<<"\n\t\t\t\t 7.Back to MAIN MENU\n";                           
    cout<<"\n\n\t\t\t\t Enter your choice :";
	cin>>ch;
	switch(ch)
      {
      	case 1:head();
		  cout<<"\n\t\t Enter the total numbers of elements :";
			cin>>n;
		       oinput();
      	       oprint();
      	       break;
      	case 2:head();
		  cout<<"\n\t\t Enter the total numbers of elements :";
			cin>>n;
		  oinput();
      	        osume();
      	        break;
      	case 3:head();
		  cout<<"\n\t\t Enter the total numbers of elements :";
			cin>>n;
		  oinput();
      	        omult();
      	        break;
		case 4:head();
		cout<<"\n\t\t Enter the total numbers of elements :";
			cin>>n;
			cout<<"\n\t\t Enter the total numbers of elements for second array:";
			cin>>m;
			if(m!=n)
			{
				cout<<"\n\t\t Please enter same total numbers of elements, for both array...";
			}
			else
			{
				 cout<<"\n\t\t Enter the elements of first array\n";
				 
		oinput();
		cout<<"\n\t\t Enter the elements for second array\n";
		        soinput();
      	        tsum();
      	        }break;
		case 5:head();
		cout<<"\n\t\t Enter the total numbers of elements :";
			cin>>n;
			cout<<"\n\t\t Enter the total numbers of elements for second array:";
			cin>>m;
			if(m!=n)
			{
				cout<<"\n\t\t Please enter same total numbers of elements, for both array...";
			}
			else
			{
				cout<<"\n\t\t Enter the elements of first array\n";
				 
		oinput();
		cout<<"\n\t\t Enter the elements for second array\n";
		        
		soinput();
      	        tmul();
      	        }break;
	    case 6:head();
		cout<<"\n\t\t Enter the total numbers of elements :";
			cin>>n;
		oinput();
      	        reverse();
      	        break;
		case 7:return;
		break;
		
		default :cout<<"\n\t\t Invalid choice..";		  		  		         	
	    }
		getch();
		}
	    }
		void input()
		{
			nu=1;
			for(i=0;i<n;i++)
			{
			for(j=0;j<m;j++)
			{
			cout<<"\n\n\t\t Enter the "<<nu<<" element :";
			cin>>p[i][j];
			nu++;
		}
		}
		}
		void sinput()
		{
			nu=1;
			for(i=0;i<n;i++)
			{
			for(j=0;j<m;j++)
			{
			cout<<"\n\n\t\t Enter the "<<nu<<" element :";
			cin>>q[i][j];
			nu++;
		}
		}
		}
		void print()
		{
			cout<<"\n\n\t\t Stored matrix is :-\n\n";
			for(i=0;i<n;i++)
			{cout<<"\t\t";
			for(j=0;j<m;j++)
			cout<<p[i][j]<<"\t";
			cout<<endl;
		}
		}
		void sume()
		{
			cout<<"\n\n";
			for(i=0;i<n;i++)
			{cout<<"\t\t";
			for(j=0;j<m;j++)
			{
			r[i][j]=p[i][j]+q[i][j];
			cout<<"   "<<p[i][j]<<" + "<<q[i][j]<<"   ";
		}
		cout<<endl;
	    }
	    cout<<"\n\t\t Sum of the matrix is :-\n\n";
	    for(i=0;i<n;i++)
	    {cout<<"\t\t";
		for(j=0;j<m;j++)
			cout<<"    "<<r[i][j]<<"   ";
			cout<<endl<<endl;
		}
	}
	void mult()
	{
		cout<<"\n\n";
			for(i=0;i<n;i++)
			{cout<<"\t\t";
			for(j=0;j<m;j++)
			{
				for(k=0;k<m;k++)
				{
		     sum=sum+p[i][k]*q[k][j];
		     cout<<p[i][k]<<" x "<<q[k][j];
		     if(k<m-1)
		     cout<<" + ";
		    		}
		r[i][j]=sum;
		sum=0;
		cout<<"\t";
	    }
	    cout<<"\n\n";
	}
	    cout<<"\n\t\t Multiplication of the matrix is :-\n\n";
	    for(i=0;i<n;i++)
	    {cout<<"\t\t";
		for(j=0;j<m;j++)
			cout<<r[i][j]<<"\t";
			cout<<endl<<endl;
		}
	}
	void transpose()
	{
		cout<<"\n\n\t\tTranspose of the matrix is :-\n\n";
		for(i=0;i<n;i++)
	    {cout<<"\t\t";
	    	
		for(j=0;j<m;j++)
			cout<<p[j][i]<<"\t";
			cout<<endl<<endl;
		}
	}
	void sumdiagonal()
	{
		r[0][0]=0;
		r[1][1]=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==j)
				r[0][0]=r[0][0]+p[i][j];
				if(i+j==m-1)
				r[1][1]=r[1][1]+p[i][j];
			}
		}
		cout<<"\n\n\t\t Sum of right diagonal = "<<r[0][0];
		cout<<"\n\n\t\t Sum of left diagonal = "<<r[1][1];
		
	}
	void order()
	{
		cout<<"\n\t\t Enter the order of matrix :";
			cin>>n;
			cout<<" x ";
			cin>>m;
	}
	void sumrows()
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
	        sum=sum+p[i][j]; 
		    }
			cout<<"\n\n\t\t Sum of "<<i+1<<" row = "<<sum;    
		    sum=0;
		}
		
	}
	void head2()
	{
					SYSTEMTIME d;
                        GetSystemTime(&d);
    system("cls");    
    cout<<"\n\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|             	DATA STRUCTURE                          |\n";
	cout<<"\t\t\t\t\t\t|	                                                |\n";
	cout<<"Date:-"<<d.wDay<<"/"<<d.wMonth<<"/"<<d.wYear;
 	cout<<"\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |   Two D Array   |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
	}
	void sumcolm()
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
	        sum=sum+p[j][i]; 
		    }
			cout<<"\n\n\t\t Sum of "<<i+1<<" column = "<<sum;
			sum=0;    
		}
	}
	             
	              void menu()
            		{
				SYSTEMTIME d;
                        GetSystemTime(&d);
                        int ch;
					 	while(1)
 	{
 	system("cls");
	head2();
    cout<<"\n\n";
 	cout<<"\t\tTwo D Array :- A  two  dimensional  array  is  specified  using  two  subscripts  where  the  first  subscript  denotes  the  row\n\n\t\t\t\tand  the  second  denotes  the  column. We  needs  to  store  data  in  the  form  of  grids or tables.\n\n\n";
    cout<<"\n\t\tSome  operation  on  Two  Dimensional  Array :-\n\n\n\n";
	cout<<"\t\t\t\t 1.Store and print an array in the form of matrix.\t";	cout<<" 2.Transpose of matrix.\n\n";
    cout<<"\n\t\t\t\t 3.Sum of two matrix.\t\t";                           cout<<"\t\t\t 4.Multiplication of two matrix.\n\n";
 	cout<<"\n\t\t\t\t 5.Spars matrix.\t\t";                                cout<<"\t\t\t 6.Sum of diagonals of matrix.\t\n\n";
	cout<<"\n\t\t\t\t 7.Sum of all rows of matrix.\t";                     cout<<"\t\t\t 8.Sum of all column of matrix.\t\n\n";
	cout<<"\n\t\t\t\t 9.Sum of all rows ,column and diagonal .\t";          cout<<"\t 10.Back to MAIN MENU.\t\n\n";
    cout<<"\n\n\n\t\t\t\t Enter your choice :";
	cin>>ch;
	switch(ch)
      {
      	case 1:head2();
		  order();
		       input();
      	       print();
      	       break;
      	case 2:head2();
		  order();
		  input();
		  print();
      	        transpose();
      	        break;
      	case 3:head2();
		  order();
			if(m!=n)
			{
				cout<<"\n\t\t Please enter same order, for both array...";
			}
			else
			{
				 cout<<"\n\t\t Enter the elements of first array";
				 
		input();
		cout<<"\n\t\t Enter the elements of second array";
		sinput();
		    sume();
      	        
      	        }
		  
      	        break;
		case 4:head2();
		order();
			if(m!=n)
			{
				cout<<"\n\t\t Please enter same order, for both array...";
			}
			else
			{
				 cout<<"\n\t\t Enter the elements of first array";
				 
		input();
		cout<<"\n\t\t Enter the elements of second array";
		sinput();
		    mult();
      	        
      	        }break;
		case 5:system("cls");
	     sparmenu();
		break;
	    case 6:head2();
		order();
		input();
		print();
      	sumdiagonal();        
      	        break;
      	        case 7:head2();
				  order();
		input();
		print();
      	sumrows();        
      	        break;
      	        case 8:head2();
				  order();
		input();
		print();
      	sumcolm();        
      	        break;
      	        case 9:head2();
				  order();
		input();
		print();
      	sumrows(); 
		  sumcolm();
		  sumdiagonal();       
      	        break;
		case 10:return;
		default :cout<<"\n\t\t Invalid choice..";		  		  		         	
	  }
		getch();
		}
	}
	
	
	void arrayswitch(int sel)
	{
		switch(sel)
		{
			case 1: omenu();
			break;
			case 2: menu();
			break;
			default :cout<<"\n\n\t\t Invalid choice";
		}
	}
	

};


void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int main()
{
	int i,ch;
	menuinterface o;
	ststack sts;
	Array a;
	singlinked l;
multiplelinked ml;	
	search sc;
stcirqueue ctq;
	dsearch dc;
sorting s;
stqueue stq;
dsorting dt;
system("cls");
gotoxy(75,10);

cout<<"\n\t\t=====================================================================================================================================";
cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t\t\t                                    |";
cout<<"\n\t\t|\t\t\t\t\t\t\t W E L C O M E     T O\t\t                                            |";
for(i=0;i<3;i++)
cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t\t\t                                    |";
cout<<"\n\t\t|  0 0 0     0 0 0 0  0 0 0 0 0  0 0 0 0      0 0 0  0 0 0 0 0   0 0 0 0   0     0   0 0 0   0 0 0 0 0  0     0   0 0 0 0   0 0 0   |";
cout<<"\n\t\t|  0     0   0     0      0      0     0      0          0       0     0   0     0   0           0      0     0   0     0   0       |";
cout<<"\n\t\t|  0     0   0 0 0 0      0      0 0 0 0      0 0 0      0       0 0 0 0   0     0   0           0      0     0   0 0 0 0   0 0     |";
cout<<"\n\t\t|  0     0   0     0      0      0     0          0      0       0  0      0     0   0           0      0     0   0  0      0       |";
cout<<"\n\t\t|  0 0 0     0     0      0      0     0      0 0 0      0       0    0    0 0 0 0   0 0 0       0      0 0 0 0   0    0    0 0 0   |";
for(i=0;i<4;i++)
cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t\t\t                                    |";
cout<<"\n\t\t=====================================================================================================================================";
    
for (i=0;i<3;i++)

cout<<"\n";
for (i=0;i<29;i++)
cout<<"\t";
cout<<"         Press any key to continue.....";
	getch();
	
	while(1)
	{
	labelm:
system("cls");
system("color f");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
cout<<"\t\t\t\t\t\t\t\t  ----------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |     MAIN MENU      |\n";
 	cout<<"\t\t\t\t\t\t\t\t  ----------------------\n";

cout<<"\n\t\t DATA STRUCTURE :- Data  structure  is  a  crucial  part  of  data  management.  A  data  structure  is  basically  a  group  of  data\n\n\t\t\t\t   elements  that  are  put  together  under  one  name,  and  which  define  a  particular  way  of  storing  and  organizing\n\n\t\t\t\t   data  in  computer  so  that  it  can  be  used  efficiently.";
cout<<"\n\n\t\t\t\t   Data  structure  are  widely  applied  in  the  following  areas :-";
cout<<"\n\n\t\t\t\t   * Compiler design \t\t\t\t * Operating system";
cout<<"\n\n\t\t\t\t   * Statistical analysis package \t\t * DBMS";
cout<<"\n\n\t\t\t\t   * Numerical analysis \t\t\t * Simulation";
cout<<"\n\n\t\t\t\t   * Artificial intelligence \t\t\t * Graphics";
cout<<"\n\n\n\t\tSome  types  of  data  structure :-";
cout<<"\n\n\n\t\t\t\t 1. Array \t\t 2. Linked list \t\t 3. Stack \t\t 4. Queue";
cout<<"\n\n\n\t\tTechniques  for  sorting  and  searching :-";
cout<<"\n\n\n\t\t\t\t 5. Searching \t\t\t 6. Sorting";
cout<<"\n\n\n\t\t\t\t 7. Exit";
cout<<"\n\n\t\tEnter  your  choice : ";
cin>>i;
switch(i)
{
	case 1:system("cls");
	label1:
	system("cls");
	//system("color a");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |      ARRAY      |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n\n";
    cout<<"\t\tArray :- An  array  is  a  collection  of  similar  data  elements.  These  data  elements  have  the  same  data  type.  The  elements\n\n\t\t\t of  array  are  stored  in  consecutive  memory  location  and  are  referenced  by  an  index (also  known  as  the  subscript).\n\n\t\t\t The  subscript  is  an  ordinal  number  which  is  used  to  identify  an  element of  the  array.";
    cout<<"\n\n\t\tExample :-\n";
    cout<<"\t\t\t\t\t\t==============================================================";
    cout<<"\n\t\t\t\t\t\t| 24  | 36  | 67  | 88  | 98  | 54  | 90  | 19  |  82  | 65  |";
    cout<<"\n\t\t\t\t\t\t==============================================================";
    cout<<"\n\t\t\t\t\t\ta[0]   a[1]  a[2]  a[3]  a[4]  a[5]  a[6]  a[7]  a[8]   a[9]     <---- Indexing";
    cout<<"\n\n\n\t\t\tHere  'a'  is  the  name  of  array  and  a[0] , a[1] , a[2].........a[9] are  the  indexing  of array. The  size of  the  array  is  10.";
    cout<<"\n\n\n\t\tTypes of array :-\n\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t Array"; 
    cout<<"\n\t\t\t\t\t\t\t\t\t   |";
    cout<<"\n\t\t\t\t\t=============================================================================";
    cout<<"\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t    |";
    cout<<"\n\t\t\t\t1. One Dimensional Array\t\t\t\t\t\t2. Two Dimensional Array";
    cout<<"\n\n\n\t\t\t\t3. Back to MAIN MENU";
	cout<<"\n\n\n\t\tEnter your choice : ";
    cin>>ch;
    if(ch==3)
    goto labelm;
    else
	a.arrayswitch(ch);
    break;
    case 2:
	label2:
	system("cls");
	//system("color b");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |   LINKED LIST   |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
    cout<<"\n\t\t Linked list :- A  linked  list  is  a  linear  collection  of  data  elements. These  data  elements  are  called  nodes. It  is  linear\n\n\t\t\t\tdynamic  data  structure  in  which memory for  elements is  allocated & deallocated  at run  time  as  per user  requirement.\n\n\t\t\t\tEach  node  of  linked  list  is  link  with  its  next  node  by  pointers.\n\n\t\tNode -> | data |address of next node|";
    cout<<"\n\n\t\tExample :-\n";
    cout<<"\t\t\t\t\t|35|2000|---->|44|4000|---->|89|6000|---->|98|8000|---->|43|NULL|";
    cout<<"\n\n\t\t\t\t\t  1000\t\t2000\t      4000\t    6000\t  8000  <----Address of nodes";
    cout<<"\n\n\t\tTypes of linked list :-";
    o.linkedlistint();
    cout<<"\n\n\t\t 9.Back to MAIN MENU ";
    cout<<"\n\n\t\t Enter your choice : ";
    cin>>i;
    if(i==9)
    goto labelm;
    if(i<=4)
    l.linkedswitch(i);
    else
    ml.mlinkedswitch(i);
    break;
    case 3:
	label3:
	 system("cls");
	//system("color d");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |      STACK\t    |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
    cout<<"\n\t\t Stack :- Stack  is  a  linear  homogenius  data  structure  which  works  on  the  principle  of LIFO (Last-In-First-Out). The  element\n\n\t\t\t  which  insert  at  last  will  be  the  first  element  to  be  deleted  from  the  stack. The  element  in  a  stack  are \n\n\t\t\t  added & removed  only  from  one  end,  which is  called the TOP.";
    cout<<"\n\n\t\t Example :- A  stack  supports  three  basic  operations  on  element: PUSH(Insertion) , POP(Deletion) , PEEK (Show top element).\n";
    cout<<"\n  =====================\t\t\t      =====================\t\t\t  =====================\t\t\t      =====================";
    cout<<"\n  | 23 | 45 | 77 |    | --Push an element-->  | 23 | 45 | 77 | 98 |  --Pop an element-->  | 23 | 45 | 77 |    |  --Pop an element-->  | 23 | 45 |    |    |";
    cout<<"\n  =====================\t\t\t      =====================\t\t\t  =====================\t\t\t      =====================";
    cout<<"\n      Top = 77\t\t\t\t\t    Top = 98\t\t\t\t\tTop = 77\t\t\t\t     Top = 45";
    o.stackint();
    cout<<"\n\n\t\t 10.Back to MAIN MENU ";
    cout<<"\n\n\t\t Enter your choice : ";
    cin>>i;
    if(i==10)
    goto labelm;
	if(i==1)
	{
		sts.ststkmenu();
	}else if(i<=5)
	{
		l.stackswitch(i);
	}
	else
	{
       ml.mstackswitch(i);		
	}
    break;
    case 4:
	label4:
	 system("cls");
//system("color e");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |      QUEUE\t    |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
    cout<<"\n\t\tQueue :- Queue  is  a  linear  homogineus  data  structure  which  works  on  the  principle  of  FIFO(First-In-First-Out ). To  identify\n\n\t\t\t the location  of  first  element  of  queue  , a variable  called  'Front' is  used  and  to  identify  the  location  of  last\n\n\t\t\t element  of  queue  a  variable  called  'Rear'  is used.";
    cout<<"\n\n\t\t Example :- Front(Frnt) = shows first element of the queue and Rear(Rer) = shows the last element of the queue.\n";
    cout<<"\n  =====================\t\t\t        =====================\t\t\t      =====================\t\t\t     =====================";
    cout<<"\n  | 23 | 45 | 77 |    | --Insert an element-->  | 23 | 45 | 77 | 98 |  --Delete an element--> |    | 45 | 77 | 98 |  --Delete an element-->  |    |    | 77 | 98 |";
    cout<<"\n  =====================\t\t\t        =====================\t\t\t      =====================\t\t\t     =====================";
    cout<<"\n   Frnt = 23,Rer = 77\t\t\t\t Frnt = 23,Rer = 98\t\t\t\tFrnt = 45,Rer = 98\t\t\t      Frnt = 77,Rer = 98";
    o.queueint();
    cout<<"\n\n\t\t 11.Back to MAIN MENU ";
    cout<<"\n\n\t\t Enter your choice : ";
    cin>>i;
    if(i==11)
    goto labelm;
    if(i==1||i==2)
	{
		if(i==1)
		stq.stqmenu();
		else
		ctq.stqmenu();
	}else if(i<=6)
	{
		l.queueswitch(i);
	}
	else
	{
    ml.mqueueswitch(i);		
	}
    break;
    case 5:
	label5:
	 system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |    SEARCHING    |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
    cout<<"\n\t\tSearching :- Searching  means  to  find   whether  a  particular  value  is  not  present  in  an  array  or  not. If  the  value  is  present\n\n\t\t\t     in  the  array  ,then  the  searching  is  said  to  be  successfull.  And  if  the  value  is  not  present  in  the  array  , the\n\n\t\t\t     searching  process  display  an  appropriate  message  and  in  the  case  searching  is  said  to  be unsuccessfull.";
    cout<<"\n\n\t\tTypes of Searching :- ";
    o.searchingint();
    cout<<"\n\n\t\t 9.Back to MAIN MENU ";
    cout<<"\n\n\t\t Enter your choice : ";
     cin>>i;
     if(i==9)
     goto labelm;
    	if(i<=4)
	sc.serchswitch(i);
	else
	dc.dserchswitch(i);
    break;
    case 6:
	label6:
	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
 	cout<<"\t\t\t\t\t\t\t\t  |     SORTING     |\n";
 	cout<<"\t\t\t\t\t\t\t\t  -------------------\n";
    cout<<"\t\t Sorting :- Sorting  means  arranging  the  elements  of  an  array  so  that  they  are  replaced  in  some  relavant  order  which  may\n\t\t\t    be  either  ascending  or  descending.";
    cout<<"\n\n\t\tExample :- Let  we  have  an  array , in  which  have  5  elemnts. so:";
    cout<<"\n\n\t\t\t    ===============================\t\t\t\t===============================";
    cout<<"\n\tUnsorted array ->   | 24  | 36  | 12  | 88  | 18  | \t Sorted array ->  \t| 12  | 18  | 24  | 36  | 88  |";
    cout<<"\n\t\t\t    ===============================\t\t\t\t===============================";
    o.sortingint();
    cout<<"\n\n\t\t 19.Back to MAIN MENU ";
    
    cout<<"\n\n\t\t Enter your choice : ";
    cin>>i;
    if(i==19)
    goto labelm;
    if(i<=9)
	s.sortswitch(i);
	else
	{
		dt.dsortswitch(i);
	}
    break;

	case 7:
	labelex:
	 system("cls");
	char y;
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t      Are You Sure To Want Exit ?";
	cout<<"\n\n\n \t\t\t\t\t\t\t\t\tPress Y or N : ";
	cin>>y;
	if(y=='Y'||y=='y')
	{
	system("cls");
	cout<<"\t\t\t\t\t\t =======================================================\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t|               \xb2\xb2\tDATA STRUCTURE        \xb2\xb2 \t|\n";
	cout<<"\t\t\t\t\t\t|                                                       |\n";
 	cout<<"\t\t\t\t\t\t =======================================================\n";
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  Thank You....\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t BY GOURAV SHRINIVAS ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t THANKS TO AKsoft.\n\n";
      getch();
	exit(0);
    }
	break;
    default :cout<<"\n\t\t\t\t\t\t\t\t\t Invalid choice...";
    getch();
}
}
getch();
}
