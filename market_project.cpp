#include <bits/stdc++.h>

using namespace std;

class User
{
    private:
    int userID;
    string emailID,name,DOB,state,city,street;
   
    public:
     User(int i)
     {
         userID = i;
         cout<<"\nYour userID is : "<<userID<<endl;
         cout<<"\nEnter email ID : ";
         cin>>emailID;
         cout<<"\nEnter Name : ";
         cin>>name;
         cout<<"\nEnter Date of Birth : ";
         cin>>DOB;
         cout<<" \nEnter addres details "<<endl;
         cout<<"\nState : ";
         cin>>state;
         cout<<"\nCity : ";
         cin>>city;
         cout<<"\nStreet : ";
         cin>>street;
         cout<<"\n ********* USER PROFILE CREATED **********"<<endl;
     }
};



class Products
{
  private:
  int pId,quantity,price,rating;
  string category,desc,image;
 
  public:
  Products(int pid)
  {
      pId = pid;
      cout<<"\nYour product id is : "<<pId<<endl;
      cout<<"\nProduct category : ";
      cin>>category;
      cout<<"\nEnter quantity : ";
      cin>>quantity;
      cout<<"\nEnter price of each produt : ";
      cin>>price;
      cout<<"\nEnter produt desc : ";
      cin>>desc;
     
     
  }
 
  void setRat()
  {
      cout<<"Give your rating out of 5 : ";
      cin>>rating;
  }
 
  int getRat()
  {
      return rating;
  }
 int getPrice()
  {
     return price;
  }
 
  int getpId()
  {
      return pId;
  }
 
  int getQuant()
  {
      return quantity;
  }
 
  string getCategory()
  {
      return category;
  }
  string getDesc()
  {
      return desc;
  }
 
 
 
};

class support
{
  public:
  int id,prodID;
  string quer;
  support()
  {
  cout<<"\nEnter id : ";
  cin>>id;
  cout<<"\nEnter Product ID : ";
  cin>>prodID;
  cout<<"\nEnter your queries : ";
  cin>>quer;
  }
};




int main()
{
    int rat,bpr,apr,search,option;
    string category;
    int pid=0,i=0;
    vector<Products>product;
   
    while(1)
    {
       
   
    cout<<"\n*************  ENTER THE OPTION **********"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"\nPress 0 to Quit the application"<<endl;
    cout<<"Press 1 to create User profile"<<endl;
    cout<<"Press 2 to Post/List Products as Sellers"<<endl;
    cout<<"Press 3 to Search the products"<<endl;
    cout<<"Press 4 for Customer Support "<<endl;
    cout<<"\n==> ";
    cin>>option;
    switch(option)
    {
        case 0:
        {
            cout<<"---------------------------------------- APPLICATION CLOSED -------------------------------------";
            return 0;
        }
        case 1:
        {
        cout<<"  Add these details to create profile ";
        User* U = new User(i);
        i=i+1;
        break;
        }
       
        case 2:
        {
        cout<<"----- List the Product -----"<<endl;
        Products P(pid);
        product.push_back(P);
        pid = pid+1;
        break;
        }
       
        case 3:
        {
            cout<<"How to Search proucts...? "<<endl;
            cout<<" 1 - based on category "<<endl<<" 2 - Filter with price or ratings "<<endl<<" 3 - Using keywods  "<<endl;
            cout<<" Enter option : ";
            cin>>search;
            switch(search)
            {
                case 1 :
                {
                    cout<<"Enter category : ";
                    cin>>category;
                   
                    for(auto v : product )
                    {
                        if(category ==  v.getCategory())
                        {
                            cout<<"Products available baed on the given category are "<<endl<<endl;
                            cout<<v.getpId()<<endl<<v.getCategory()<<endl<<v.getPrice()<<endl<<v.getDesc()<<endl<<v.getQuant()<<endl<<endl<<endl;
                        }
                        cout<<"--------"<<endl<<endl;
                    }
                    break;
                }
               
                case 2:
                {
                    cout<<"Enter the price range : Below ";
                    cin>>bpr;
                    cout<<"Enter the price range : Above ";
                    cin>>apr;
                    cout<<"Enter needed rating ";
                    cin>>rat;
                   
                    for(auto v : product)
                    {
                        if( (v.getPrice() <= bpr) && (v.getPrice() >= apr) && (rat == v.getRat()) )
                        {
                            cout<<v.getpId()<<endl<<v.getCategory()<<endl<<v.getPrice()<<endl<<v.getDesc()<<endl<<v.getQuant()<<endl<<endl<<endl;
                        }
                         cout<<"--------"<<endl<<endl;
                    }
                    break;
                }
            }
            break;
           
        }
       
        case 4:
        {
            cout<<"---------------------CUSTOMER SUPPORT----------------------";
            support S;
            break;
        }
       
    }
   
   
   

    }
    return 0;
}

