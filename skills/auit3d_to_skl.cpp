#include <iostream>
#include <string>
#include <map>

int main()
{
    std::string key[] = {
        "wait ",
        "EFF_H1",
        "EFF_H2",
        "EFF_LA1",
        "EFF_LA2",
        "EFF_LA3",
        "EFF_LA4",
        "EFF_RA1",
        "EFF_RA2",
        "EFF_RA3",
        "EFF_RA4",
        "EFF_LL1",
        "EFF_LL2",
        "EFF_LL3",
        "EFF_LL4",
        "EFF_LL5",
        "EFF_LL6",
        "EFF_LL7",
        "EFF_RL1",
        "EFF_RL2",
        "EFF_RL3",
        "EFF_RL4",
        "EFF_RL5",
        "EFF_RL6",
        "EFF_RL7",
        "EFF_NUM"};
    int value[26];

    int sum = 0;
    while (1)
    {
        for (int i = 0; i < 25; i++)
            std::cin >> value[i];
        std::cout << "#state " << sum++ << std::endl;
        std::cout << "STARTSTATE" << std::endl;
        std::cout << "settar";
        for (int i = 1; i < 25; i++)
            std::cout << " " << key[i] << " " << value[i];

        std::cout << std::endl
                  << "wait " << (double)value[0] / 1000 << " end" << std::endl
                  << "ENDSTATE" << std::endl
                  << std::endl;
    }

    return 0;
}