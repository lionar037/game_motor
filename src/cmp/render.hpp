#pragma once 
#include <cstdint>
#include <vector>
#include <string>
//#include <picoPNG/src/picopng.hpp>
#include <cmp/component.hpp>
#include <util/typealiases.hpp>


namespace ECS{

	struct RenderComponent_t : public Component_t
	{
        explicit RenderComponent_t (EntityID_t eid)
        : Component_t(eid)
        {
        }

		void loadFromFile(const std::string filename);

		uint32_t w { 0 } , h { 0 };
		std::vector<uint32_t>sprite{};
		
	
	};
}