//
// Created by meshate on 2019/12/3.
//

#include "test.h"
#include <vector>
#include "../base/mector.h"

int main(){
    def_test(100000);

    std::vector<int> ta;
    nogu::mector<int> tb;

    std::vector<int>::iterator pa;
    nogu::mector<int>::iterator pb;

    std::cout<<"========= push_back =========\n";

    {
        class Test{
            int a;
            std::string s;
            char c;
        } test;

        nogu::mector<Test> sb;
        std::vector<Test> sa;

        def_case(sa.push_back(test));
        def_case(sb.push_back(test));
    }




    def_case(ta.push_back(0));
    def_case(tb.push_back(0));
    def_case(ta.push_back(0x7fffffff));
    def_case(tb.push_back(0x7fffffff));
    def_case(ta.push_back(0xffffffff));
    def_case(tb.push_back(0xffffffff));


    std::cout<<"========= pop_back =========\n";
    def_case(ta.pop_back());
    def_case(tb.pop_back());

    std::cout<<"========= emplace_back =========\n";
    def_case(ta.emplace_back(0));
    def_case(tb.emplace_back(0));
    def_case(ta.emplace_back(0x7fffffff));
    def_case(tb.emplace_back(0x7fffffff));
    def_case(ta.emplace_back(0xffffffff));
    def_case(tb.emplace_back(0xffffffff));

    std::cout<<"========= clear =========\n";
    def_case(ta.clear());
    def_case(tb.clear());

    for (int j = 0; j < N; ++j) {
        ta.push_back(j);
        tb.push_back(j);
    }

    std::cout<<"========= insert =========\n";
    def_case(pa = ta.insert(ta.begin(),0));
    def_case(pb = tb.insert(tb.begin(),0));
    def_case(pa = ta.insert(ta.end()-1,0));
    def_case(pb = tb.insert(tb.end()-1,0));

    std::cout<<"========= erase =========\n";
    def_case(pa = ta.erase(ta.begin()));
    def_case(pb = tb.erase(tb.begin()));
    def_case(pa = ta.erase(ta.end()-1));
    def_case(pb = tb.erase(tb.end()-1));
}

