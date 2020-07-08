#pragma once
#include <cstdint>
#include <memory>
//#include <util/gamecontext.hpp>
//#include <util/typealiases.hpp>
//#include <man/entitymanager.hpp>

extern "C"{
	#include <tinyPTC/src/tinyptc.h>

}


namespace ECS{

	//foward declaration
	struct EntityManager_t;
	struct GameContext_t;
	

	struct RenderSystem_t
	{
	explicit RenderSystem_t(uint32_t x ,uint32_t y,EntityManager_t& em )
	: m_h (x) , m_w(y) , m_EntMan{em} 
	{
		std::cout << " RenderSystem_t() \n" ;
	};
		~RenderSystem_t()
		{
			std::cout << " ~RenderSystem_t() \n" ;

			ptc_close();
		};

		bool update(const GameContext_t& gamecontext) const{
			
			return 1;
		};
		bool update() const
		{
			if(!ptc_process_events() ){
				return true ;
			}
			else {
				return true;
			}
		};

		void drawAllEntities(const Vect_t<Entity_t>&)const;
		void drawEntity(const Entity_t&)const;
		
		static constexpr uint32_t kR = 0x00FF0000;

        private:
			const uint32_t m_w { 0 } , m_h { 0 };       
			std::unique_ptr<uint32_t[]> m_framebuffer{ nullptr };
			EntityManager_t& m_EntMan;
	};
}//end namespace ECS
