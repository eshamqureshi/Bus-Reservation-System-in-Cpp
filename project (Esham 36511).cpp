#include<iostream>

#include<conio.h>

#include<windows.h>

using namespace std;


struct bus{

	string name;//driver name
	
	string id;//bus number
	
	string s1;//dep
	
	string s2;//arival
	
	string t1;//dep time
	
    string t2;//ari time
    
    string d1;
	
};
struct ticket{
	
string name;// buyer name

string id;	//id invoise

string s1;//dep

string s2;//arival

string t1;//dep time

string t2;//ari time
	
};
struct faree{
	
	 string h1;
	 
	 string h2;
	
	
};
int total=0;

int site_total=0;

bus e[100];//bus

ticket f[100];//ticket

void busdata(){

	int user=0;

	cout<<"\n\tHow many Buses do you want to enter??"<<endl;


      cout<<"\n\t";

	cin>>user;

	for(int i=total;i<total+user;i++){

		cout<<"\n\tEnter data of the Bus "<<i+1<<endl<<endl;

       cout<<"\n\tEnter Bus Number: ";

		cin>>e[i].id;
		
		cout<<"\n\tEnter Diver name: ";
		
		cin>>e[i].name;
		
		cout<<"\n\tEnter Bus Departure Location: ";

		cin>>e[i].s1;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>e[i].s2;
		
		cout<<"\n\tEnter Departure Time: ";

		cin>>e[i].t1;
		
		cout<<"\n\tEnter Arrival Time: ";

		cin>>e[i].t2;
		
			cout<<"\n\t--------------------------------------------- "<<endl;

		
		
		cout<<"\n\tBus Added Successfully\n\t---------------------------------------------\n\n\t\t Now you can choose any option from the following"<<endl;

	}

	total=total+user;

}






void show(){
	

	if(total!=0){

	for(int i=0;i<total;i++){

		cout<<"\n\tData of Bus "<<i+1<<endl;
		
			cout<<"\n\tPlate Number: "<<e[i].id<<endl;
			
			cout<<"\n\tDiver name: "<<e[i].name<<endl;
		

			cout<<"\n\tDeparture Location "<<e[i].s1<<endl;


			cout<<"\n\tArrival Location: "<<e[i].s2<<endl;
		
			cout<<"\n\tDeparture Time: "<<e[i].t1<<endl;


			cout<<"\n\tArrival Time: "<<e[i].t2<<endl;
			
				cout<<"\n\t--------------------------------------------- "<<endl;

	
	
	
	}

    }

    else{

    	cout<<"\n\tNo data is entered"<<endl;

	}

    }
    
    
    
    
    
    

void search(){

	if(total!=0){

	string id;

	cout<<"\n\tEnter Plate Number of the Bus which you want to search"<<endl;

 cout<<"\n\t";
 
	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"\n\tData of Bus "<<i+1<<endl;
		
		cout<<"\n\tDiver name: "<<e[i].name<<endl;
			
		cout<<"\n\tPlate Number: "<<e[i].id<<endl;

		cout<<"\n\tDeparture Location: "<<e[i].s1<<endl;

		cout<<"\n\tArrival Location: "<<e[i].s2<<endl;
		
		cout<<"\n\tDeparture Time: "<<e[i].t1<<endl;

		cout<<"\n\tArrival Time: "<<e[i].t2<<endl;

		

		break;

		}

		if(i==total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}

}







void update(){

	if(total!=0){

	string id;

	cout<<"\n\n\t\tEnter Plate Number of the Bus which You want  to update"<<endl;

 cout<<"\n\t";
 
	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"\n\\tOld data of Bus "<<i+1<<endl;
		
		cout<<"\n\tDiver name: "<<e[i].name<<endl;
		
		cout<<"\n\tPlate Number of the Bus: "<<e[i].id<<endl;

		cout<<"\n\tDeparture Location: "<<e[i].s1<<endl;

		cout<<"\n\tArrival Location: "<<e[i].s2<<endl;
		
		cout<<"\n\tDeparture Time: "<<e[i].t1<<endl;

		cout<<"\n\tArrival Time: "<<e[i].t2<<endl;
		
			cout<<"\n\t--------------------------------------------- "<<endl;
			
				cout<<"\t--------------------------------------------- "<<endl;

	

		cout<<"\n\tEnter new data"<<endl;
		
	
		cout<<"\n\tEnter Departure Location: ";

		cin>>e[i].s1;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>e[i].s2;
		
		cout<<"\n\tEnter Departure Time: ";

		cin>>e[i].t1;

		cout<<"\n\tEnter Arrival Time: ";

		cin>>e[i].t2;
		
			cout<<"\n\t--------------------------------------------- "<<endl;

		

		break;

		}

		if(i==total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}

}








