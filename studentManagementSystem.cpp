#include<iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
int total = 0;
void enter()
{
    int choice;
    cout<<"How many students do you want to enter : ";
    cin>>choice;
    if(total==0)
     {
    for(int i = 0; i<choice; i++)
    {
        cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
        cout<<"Enter Name    :  "  ;
        cin>>arr1[i];
        cout<<"Enter Rollno. :  "  ;
        cin>>arr2[i];
        cout<<"Enter Course  :  "  ;
        cin>>arr3[i];
        cout<<"Enter Class   :  "  ;
        cin>>arr4[i];
        cout<<"Enter Contact :  "  ;
        cin>>arr5[i];
    }
    total = total + choice;
   }
   else
   {
        for(int i = total; i<total+choice; i++)
    {
        cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
        cout<<"Enter name    :  ";
        cin>>arr1[i];
        cout<<"Enter Rollno. :  ";
        cin>>arr2[i];
        cout<<"Enter Course  :  ";
        cin>>arr3[i];
        cout<<"Enter Class   :  ";
        cin>>arr4[i];
        cout<<"Enter Contact :  ";
        cin>>arr5[i];
    }
   }

}

void show()
{
     if(total==0)
     {
          cout<<"NO DATA FOUND..!!"<<endl;
     }
     else{
    for(int i = 0; i<total; i++)
    {
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name    :  "<<arr1[i]<<endl;
        cout<<"Rollno. :  "<<arr2[i]<<endl;
        cout<<"Course  :  "<<arr3[i]<<endl;
        cout<<"Class   :  "<<arr4[i]<<endl;
        cout<<"Contact :  "<<arr5[i]<<endl;
    }
}
}
void search()
{
          if(total==0)
     {
          cout<<"NO DATA FOUND..!!"<<endl;
     }
     else{

     string rollno;
     cout<<"Enter Rollno of student which you want to search: ";
     cin>>rollno;
     for(int i = 0; i<total; i++)
     {
          if(rollno == (arr2[i]))

          {
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name    :  "<<arr1[i]<<endl;
        cout<<"Rollno. :  "<<arr2[i]<<endl;
        cout<<"Course  :  "<<arr3[i]<<endl;
        cout<<"Class   :  "<<arr4[i]<<endl;
        cout<<"Contact :  "<<arr5[i]<<endl;
          }
     }
}
}
void update()
{
          if(total==0)
     {
          cout<<"NO DATA FOUND..!!"<<endl;
     }
     else{

     string rollno;
     cout<<"Enter Rollno of student which you want to update: ";
     cin>>rollno;
     for(int i = 0; i<total; i++)
     {
          if(rollno == (arr2[i]))

          {
               cout<<"Previous Data: "<<endl;
               cout<<"Data of student: "<<i+1<<endl<<endl;
               cout<<"Name    :  "<<arr1[i]<<endl;
               cout<<"Rollno. :  "<<arr2[i]<<endl;
               cout<<"Course  :  "<<arr3[i]<<endl;
               cout<<"Class   :  "<<arr4[i]<<endl;
               cout<<"Contact :  "<<arr5[i]<<endl;
               cout<<"\nEnter new data"<<endl;
               cout<<"\nEnter name: ";
               cin>>arr1[i];
               cout<<"Enter rollno: ";
               cin>>arr2[i];
               cout<<"Enter course: ";
               cin>>arr3[i];
               cout<<"Enter class: ";
               cin>>arr4[i];
               cout<<"Enter contact: ";
               cin>>arr5[i];

          }
     }
}
}
void deleterecord()
{
          if(total==0)
     {
          cout<<"NO DATA FOUND!!"<<endl;
     }
     else{

   int a;
   cout<<"Press 1 to delete full record: "<<endl;
   cout<<"Press 2 to delete any specific record: "<<endl;
   cin>>a;
   if(a==1)
   {
        total=0;
        cout<<"All record is deleted!"<<endl;
   }
   else if(a==2)
   {
        string rollno;
        cout<<"Enter Rollno which you want to delete"<<endl;
        cin>>rollno;
        for(int i=0; i<total; i++)
        {
            if(rollno==arr2[i])
            {
                 for(int j=i; j<total; j++)
                 {
                      arr1[j]=arr1[j+1];
                      arr2[j]=arr2[j+1];
                      arr3[j]=arr3[j+1];
                      arr4[j]=arr4[j+1];
                      arr5[j]=arr5[j+1];

                 }
                 total--;
                 cout<<"Your selected record is deleted..."<<endl;
            }
        }
   }
}
}

main()
{
    int value;
    while(true)
    {
    cout<<"Press 1 to Enter Data"<<endl;
    cout<<"Press 2 to Show Data"<<endl;
    cout<<"Press 3 to Search Data"<<endl;
    cout<<"Press 4 to Update Data"<<endl;
    cout<<"Press 5 to Delete Data"<<endl;
    cout<<"Press 6 to Exit Data"<<endl;
    cout<<endl;
    cin>>value;
    cout<<endl;

        switch(value){
        case 1 :
        enter();
        break;

        case 2 :
        show();
        break;

        case 3 :
        search();
        break;

        case 4 :
        update();
        break;

        case 5 :
        deleterecord();
        break;

        case 6 :
        exit(0);
        break;

        default :
        cout<<"Invalid input"<<endl;
        break;

    }
   }
}
