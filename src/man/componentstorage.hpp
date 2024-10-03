#pragma once
#include <vector>
#include <iostream>

namespace ECS
{
    struct ComponentStorage_t
    {
        explicit ComponentStorage_t(std::size_t initialsize){
            std::cout << " ComponentStorage_t() \n" ;
            };
    private:

    };

}
