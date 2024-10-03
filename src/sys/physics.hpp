#pragma once

namespace ECS {
struct EntityManager_t;
 struct PhysicsSystem_t
    {
        explicit PhysicsSystem_t()=default;
        bool update(EntityManager_t& em){return true;}
    };
}