void del(){

	if(total!=0){

	int press;
	
		cout<<"\n\t--------------------------------------------- "<<endl;

	cout<<"\n\tPress 1 to delete specific record"<<endl;

	cout<<"\n\tPress 2 to delete full record"<<endl;

	cin>>press;

	if(press==1){

		string id;

		cout<<"\n\tEnter Plate Number of the Bus which you want to delete"<<endl;

 cout<<"\n\t";
 
		cin>>id;

		for(int i=0;i<total;i++){

			if(e[i].id==id){

				e[i].name=e[i+10].name;

				e[i].id=e[i+10].id;

				e[i].s1=e[i+10].s1;

				e[i].s2=e[i+10].s2;

				e[i].t1=e[i+10].t1;
				
				e[i].t2=e[i+10].t2;

				total--;

				cout<<"\n\tYour required record is deleted"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

		}

	}

	else if(press==2){

		total=0;

		cout<<"\n\tAll record is deleted"<<endl;

	}

	else{

		cout<<"\n\tInvalid Input"<<endl;

	}

}else{


	cout<<"\n\tNo data is entered"<<endl;
	
}


}






    Res_Ticket(){
    	
		int user=0;

	cout<<"\n\tFor how many tickets you want to Reserve??"<<endl;

 cout<<"\n\t";
 
	cin>>user;

	for(int i=site_total;i<site_total+user;i++){

		cout<<"\n\tEnter data for the Customer "<<i+1<<endl<<endl;
		
		cout<<"\n\tEnter Name of customer: ";
		
		cin>>f[i].name;

       cout<<"\n\tEnter Invoice number: ";

		cin>>f[i].id;
		
		cout<<"\n\tEnter Bus Departure Location: ";

		cin>>f[i].s1;
	
		cout<<"\n\tEnter Arrival Location: ";

		cin>>f[i].s2;
		
		cout<<"\n\tEnter Departure Time: ";

		cin>>f[i].t1;

		cout<<"\n\tEnter Arrival Time: ";

		cin>>f[i].t2;
		
		cout<<"\n\tTotal Amount you have to pay "<<e[i].d1<<endl;
		
			cout<<"\n\t------------------------------------------- "<<endl;

		
		
		cout<<"\n\tTicket Reserved Successfully\n\t---------------------------------------------\n\n\t\t Now you can you any option from the following"<<endl;


	}


	site_total=site_total+user;	
	
	
	}
		
		
		
		
		
		
		
	Update_Res(){
	
	if(total!=0){

	string id;

	cout<<"\n\tEnter Invoice number of the Ticket for which You want  to update"<<endl;

 cout<<"\n\t";
 
	cin>>id;

	for(int i=0;i<site_total;i++){

		if(f[i].id==id){

		cout<<"\n\t old Ticket Data "<<i+1<<endl;
		
		cout<<"\n\t Name of customer"<<f[i].name<<endl;
		
			
		cout<<"\n\tInvoice Number: "<<f[i].id<<endl;

		cout<<"\n\tDeparture Location: "<<f[i].s1<<endl;
		
		cout<<"\n\tArrival Location: "<<f[i].s2<<endl;

		cout<<"\n\tArrival Time: "<<f[i].t1<<endl;

		cout<<"\n\tDeparture Time: "<<f[i].t2<<endl;
		
			cout<<"\n\t--------------------------------------------- "<<endl;
			
				cout<<"\t---------------------------------------------"<<endl;
		
		
		cout<<"\n\tEnter new data"<<endl;
		
		cout<<"\n\tName of customer: ";
		
		cin>>f[i].name;
		

		cout<<"\n\tEnter Departure Location: ";

		cin>>f[i].s1;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>f[i].s2;
		
		cout<<"\n\tEnter Departure Time: ";

		cin>>f[i].t1;
		

		cout<<"\n\tEnter Arrival Time: ";

		cin>>f[i].t2;
		
			cout<<"\n\t------------------------------------------- "<<endl;

	
		cout<<"\n\t Ticket Updated Successfullly";


		break;
		}
		if(i==site_total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}
	}
	
	
	
	
	
	
	cancel_Res(){

	if(total!=0){

		string id;

		cout<<"\n\n\t\tEnter Invoice Number of the Ticket which you want to Cancel"<<endl;

 cout<<"\n\t";
 
		cin>>id;

		for(int i=0;i<site_total;i++){

			if(f[i].id==id){

				f[i].name=e[i+1].name;

				f[i].id=f[i+1].id;

				f[i].s1=f[i+1].s1;

				f[i].s2=f[i+1].s2;

				f[i].t1=f[i+1].t1;
				
				f[i].t2=f[i+1].t2;

				total--;

				cout<<"\n\t\tReservation Cancelled Successfuly"<<endl;

	cout<<"\n\t--------------------------------------------- "<<endl;
		cout<<"\t--------------------------------------------- "<<endl;
				break;

			}

			if(i==site_total-1){

			cout<<"\n\t\tNo such record found"<<endl;

		}

		}

	}

}	






	show_invoice(){

	if(total!=0){

	for(int i=0;i<site_total;i++){
		
		
		
			cout<<"\n\t--------------------------------------------- "<<endl;

		cout<<"\n\tData of Customer "<<i+1<<endl;
		
		cout<<"\n\tcustomer name "<<f[i].name<<endl;

		cout<<"\n\tTicket Invoice Number: "<<f[i].id<<endl;
		
		cout<<"\n\tDeparture Location "<<f[i].s1<<endl;

		cout<<"\n\tArrival Location: "<<f[i].s2<<endl;
		
		cout<<"\n\tDeparture Time: "<<f[i].t1<<endl;

		cout<<"\n\tArrival Time: "<<f[i].t2<<endl;
		
			cout<<"\n\t--------------------------------------------- "<<endl;
				cout<<"\t--------------------------------------------- "<<endl;

		

	}
    }

    else{

    	cout<<"\n\tNo data is entered"<<endl;

	}

}







	
	fare(){
	int user=0;

	cout<<"\n\tFor how many Buses you want to define fare??"<<endl;

 cout<<"\n\t";
 
	cin>>user;

	for(int i=total;i<total+user;i++){
		
			cout<<"\n\t--------------------------------------------- "<<endl;

		cout<<"\n\tEnter data of the Bus for which you want to define fare "<<i+1<<endl<<endl;

       cout<<"\n\tEnter Bus Plate Number: ";

		cin>>e[i].id;
		
		cout<<"\n\tEnter Bus Departure Location: ";

		cin>>e[i].s1;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>e[i].s2;

		cout<<"\n\tEnter Total Fare: ";

		cin>>e[i].d1;
		
			cout<<"\n\t--------------------------------------------- "<<endl;

	
		
		cout<<"\n\n\t\tFare Added Successfully\n\t---------------------------------------------\n\n\t\t Now you can you any choose option from the following"<<endl;

	}

	total=total+user;

}







	show_fare(){

	if(total!=0){

	for(int i=0;i<total;i++){
		
		
	
			cout<<"\n\t--------------------------------------------- "<<endl;

		cout<<"\n\tData of Bus "<<i<<endl;
		
			cout<<"\n\tPlate Number: "<<e[i].id<<endl;

		cout<<"\n\tDeparture Location: "<<e[i].s1<<endl;
		
			cout<<"\n\tArrival Location: "<<e[i].s2<<endl;
	
		cout<<"\n\tTotal Fare: "<<e[i].d1<<endl;

		cout<<"\n\tDiscounted Fare: "<<"0%"<<endl;
		
		cout<<"\n\t--------------------------------------------- "<<endl;
		
		cout<<"\t--------------------------------------------- "<<endl;
		

}
	
    }

    else{

    	cout<<"\n\tNo data is entered"<<endl;
	}

}








	update_fare(){

	if(total!=0){

	string id;

	cout<<"\n\n\t\tEnter Plate Number of the Bus which You want  to update fare"<<endl;


	cout<<"\t\n  ";
	
	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){
			
				cout<<"\n\t------------------------------------------- "<<endl;

		cout<<"\n\tDetails of old fare of Bus along with Bus data"<<i+1<<endl;

		cout<<"\n\tDeparture Location: "<<e[i].s1<<endl;

		cout<<"\n\tPlate Number of the Bus: "<<e[i].id<<endl;

		cout<<"\n\tArrival Location: "<<e[i].s2<<endl;

		cout<<"\n\tTotal Fare: "<<e[i].d1<<endl;


		cout<<"\n\tEnter new data"<<endl;

		cout<<"\n\tEnter Departure Location: ";

		cin>>e[i].s1;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>e[i].s2;

		cout<<"\n\tEnter New Total Fare: ";

		cin>>e[i].d1;

			cout<<"\n\t----------------------------------------------"<<endl;
		
		cout<<"\n\n\t\t Fare Updated Successfully\n\t\tNow you can choose from the following ";

		break;

		}

		if(i==total-1){

			cout<<"\n\n\t\tNo such record found"<<endl;

		}
	}

}else{

	cout<<"\n\n\t\tNo data is entered"<<endl;

}

}
	
	
	
	
	
	

 int main(){
    
                                         
    
	cout<<"\n\n\t\t**********^^^^^{   BUS RESERVTION SYSTEM   } ^^^***********"<<endl;



	  string username,password;

    cout<<"\n\n\n\t\t\t****** ====  Please Signup  ====  ******"<<endl;

	cout<<"\n\n\t\tEnter new username: ";

	cin>>username;

	cout<<"\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\tYour new id is creating please wait";

	for(int i=0;i<6;i++)

	{
		cout<<".";

		Sleep(500);
	}

	cout<<"\n\t\tYour id created successfully";

	Sleep(2000);

	start:// back jump

	system("CLS");// screen clear

	string usrn,pswd;

	cout<<"\n\n\t\t**********^^^^^{   BUS RESERVTION SYSTEM   } ^^^***********"<<endl;

	cout<<"\n\n\n\t\t   LOGIN"<<endl;

	cout<<"\t\tEnter username: ";

	cin>>usrn;

	cout<<"\t\tEnter password: ";

	cin>>pswd;

	if(usrn==username&&pswd==password)

	{

	system("CLS");
                               
	char ch;

	while(1){//bar bar poucha ga use as a true

	cout<<"\n\tEnter 1 Manage Buses"<<endl;

	cout<<"\n\tEnter 2 to Manage Customers"<<endl;

	cout<<"\n\tEnter 3 to Manage Fares"<<endl;

	cout<<"\n\tEnter 4 to logout"<<endl;

	cout<<"\n\tEnter 5 to exit"<<endl;
	
	 cout<<"\n\t";

	ch=getch();//cin

	system("CLS");

	switch(ch){
    
		case '1':
			
			cout<<"\n\t1) Add Bus"<<endl
			
			    <<"\n\t2)Delete Bus"<<endl
			    
			    <<"\n\t3)Update Bus"<<endl
			    
			    <<"\n\t4)Details of Bus (Route of the Bus)"<<endl;
			    
			    cout<<"\n\t";
			    
			    int a;
			    
            cin>>a;
            
            if(a==1){
            	
            	busdata();
			}
			
			else if(a==2){
				
				del();
			}
			
			else if(a==3){
				
				update();
			}
            
            else if(a==4){
             
			   show();
			    	
			}
			
			else
			
			cout<<"Wrong Input!!!. Try Again";

			break;


		case '2':
			
			cout<<"\n\t1) Reserve Ticket"<<endl
			
			    <<"\n\t2)Update Reservation"<<endl
			    
			    <<"\n\t3)Cancel Reservation"<<endl
			    
			    <<"\n\t4)View invoice"<<endl;
			    
			   cout<<"\n\t";
			    
				int b;
				
				cin>>b;	
				
            if(b==1){
            	
            	
            	Res_Ticket();
			}
			
			else if(b==2){
				
				Update_Res();
			}
			
			else if(b==3){
				
				cancel_Res();
			}
            
            else if(b==4){
             
			   show_invoice();
			    	
			}
			
			else
			
			cout<<"\n\n\t\tWrong Input!!!. Try Again";

			break;


		case '3':
			
			cout<<"\n\t1) Define fare of the Bus"<<endl
			
			    <<"\n\t2)View fare of the Bus"<<endl
			    
			    <<"\n\t3)Update fare of the Bus"<<endl;
            int c;
            
            
        cout<<"\n\t";
        
        
            cin>>c;
            
			if(c==1){
				
            	fare();
			}
			
			else if(c==2){
				
				show_fare();
			}
			
			else if(c==3){
				
				update_fare();
			}
            
			
			else
			
			cout<<"Wrong Input!!!. Try Again";

			break;

		case '4':

			goto start;

			break;

		case '5':

			exit(0);

			break;

		default:

			cout<<"\aInvalid Input"<<endl;

			break;

	}
}

}


  else if(usrn!=username)

  {

  	cout<<"\t\t\aInvalid username please try again";

  	Sleep(3000);

  	goto start;//start wala pr jaye ga

  }

  else if(pswd!=password)

  {

  	cout<<"\t\t\aInvalid password please try again";

  	Sleep(3000);

  	goto start;

  }

  else{

  	cout<<"\t\t\aInvalid username and password";

  	Sleep(3000);

  	goto start;
  }
}
             //==================================== The End  ============================================//
             