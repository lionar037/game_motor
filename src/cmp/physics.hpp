#pragma once
#include <cstdint>
#include <cmp/component.hpp>

namespace ECS{

struct Component_t ;

    struct  PhysicsComponent_t :public Component_t
    {
	public :
        explicit PhysicsComponent_t(EntityID_t eid)
        : Component_t(eid)
        {
            std::cout << " PhysicsComponent_t( EntityID_t ) \n\t- Component_t { }\n" ;

        };


//    	std::shared_ptr<Component_t> createPhysicsComponent(){
        	// Crea un nuevo componente físico y lo devuelve como un puntero compartido
        	//return std::make_shared<Component_t>(entityID);
//return std::make_shared<Component_t>(getEntityID());
//}


 	 auto&  createPhysicsComponent(){
         //auto& uint32_t createPhysicsComponent(){
             Component_t c;
            return {c};
         }

	private:
        	uint32_t x {0} , y {0};
       	 	uint32_t vx {1} , vy {1};
    };
}

