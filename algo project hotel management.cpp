#include<iostream>
using namespace std;

int main()
{

    int quant;
    int choice;


    //quantity
    int qrooms = 0, qpasta = 0, qburger = 0, qnoodles = 0, qshake = 0, qchicken = 0;
    //sold
    int srooms = 0, spasta = 0, sburger = 0, snoodles = 0, sshake = 0, schicken = 0;
    //total
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken = 0;


    cout<<"\n\t welcome to sangita resturant";
    cout<<"\n\t quantity of item we have";
    cout<<"\n rooms available: ";
    cin>>qrooms;


    cout<< "\n quantity of pasta :";
    cin>> qpasta;

    cout<< "\n quantity of burger :";
    cin>> qburger;
    cout<< "\n quantity of noodles :";
    cin>> qnoodles;
    cout<< "\n quantity of shake :";
    cin>> qshake;
    cout<< "\n quantity of chicken :";
    cin>> qchicken;



    m:
    cout<< "\n\t\t\t please select from the menu opction";
    cout<< "\n\n1 rooms";
    cout<< "\n2) pasta";
    cout<< "\n3) burger";
    cout<< "\n4) noodles";
    cout<< "\n5) shake";
    cout<< "\n6) chicken";
    cout<< "\n7) information regarding sales and collection";
    cout<< "\n8 exit";


        cout<< "\n\n please enter your choice! ";
        cin>> choice;
        switch(choice)
        {
        case 1:
            cout<< "\n\n enter the the number of rooms you want: ";
            cin>>quant;
            if(qrooms-srooms >=quant)
            {
                srooms = srooms + quant;
                //1200 is room price
                total_rooms = total_rooms + quant*1200;
                cout<< "\n\n\t"<<quant<< "room/rooms have been allocated to you!";
            }
            else
            cout<<"\n\tonly"<<qrooms - srooms<<"rooms remaining in hotel ";
            break;


             case 2:
            cout<< "\n\n enter the the number of pasta you want: ";
            cin>>quant;
            if(qpasta - spasta >=quant)
            {
                spasta = spasta + quant;
                //250 is the price of pasta
                total_pasta = total_pasta + quant*250;
                cout<< "\n\n\t"<<quant<< "pasta is the order!";
            }
            else
            cout<<"\n\tonly"<<qpasta - spasta<<"pasta remaining in hotel ";
            break;

            case 3:
            cout<< "\n\n enter the the number of burger you want: ";
            cin>>quant;
            if(qburger - sburger >=quant)
            {
                sburger = sburger + quant;
                //200 is the price of pasta
                total_burger = total_burger + quant*200;
                cout<< "\n\n\t"<<quant<< "burger is the order!";
            }
            else
            cout<<"\n\tonly"<<qburger - sburger<<"burger remaining in hotel ";
            break;

            case 4:
            cout<< "\n\n enter the the number of noodles you want: ";
            cin>>quant;
            if(qnoodles - snoodles >=quant)
            {
                snoodles = snoodles + quant;
                //100 is the price of noodles
                total_burger = total_burger + quant*100;
                cout<< "\n\n\t"<<quant<< "noodles is the order!";
            }
            else
            cout<<"\n\tonly"<<qnoodles - snoodles<<"noodles remaining in hotel ";
            break;

            case 5:
            cout<< "\n\n enter the the number of shake you want: ";
            cin>>quant;
            if(qshake - sshake >=quant)
            {
                sshake = sshake + quant;
                //130 is the price of shake
                total_shake = total_shake + quant*130;
                cout<< "\n\n\t"<<quant<< "nshake is the order!";
            }
            else
            cout<<"\n\tonly"<<qshake - sshake<<"shake remaining in hotel ";
            break;
            case 6:
            cout<< "\n\n enter the the number of chicken you want: ";
            cin>>quant;
            if(qchicken - schicken >=quant)
            {
                schicken = schicken + quant;
                //300 is the price of chicken
                total_chicken = total_chicken + quant*300;
                cout<< "\n\n\t"<<quant<< "nchicken is the order!";
            }
            else
            cout<<"\n\tonly"<<qchicken - schicken<<"chicken remaining in hotel ";
            break;


            case 7 :
                cout<<"\n\t\tdetails of sales and collection ";
                cout<<"\n\n number of rooms we had : "<<qrooms;
                cout<<"\n\n number of rooms we gave for rent "<<srooms;
                cout<<"\n\n remaining rooms : "<<qrooms - srooms;
                cout<<"\n\n total rooms collections for the day : "<<total_rooms;


                cout<<"\n\n number of pasta we had : "<<qpasta;
                cout<<"\n\n number of pasta we gave for rent "<<spasta;
                cout<<"\n\n remaining pasta : "<<qpasta - spasta;
                cout<<"\n\n total pasta collections for the day : "<<total_pasta;

                 cout<<"\n\n number of burger we had : "<<qburger;
                cout<<"\n\n number of burger we gave for rent "<<sburger;
                cout<<"\n\n remaining burger : "<<qburger - sburger;
                cout<<"\n\n total burger collections for the day : "<<total_burger;

                 cout<<"\n\n number of noodles we had : "<<qnoodles;
                cout<<"\n\n number of noodles we gave for rent "<<snoodles;
                cout<<"\n\n remaining noodles : "<<qnoodles - snoodles;
                cout<<"\n\n total noodles collections for the day : "<<total_noodles;

                 cout<<"\n\n number of shake we had : "<<qshake;
                cout<<"\n\n number of shake we gave for rent "<<sshake;
                cout<<"\n\n remaining shake : "<<qshake - sshake;
                cout<<"\n\n total shake collections for the day : "<<total_shake;

                 cout<<"\n\n number of chicken we had : "<<qchicken;
                cout<<"\n\n number of chicken we gave for rent "<<schicken;
                cout<<"\n\n remaining chicken : "<<qchicken - schicken;
                cout<<"\n\n total chicken collections for the day : "<<total_chicken;

                cout<<"\n\n\n total collection for the day :"<<total_rooms+total_pasta+total_burger+total_noodles+total_shake+total_chicken;
                break;

            case 8:
                exit(0);
            default:
                cout<<"\n please select the number mentioned above !";








        }
        goto m;
}
