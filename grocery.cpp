#include "grocery.hpp"

using namespace std;

// ask users
string main_menu(){
    string user_intent = "0";

    while(user_intent != "1" && 
          user_intent != "2" &&
          user_intent != "3" &&
          user_intent != "4" &&
          user_intent != "5"){
        cout << "what you want to do ?" << endl;
        cout << "1. Create Grocery List" << endl;
        cout << "2. Update Grocery List" << endl;
        cout << "3. Print Grocery List" << endl;
        cout << "4. Check Item" << endl;
        cout << "5. Exit" << endl;
        cin >> user_intent;

        if (user_intent != "1" && 
            user_intent != "2" &&
            user_intent != "3" &&
            user_intent != "4" &&
            user_intent != "5") {
            cout << "Please choose 1 to 5 only " << endl;
            cout << "Let me ask you again " << endl;
            cout << "-------------------------" << endl;

        }
    }

    return user_intent;


}

// print list
void print_item(const vector<string> &item_list){
    for(string item:item_list){
        cout << item << endl;
    }
}

// create list
void add_item(vector<string> &new_list, bool &checker){
    string new_item;
    cout << "enter new item: " << endl;
    cout << "type fin when you done " << endl;
    cin >> new_item;

    // tell function what to do based on new item added
    // if new item is a fin, end loop
    if(new_item != "fin"){
        new_list.push_back(new_item);
    } else {
        cout << "finish inputting" << endl;
        checker = false;
    }
}


// update list
void update_list(vector<string> old_list, vector<string> &new_list){
    for(string item: old_list){
        new_list.push_back(item);
    }
}

int count_item(const vector<string> &item_list, string reference){
    int item_count = 0;

    for(string item:item_list){
        if(item == reference){
            item_count +=1;
        }
    }

    return item_count;
}
