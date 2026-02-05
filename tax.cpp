#include <iostream>
using namespace std;
int main() {
    double sales, state_tax, country_tax;
    cout<<"ENTER SALES : ";
    cin>>sales;
    cout<<"ENTER STATE TAX :";
    cin>>state_tax;
    cout<<"ENTER COUNTRY TAX :";
    cin>>country_tax;


    double ttl_state_tax= sales * (state_tax / 100);
    double ttl_country_tax=sales * (country_tax / 100);
    double ttl_tax=ttl_state_tax + ttl_country_tax;
    double ttl_sales=sales - ttl_tax;
    cout<<"sales= $"<<sales<<endl
    <<"ttl_state_tax = $"<<ttl_state_tax<<endl
    <<"ttl_country_tax = $"<<ttl_country_tax<<endl
    <<"ttl_tax = $"<<ttl_tax<<endl
    <<"ttl_sales = $"<<ttl_sales<<endl;
}