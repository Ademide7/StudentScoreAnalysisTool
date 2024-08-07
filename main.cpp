#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>

using namespace  std;

// array

constexpr int arr [2] =  {1,2};
std::pmr::vector<int> vec = {1,2};
stack<int> stk;
queue<int> que;
unordered_set<int> num ({1,2});
unordered_map<int, string> mapNum;


// sorting store list in batches in another list a analyse
// search index by arranging in a order and search
//top k element  sort and get the last k elements
// slinding window , take the main out an screen
// back tracking back and forth loops recursive calls


int main()
{
    num.insert(2);
    num.insert(3);
    num.erase(2);

    //// generating a outcomes from an initial value use nested for loop.

    /// printing out next value of a sting od numbers with same similar digits.

    string initial_valstr;
    std::cout << "Please enter a value :::: ";
    std::cin >> initial_valstr;

    // Create a map of strings to integers
    map<string, int> mp;

    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = map;



    string result;
    // to do initial val

    int initial_val =  stoi(initial_valstr);

    std::vector<char> arr ;
    int check_count = 0;

    const time_t tm  = time(nullptr);

    auto time =  localtime(&tm);
    std::cout << time;

    for(auto item : initial_valstr) {
        arr.push_back(item);
    }

    const int arr_size = std::size(initial_valstr);


    int working_val =  initial_val;

    for(int i = 1 ; i > 0 ; i++)
    {
        if(initial_val == working_val) {
            working_val++;
            continue;
        }
        if((to_string(working_val).length()) > (to_string(initial_val)).length()) return 0;

        check_count = 0;
        for(char item : arr)
        {
            std::cout << item << " " <<working_val << endl;
            if (to_string(working_val).find(item) == std::string::npos)
            {
                std::cout << item << "Entered break" << endl;
                break;
            }
            check_count++;
        }

        if(check_count == arr_size ) {
            std::cout << working_val << endl;
            return 0;
        }
        working_val++;
    }


  // mapNum.insert({0,"Femi"});
   // mapNum.insert({1,"Temi"});
   // mapNum.erase(0);
    //std::cout << "Hello, World!" << num[1] << mapNum[0] << std::endl;
    return 0;
}
