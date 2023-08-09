#ifndef GROCERY_H
#define GROCERY_H

#include <iostream>
#include <vector>
#include <string> // activate this if use data type string

using namespace std;

// declare before initialize function
string main_menu();
void update_list(vector<string> old_list, vector<string> &new_list);
void add_item(vector<string> &new_list, bool &checker);
void print_item(const vector<string> &item_list);
int count_item(const vector<string> &item_list, string reference);

#endif