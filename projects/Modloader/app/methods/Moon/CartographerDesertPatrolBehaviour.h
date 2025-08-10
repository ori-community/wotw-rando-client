#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::CartographerDesertPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CC2B10, void, OnEntityInitialized, app::CartographerDesertPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC2BD0, void, OnEnter, app::CartographerDesertPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::CartographerDesertPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CC2C80, app::Vector2, get_MovingDirection, app::CartographerDesertPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC2E00, app::Transform*, get_GoalTransform, app::CartographerDesertPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC2F90, void, FinishedIdle, app::CartographerDesertPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC2FF0, void, SwitchState, app::CartographerDesertPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC30C0, void, PlayBreakup, app::CartographerDesertPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC3380, app::BehaviourStatus__Enum, OnExecute, app::CartographerDesertPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CC3870, void, ctor, app::CartographerDesertPatrolBehaviour* this_ptr)
} // namespace app::classes::Moon::CartographerDesertPatrolBehaviour
