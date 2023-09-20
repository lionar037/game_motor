// #include <memory>
// #include <string>
// #include <vector>
// #include <cmp/entity.hpp>
// #include <cmp/physics.hpp>
// #include <util/typealiases.hpp>
// #include <util/gamecontext.hpp>

#include <man/entitymanager.hpp>

extern "C"
	{
		#include <tinyPTC/src/tinyptc.h>
	}


namespace ECS
{

void EntityManager_t::createEntity(uint32_t x,uint32_t y,uint32_t c, uint32_t d,uint32_t color)
		{
			std::cout << "  createEntity( uint32_t ,uint32_t ,uint32_t, uint32_t , std::string) \n" ;
			ptc_open("Game" , x , y );

		}



		void EntityManager_t::createEntity(uint32_t x,uint32_t y,std::string str)
		{
				std::cout << "  createEntity( uint32_t ,uint32_t , std::string) \n" ;
				
		//auto& e =m_Entity.emplace_back(str);

		 //auto& ph = ph_c.createPhysicsComponent();
		 //e.phy = &ph;
		//ph.x = x; 
		 //ph.y = y;

		};
		

}