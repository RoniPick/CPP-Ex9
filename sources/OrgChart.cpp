#include "OrgChart.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

namespace ariel{

        OrgChart::OrgChart(){}

        OrgChart OrgChart::add_root(string root){
            OrgChart chart;
            return chart;
        }
        OrgChart OrgChart::add_sub(string person1, string person2){
            OrgChart chart;
            return chart;
        }

        vector<string>::iterator OrgChart::begin(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::end(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::begin_level_order(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::end_level_order(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::begin_reverse_order(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::end_reverse_order(){
            vector<string> ans;
            return ans.begin();
        }
        vector<string>::iterator OrgChart::reverse_order(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::begin_preorder(){
            vector<string> ans;
            return ans.begin();
        }

        vector<string>::iterator OrgChart::end_preorder(){
            vector<string> ans;
            return ans.begin();
        }

        string OrgChart::get_root(){
            return " ";
        }

        ostream& operator<<(ostream &out, const OrgChart &chart){
            return out;
        }
}