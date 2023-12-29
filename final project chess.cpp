#include<iostream>
#include<stdlib.h>
using namespace std;
class chess
{ 
 private:
 
	char matrix[8][8];
	char WHITE[9]="R""N""B""Q""K""B""N""R";
    char white[9]="P""P""P""P""P""P""P""P";
    char BLACK[9]="r""n""b""q""k""b""n""r";
    char black[9]="p""p""p""p""p""p""p""p";
    char c[9]=" "" "" "" "" "" "" "" ";
    int m,n,p,q,z;
    static int d;
	public:
		void play(int);
	void board_setting();
	 void display();
	 void move();
	 void white_process();
	 void black_process();
	 void white_pawn();
	 void white_knight();
	 void white_bishop();
	 void white_queen();
	 void white_king();
	 void white_rook();
	 bool checking();
	 bool black_checking();
	 bool white_checking();
	 void black_pawn();
	void black_knight();
	 void black_queen();
	 void black_king();
	 void black_rook();
	 void black_bishop();
	 bool matching(int a,int b);
	 
};


int chess::d=0;
bool chess::matching(int a,int b)
{   for(int i=0;i<9;i++)
{
	if((matrix[a][b]==WHITE[i])||(matrix[a][b]==white[i]))
	{return(true);
	}
	else{
		if((matrix[a][b]==BLACK[i])||(matrix[a][b]==black[i]))
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}
}
void chess::black_king()
{

if(p==m||p==(m+1))
{
	if(checking()&&black_checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{cout<<"invalid move \n";
	d=1;
	}
}
else{
 if(p==(m-1))
{
	
	if(checking()&&black_checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{cout<<"invalid move \n";
	d=1;
	}
}
else
{
	cout<<"invalid move \n";
	d=1;
}
}}


void chess::black_knight()
{
	if(black_checking())
{

	if(p==(m+2)&&q==(n+1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
	if(p==(m+2)&&q==(n-1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else {
		if(p==(m-2)&&q==(n+1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else{
		if(p==(m-2)&&q==(n-1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
			if(p==(m+1)&&q==(n+2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else{
			if(p==(m-1)&&q==(n+2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
			if(p==(m+1)&&q==(n-2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
			if(p==(m-1)&&q==(n+2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
		cout<<"invalid move \n";
		d=1;
	}
	}}}}}}}
}
else
{
	cout<<"invalid move \n";
	d=1;
}
}
void chess::black_queen()
{
	if(checking()&&black_checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
		cout<<"invalid move\n";
		d=1;
	}
}
void chess::black_bishop()
{    if(p!=m&&q!=n)
{

	if(checking()&&black_checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
		cout<<"invalid move \n";
		d=1;
	}
}
else
{
	cout<<"invalid move \n";
	d=1;
}
}
bool chess::black_checking()
{
		for(int x=0;x<9;x++)
{  
	if((matrix[p][q]==BLACK[x])||(matrix[p][q]==black[x]))
	{     
		return(false);
	}
	else
	{  if(x==7)
	{
	
		return(true);
	}
	}}
}
void chess::black_rook()
{
	if(checking()&&black_checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else 
	{    d=1;
		cout<<"invalid move \n";
	}
}
void chess::black_pawn()
{ if(p==0&&m==1)
{ int chose;
	cout<<"1.ROOK\n";
	cout<<"2.knight\n";
	cout<<"3.bishop \n";
	cout<<"enter your choice=\n";
	cin>>chose;
	switch(chose)
	{
		case 1:
			matrix[p][q]=BLACK[0];
			matrix[m][n]=c[1];
			break;
		case 2:
			matrix[p][q]=BLACK[1];
			matrix[m][n]=c[1];
			break;
		case 3:
			matrix[p][q]=BLACK[2];
			matrix[m][n]=c[1];
			break;
		default:
			cout<<"invalid move \n";
			d=1;
			break;
	}
}
else
{

	
	if(p==(m-1)&&q==n)
	{    if(matching(p,q))
	{
	cout<<"invalid move \n";
	d=1;
	
	}else
	{
	
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}}
	else{
		if(m==6)
		{ if(p==(m-2)&&q==n)
		if(matching(p,q))
		{cout<<"invalid move \n";
		d=1;}
		else{
		
			matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
		}
		else{
			cout<<"invalid move \n";
			d=1;
		}
			
		}
		else{
			if(p==(m-1)&&(q==(n+1)||q==(n-1)))
			{
			
			if(!black_checking())
			{   
			
			cout<<"invalid move"<<endl;
			d=1;
			}
			else
			{
					matrix[p][q]=matrix[m][n];
		        matrix[m][n]=c[1];
			}}
			
			
			else
			{
				cout<<"invalid move\n";
				d=1;
			}
		}
	}}
	
}
void chess::black_process()
{  z=1;
		if(matrix[m][n]==black[1])
	{
		black_pawn();
	}
else{
	if(matrix[m][n]==BLACK[1])
	{
		black_knight();
	}
else{
	if(matrix[m][n]==BLACK[0])
	{
		black_rook();
	}
else{
	if(matrix[m][n]==BLACK[3])
	{
	   black_queen();
	}
else{
	if(matrix[m][n]==BLACK[4])
	{
		black_king();
	}
else{
	if(matrix[m][n]==BLACK[2])
	{    
		black_bishop();
	}
	else
	{cout<<"invalid nove";
	d=1;
	}}}}}}

}
bool chess::white_checking()
{  
	for(int x=0;x<9;x++)
{  
	if((matrix[p][q]==WHITE[x])||(matrix[p][q]==white[x]))
	{
		return(false);
	}
	else
	{  if(x==7)
	{
	
		return(true);
	}
	}
}
}
void chess::white_knight()
{if(white_checking())
{

	if(p==(m+2)&&q==(n+1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
	if(p==(m+2)&&q==(n-1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else {
		if(p==(m-2)&&q==(n+1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else{
		if(p==(m-2)&&q==(n-1))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
			if(p==(m+1)&&q==(n+2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else{
			if(p==(m-1)&&q==(n+2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
			if(p==(m+1)&&q==(n-2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
			if(p==(m-1)&&q==(n+2))
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{
		cout<<"invalid move \n";
		d=1;
	}
	}}}}}}}
}
else
{
	cout<<"invalid move \n";
	d=1;
}
}
bool chess::checking()
{ 

if((m==p)||(n==q))
{
      if((m<p)&&(n==q)){
	  
	for(int x=(m+1);x<=p;x++)
	{  
		if((p==x)&&(q==n))
		{
			return(true);
		}
		if(x<p)		
{

	   if(matching(x,n))
	   {
	   	return(false);
	   }}
		}}
		if((n<q)&&(m==p))
		{
		
	for(int x=(n+1);x<=q;x++)
	{
		if((p==m)&&(x==q))
		{
			return(true);
		}if(x<q){
		
		if(matching(m,x))
		{
		return(false);
		}}
	}}
	if((m>p)&&(n==q))
	{
	
		for(int x=(m-1);x>=p;x--)
	{ 
		if((p==x)&&(q==n))
		{
			return(true);
		}
		if(x>p){
		
	if(matching(x,n))
	{
	return(false);
	}}
		}}
		if((n>q)&&(m==p))
		{
		
	for(int x=(n-1);x>=0;x--)
	{
		if((p==m)&&(x==q))
		{
			return(true);
		}if(x>q){
		
		if(matching(m,x))
		{
			return(false);
		}}
	}}}
else{cout<<"hello 3";
	if(((m>p)||(m<p)))
	{ cout<<"hello 4";
	int x,y;
	x=m;
	y=n;

	if((p>x)&&(q>y))
	{cout<<"hello 5";
	
	while((x<=p)&&(y<=n))
	{ if((x==p)&&(y==n))
	{return(true);
	}
	++x;
	++y;
	if((x<p)&&(y<q)){

	if(matching(x,y))
	{return(false);
		}}	
	}}
else{
	if((p>x)&&(q<n))
	{   cout<<"hello1";
	while((x<=p)&&(y>=q))
	{
		if((x==p)&&(y==q))
		{
			return(true);
		}
		++x;
		--y;
		if((x<p)&&(y>q)){
		
			if(matching(x,y))
	{return(false);
	}}
		
	}}
else{
	if((p<x)&&(q>y))
	{cout<<"hello 6";
	while((x>=p)&&(y<=q))
	{
		if((x==p)&&(y==q))
		{return(true);
		}
		--x;
		++y;
		if((x>p)&&(y<q)){
		
			if(matching(x,y))
	{return(false);
		}}	
	}}
else{
	if((p<x)&&(q<y))
	{
		while((x>=p)&&(y>=q))
		{
			if((x==p)&&(y==q))
			{return(true);
			}
			--x;
			--y;
			if((x>p)&&(y>q)){
			
				if(matching(x,y))
	{return(false);
		}}
	}
}
else
{  
	return(false);
}}}}
}}}
void chess::white_king()
{
if(p==m||p==(m+1))
{
	if(checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{cout<<"invalid move \n";
	d=1;
	}
}
else{
 if(p==(m-1))
{
	
	if(checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}
	else
	{cout<<"invalid move \n";
	d=1;
	}
}
else
{
	cout<<"invalid move \n";
	d=1;
}
}}
void chess::white_queen()
{
if(checking()&&white_checking())
{
	matrix[p][q]=matrix[m][n];
	matrix[m][n]=c[1];
}
else
{
	cout<<"invalid move /n";
	d=1;
}
	
}
void chess::white_bishop()
{
 if(p!=m&&q!=n)
{
cout<<"hello \n";
if(checking())
{
	matrix[p][q]=matrix[m][n];
	matrix[m][n]=c[1];
}}
else
{
	cout<<"invalid move \n";
	d=1;
}

}
void chess::white_rook()
{ 
	if(checking()&&white_checking())
	{
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}

else
{
	cout<<"invalid move \n";
	d=1;
}
}
void chess::white_pawn()
{   if(p==7&&m==6)
{int chose;
	cout<<"1.ROOK\n";
	cout<<"2.knight\n";
	cout<<"3.bishop\n";
	cout<<"enter your choice=\n";
	cin>>chose;
	switch(chose)
	{
		case 1:
			{
			
			matrix[p][q]=WHITE[0];
			matrix[m][n]=c[1];
			break;
		}
		case 2:
			{
			matrix[p][q]=WHITE[1];
			matrix[m][n]=c[1];
			break;
		}
		case 3:
			{
			matrix[p][q]=WHITE[2];
			matrix[m][n]=c[1];
			break;
		}
		default:
			cout<<"invalid move \n";
			d=1;
			break;
	}
}

	
else{

	if(p==(m+1)&&q==n)
	{    if(matching(p,q))
	{
	cout<<"invalid move \n";
	d=1;
	
	}else
	{
	
		matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
	}}
	else{
		if(m==1)
		{ if(p==(m+2)&&q==n)
		if(matching(p,q))
		{cout<<"invalid move \n";
		d=1;}
		else{
		
			matrix[p][q]=matrix[m][n];
		matrix[m][n]=c[1];
		}
		else{
			cout<<"invalid move \n";
			d=1;
		}
			
		}
		else{
			if(p==(m+1)&&(q==(n+1)||q==(n-1)))
			{
			if(!white_checking())
			{   
			
			cout<<"invalid move"<<endl;
			d=1;
		}
			else
			{
					matrix[p][q]=matrix[m][n];
		        matrix[m][n]=c[1];
			}}
			else {
			cout<<"invalid move\n";
			d=1;
			}}
		
		}
	}}
	

void chess::white_process()
{   z=0;   
	
	if(matrix[m][n]==white[1])
	{  
		white_pawn();
	}
else{
	if(matrix[m][n]==WHITE[1])
	{
		white_knight();
	}
else{
	if(matrix[m][n]==WHITE[0])
	{
		white_rook();
	}
else{
	if(matrix[m][n]==WHITE[3])
	{
		white_queen();
	}
else {
	if(matrix[m][n]==WHITE[4])
	{
		white_king();
	}
else{
	if(matrix[m][n]==WHITE[2])
	{    
		white_bishop();
	}
	else
	{
		cout<<"invalid move ";
		d=1;
	}}}}}}

}
void chess::move()
{int chose1;
	if(z !=0)
{   

	cout<<"WHITE ROUND:\n";
	cout<<"1.continue:"<<endl;
	cout<<"2.restart:"<<endl;
	cout<<"3.exit:"<<endl;
	cout<<"chose=";
	cin>>chose1;
	switch(chose1)
	{
		case 1:
	try{
		
	cout<<" initial position="<<endl;
	cout<<"i=";
	cin>>m;
	cout<<"j=";
	cin>>n;
	cout<<"final position="<<endl;
	cout<<"i=";
	cin>>p;
	cout<<"j=";
	cin>>q;
		white_process();
		if(d!=0)
		{throw(1);
		}
}
catch(int b)
{d=0;
z=1;
display();
}
		break;
		case 2:
			{
			
		int ch=1;
		chess *ptr=new chess;
		ptr->board_setting();
		ptr->play(ch);
		delete(ptr);
		break;
	}
		case 3:
		exit(0);
		break;
		default:
		cout<<"invalid input\n";	
	}
	
	



}
else
{  	
	cout<<"BLACK ROUND:\n";
	cout<<"1.continue:"<<endl;
	cout<<"2.restart:"<<endl;
	cout<<"3.exit:"<<endl;
	cout<<"chose=";
	cin>>chose1;
	switch(chose1)
	{
		case 1:
			try{
			
				cout<<" initial position="<<endl;
	cout<<"i=";
	cin>>m;
	cout<<"j=";
	cin>>n;
	cout<<"final position="<<endl;
	cout<<"i=";
	cin>>p;
	cout<<"j=";
	cin>>q;
			black_process();
			if(d!=0)
			{
				throw(1);
			}
		}
		catch(int a)
		{
			z=0;
			d=0;
			display();
		}
		break;
		case 2:
			{
			int ch=1;
			chess *ptr=new chess;
		ptr->board_setting();
		ptr->play(ch);
		delete(ptr);
		break;
	}
		case 3:
		exit(0);
		break;
		default:
		cout<<"invalid input\n";	
	}
	


}}

void chess::display()
{
for(int i=0;i<8;i++)
{
		if(i==0)
	{cout<<endl;
		for(int k=0;k<8;k++)
		{
		
		cout<<"  "<<k;
	}
	cout<<endl;
	}
	for(int j=0;j<8;j++)
	{  if(j==0)
	{
		cout<<i;
	}
		cout<<"["<<matrix[i][j]<<"]";
	
	
	}

	cout<<endl;
	}
move();
	
}
void chess::board_setting()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{    if(i==0)
		{
		
			matrix[i][j]=WHITE[j];
    	}
    	else{
    		
    		if(i==1)
    		{
    			matrix[i][j]=white[j];
			}
			else
			{
				if(i==6)
				{
					matrix[i][j]=black[j];
				}
				else{
					if(i==7)
					{
						matrix[i][j]=BLACK[j];
					}
				else
				{
					matrix[i][j]=c[j];
				}
				}
			}
		}
		}
	}
	
}
void chess::play(int chose)
{  
   while(1)
   {
   switch(chose)
   {
   
     case 1:	    
	   display();
	   break;
	case 2:
		exit(0);
		break;
	default:
		cout<<"invalid input \n";
		break;
}
	}
}

int main()
{
	
	chess user;
	user.board_setting();
	cout<<"  ******   PROJECT  ****** \n"<<endl;
	cout<<"   ******  CHESS  ******\n"<<endl;
	cout<<"project member:"<<endl;
	cout<<"Sundar gelal"<<endl;
	cout<<"Jeevan ayer"<<endl;
	cout<<"Abhinash kumar jha"<<endl;
	cout<<"Pankaj kumar sah"<<endl;
	cout<<"Nabin kumar poudel"<<endl;
	cout<<"Rajesh kumar mahato\n"<<endl;
	cout<<"***************************************************************************************************"<<endl<<endl;
	cout<<"GAME INFORMATION \n \n";
	cout<<"Knight=N"<<endl;
	cout<<"Rook=R"<<endl;
	cout<<"Pawn=P"<<endl;
	cout<<"KING=K"<<endl;
	cout<<"Bishop=B"<<endl;
	cout<<"Queen=Q"<<endl;
	cout<<endl;
	cout<<"WHITE=capital latter"<<endl;
	cout<<"BLACK=small latter"<<endl;
	cout<<endl;
	cout<<"1.play\n";
	cout<<"2.exit\n";
	int chose;
cout<<"enter your choice="<<endl;
cin>>chose;
	user.play(chose);
	return(0);
	 
}
