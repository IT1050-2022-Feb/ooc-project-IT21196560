#include <iostream>
#include <cstring>


using namespace std;


class Users{

  protected:
    string first_name;
    string last_name;
    Admin *admn;

  public:
    Users(){

      cout << "Users called" << endl;
      
    }

    Users( string f_name, string l_name){

      first_name = f_name;
      last_name = l_name;
      
      
      
      
    }

    void viewProperties(){
      
    }
   

};

class RegisteredCustomer : public Users{

  private:
        string nic;
        string address;
        int age;
        string gender;
        string email;
        string username;
        string customer_id;
        string password;
        Agent *agnt;
        Payment *pymnt;

  public:
        RegisteredCustomer(){

            cout << "RegisteredCustomer called" << endl;

          
        }

        RegisteredCustomer( string nic, string addrss, int age, string gndr, string email, string usrname, string cstmr_id, string psswrd, string f_name, string l_name) : Users(f_name, l_name){

            nic = nic;
            address = addrss;
            age = age;
            gender = gndr;
            email = email;
            username = usrname;
            customer_id = cstmr_id;
            password = psswrd;

          
        }

        void viewAgents(){
          
        }

        void purchaseProperty(){
          
        }

        void postAd(){
          
        }

        void updateAd(){
          
        }

        void postFeedback(){
          
        }

       ~RegisteredCustomer();

        
        
  
};

class Guest : public Users{

   public:

      Guest(){

            cout << "Guest called" << endl;

          
      }

      Guest(string f_name, string l_name) : Users(f_name, l_name){
        
      }

      void viewAgents(){

        
      }

    	~Guest();
      

};

class Agent : public Users {

    private:
        string nic;
        string address;
        int age;
        string gender;
        string email;
        string username;
        string agent_id;
        string password;
        RegisteredCustomer *cstmer[3];


    public:
        Agent(){

            cout << "Agent called" << endl;

          
        }

        Agent( string nic, string addrss, int age, string gndr, string email, string usrname, string agnt_id, string psswrd, string f_name, string l_name) : Users(f_name, l_name){

            nic = nic;
            address = addrss;
            age = age;
            gender = gndr;
            email = email;
            username = usrname;
            agent_id = agnt_id;
            password = psswrd;

          
        }

        void postAd(){
          
        }

        void updateAd(){
          
        }
        
        void postFeedback(){
          
        }
          
        ~Agent();

};

class WebsiteHandler
{
 private:
 	
     string first_Name;
     string last_Name;
     string nIC;
     string address;
     int age;
     string gender;
     string email;
     string password;
 
 
 public: 

    WebsiteHandler(){

      cout << "Website Handlers called";
      
    }

    WebsiteHandler( string f_name, string l_name, string nic, string addrss, int age, string gndr, string email, string psswrd){

        first_Name = f_name;
        last_Name = l_name;
        nIC = nic;
        address = addrss;
        age = age;
        gender = gndr;
        email = email;
        password = psswrd;
      
    }

    
 
    void postUserAds(){
       
     }

    void updateUserAds(){
       
     }

    void postFeedbacks(){
       
     }

    void fixTechnicalerrors(){
       
    }

    void updateWebsite(){
       
    }

    void postAgentAds(){
       
    }

     void updateAgentAds(){
       
     }
 
};

class Admin : public WebsiteHandler
{
 private:
 	
        string admin_ID;
        WebDeveloper *wbdvlpr[4];
 
 public: 
 
      Admin(){

        cout << "Admin called";
         
      }
      Admin( string f_name, string l_name, string nic, string addrss, int age, string gndr, string email, string psswrd, string admn_id) : WebsiteHandler(f_name, l_name, nic, addrss, age, gndr, email, psswrd ){

        admin_ID = admn_id;
         
      }
      void displayFeedbacks(){
         
      }

       void displayuserDetails(){
         
      }

      void displayPaymentDetails(){
         
      }

      void displayAgentDetails(){
         
      }

      void displayGuestDetails(){
         
      }

      void displayProperties(){
         
      }

      void displayWebDeveloperDetails(){
         
      }

      ~Admin();
        
       
};

class WebDeveloper : WebsiteHandler
{
 private:
 	
    string developer_ID;
    Admin *admn[2];
    
 
 public: 
 
    WebDeveloper(){

        cout << "WebDeveloper called";
      
    }
    WebDeveloper(string t_developer_ID, string f_name, string l_name, string nic, string addrss, int age, string gndr, string email, string psswrd ) : WebsiteHandler(f_name, l_name, nic, addrss, age, gndr, email, psswrd){

        developer_ID = t_developer_ID;
      
    }
 
};

class Advertisement {

  private:
        string advertisement_ID;
        string advertisement_name;
        string advertisement_type;
        string advertisement_date;
        string advertisement_time;

  public:
        Advertisement(){

            cout << "Advertisement is called";
          
        }

