#pragma once
#include <vector>
#include <iostream>

namespace ECS{

  template<typename T>
    using Vect_t = std::vector<T>;
    using EntityID_t = std::size_t;
    using ComponentID_t =  std::size_t;

}
