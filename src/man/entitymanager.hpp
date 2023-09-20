#pragma once

#include <algorithm>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#include <cmp/entity.hpp>
#include <cmp/physics.hpp>
#include <util/typealiases.hpp>
#include <util/gamecontext.hpp>
extern "C"
	{
		#include <tinyPTC/src/tinyptc.h>
	}
	
namespace ECS
{

struct PhysicsComponent_t;

	struct  EntityManager_t : public GameContext_t 
	{
		explicit EntityManager_t(){
				std::cout << " EntityManager_t() \n" ;
		};

		~EntityManager_t(){
				std::cout << " ~EntityManager_t() \n" ;

			ptc_close();
		};

	 	Vect_t<Entity_t>& 				getEntities()  			override 	{ return m_Entity; };
		const   Vect_t<Entity_t>&    	getEntities()	const 	override	{ return m_Entity; };
        std::vector<PhysicsComponent_t>&    getPhysicsComponent()override{return pc;};
        const   std::vector<PhysicsComponent_t>&    getPhysicsComponent() const override{return pc;};

void createEntity(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);

		// void createEntity(uint32_t x,uint32_t y,uint32_t c, uint32_t d,uint32_t color)
		// {
		// 	std::cout << "  createEntity( uint32_t ,uint32_t ,uint32_t, uint32_t , std::string) \n" ;
		// 	ptc_open("Game" , x , y );

		// };

		void createEntity(uint32_t,uint32_t,std::string);
		

		 Vect_t<Entity_t> m_Entity { } ;
		 PhysicsComponent_t ph_c{0};
		 std::vector<PhysicsComponent_t> pc;
	};

}

