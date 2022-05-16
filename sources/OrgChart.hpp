#include <string>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

namespace ariel{
    class OrgChart{
    private:
        
    public:
        OrgChart();
        // ~OrgChart();

        OrgChart add_root(string root);
        OrgChart add_sub(string person1, string person2);
        vector<string>::iterator begin();
        vector<string>::iterator end();

        vector<string>::iterator begin_level_order();
        vector<string>::iterator end_level_order();
        vector<string>::iterator begin_reverse_order();
        vector<string>::iterator end_reverse_order();
        vector<string>::iterator begin_preorder();
        vector<string>::iterator end_preorder();

        string get_root();

        friend ostream& operator<<(ostream &out, const OrgChart &chart);

    };
    
    
}