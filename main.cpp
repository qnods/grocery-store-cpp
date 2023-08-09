#include "grocery.hpp"

using namespace std;

int main(){

    bool io_status = true;
    vector<string> grocery_list;

    while(io_status ==  true){
        // turn on main menu
        string user_intent = main_menu();

        // process user option
        if(user_intent == "1"){
            vector<string> new_list;
            bool item_checker = true;

            while(item_checker == true){
                add_item(new_list, item_checker);
            }

            grocery_list = new_list;

        } else if(user_intent == "2"){
            vector<string> updated_list;
            bool item_checker = true;

            while(item_checker == true){
                add_item(updated_list, item_checker);
            }

            update_list(updated_list,grocery_list);

        } else if(user_intent == "3"){
            print_item(grocery_list);

        } else if(user_intent == "4"){
            string ref_item;

            cout << "what item you want to check ?" <<endl;

            cin >> ref_item;

            int ref_item_count  = count_item(grocery_list, ref_item);

            cout << ref_item_count << " " << ref_item << "(s) found from list" << endl;


        } else {
            break;
        }

        // end of program and return to main menu
    }



    return 0;
}