// https://www.youtube.com/watch?v=exvGWo1PRfA&list=PLmxqg54iaXrhTqZxylLPo0nov0OoyJqiS&index=32
//
extern "C" {
  //  #include <tinyPTC/src/tinyptc.h>
  }
#include <cstdint>
#include <iostream>
//#include <memory>
#include <man/entitymanager.hpp>
// #include <util/gamecontext.hpp>
// #include <sys/collision.hpp>
// #include <sys/physics.hpp>
// #include <sys/rendersystem.hpp>


constexpr uint32_t kSCRWIDTH { 640 };
constexpr uint32_t kSCRHEIGHT { 360 };

int main(void){
  
   try{
        ECS::EntityManager_t entityMan;

        
        entityMan.createEntity(320,240,16,16,0x00ff00ff);
/*
        entityMan.createEntity(80,10,"assets/ninja.png");
      
        const ECS::RenderSystem_t render{ kSCRWIDTH , kSCRHEIGHT , entityMan };
        
       // ECS::PhysicsSystem_t Physics;
       // ECS::CollisionSystem_t Collision;
        
        //for(int i = 0;i<1000000 ;i++)
        while( render.update() )
          //render.update(entityMan);
          //)
        {
          //render.update(entityMan);
         //Physics.update(entityMan);
         //Collision.update(entityMan);
        }*/
   }
   catch(...){
     std::cout<< "break program"<<std::endl;
   }

return 0;
}