        Advertisement( string ads_ID, string ads_name, string ads_type, string ads_date, string ads_time){

          advertisement_ID = ads_ID;
          advertisement_name = ads_name;
          advertisement_type = ads_type;
          advertisement_date = ads_date;
          advertisement_time = ads_time;

          
        }

        void displayAddetails(){

            cout << "Advertisement ID :- " << advertisement_ID << endl << "Advertisement Name :- " << advertisement_name << endl << "Advertisement Type :- " << advertisement_type << endl << "Advertisement Date :- " << advertisement_date << "Advertisement Time :- " << advertisement_time << endl;
          
        }

        void setAdsDetails( WebDeveloper *W ){

        }

        ~Advertisement();

        



};

class Feedback
{
 private:
 	
  string feedback_date;
  string feedback_time;
  string Comment;
  int rate;

 
 public: 
 
  Feedback(){
  
      cout << "Feedback called";
     
   }
  Feedback(string t_feedback_date, string t_feedback_time, string t_comment, int t_rate){
  
    feedback_date = t_feedback_date;
    feedback_time = t_feedback_time;
    Comment = t_comment;
    rate = t_rate;
      
     
   }
  void displayFeedback(){
  
      cout << "Feedback date :- " << feedback_date << endl << "Feedback time :- " << feedback_time << endl << "Comment :- " << Comment << "Rate :- " << rate;
     
   }
  
  void addFeedbacks( WebDeveloper *W ){

  }
 
};

class Payment {

    private:
          int payment_id;
          int account;
          float amount;
          string payment_time;
          string payment_date;

    public:
          Payment(){

              cout << "Payment called";
            
          }

          Payment( int pymnt_id, int accnt, float amnt, string pymnt_time, string pymnt_date){

              payment_id = pymnt_id;
              account = accnt;
              amount = amnt;
              payment_time = pymnt_time;
              payment_date = pymnt_date;

            
          }

          void getPaymnetdetails(){

              cout << "Payment ID :- " << payment_id << endl << "Account Number :- " << account << endl << "Amount :- " << amount << endl << "Payment Time :- " << payment_time << endl << "Payment Date :- " << payment_date << endl;
             
          }

          ~Payment();

          
            

};

class Properties {

  private:
        string property_id;
        string property_type;
        string property_name;
        float property_price;
        string property_description;

  public:
      Properties(){

          cout << "Property called";
        
      }

      Properties( string prpty_id, string prpty_type, string prpty_name, float prpty_price, string prpty_dis ){

          property_id = prpty_id;
          property_type = prpty_type;
          property_name = prpty_name;
          property_price = prpty_price;
          property_description = prpty_dis;
        
      }

      void displayPropertyDetails(){

          cout << "Property ID :- " <<  property_id << endl << "Property Type :- " << property_type << endl << "Property_Name :- " << property_name << endl << "Property Price :- " << property_price << endl << "Property Description :- " << property_description << endl;
        
      }

      void setPropertyDetails(  Advertisement *A ){
        
      }

      ~Properties();

    

};

int main()
{
	
	RegisteredCustomer *rc1 = new RegisteredCustomer( "7552459288", "Negambo Road, Kirimatiyana, Lunuwila", 26, "Male", "PasiN255@gmail.com", "Pasi45", "C457211252", "PasiN11", "Pasindu", "Nuwan");
	
	Agent *agnt1 = new Agent( "7255928840", "31 Sri Sanganandu Mawatha", 44, "Male", "kapilaSil5@gmail.com", "kapila22", "AG85627169", "kapils12", "Kapila", "De Silva");
	
	Guest *gst1 = new Guest( "Nihal", "Pathirana");
	
	Admin *admn1 = new Admin( "Jagath", "Peris", "815676458v", "281 Panchikawatte Road, 10, Colombo", 34, "Male", "jagathp5@gmail.com", "Jagath12", "A875692300" );
	
	WebDeveloper *wbdvlp1 = new WebDeveloper( "D426352495", "Ravi", "Perera", "8211809155", "ST.Peters Road, Korolawella, Moratuwa", 28, "Male", "Ravip44@gmail.com", "Pravi123" );
	
	Advertisement *ad1 = new Advertisement( "9169685142", "Apartment with 3 rooms, Dehiwala", "Property", "2021/04/22", "15:20" );
	
	Properties *prpty1 = new Properties( "P215557", "Apartments", "One Brdroom Serviced Apartment Mirissa", "28500000", "" );
	
	Feedback *fdbk1 = new Feedback( "2021/12/16", "17:25", "Have a good interface", 5);
	
	Payment *pymnt1 = new Payment( "PAY1808372", 969147, 2050000, "14:50", "2021/09/09");
	
	
	
	delete *rc1;
	delete *agnt1;
	delete *gst1;
	delete *admn1;
	delete *wbdvlp1;
	delete *ad1;
	delete *prpty1;
	delete *fdbk1;
	delete *pymnt1;
}

