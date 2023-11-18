#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundMoveInDirectionBehaviourNew.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEntityLocomotion.h>

namespace app::classes::Moon::GroundMoveInDirectionBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x014919F0, void, OnEnter, (app::GroundMoveInDirectionBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01492060, app::BehaviourStatus__Enum, OnExecute, (app::GroundMoveInDirectionBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01492230, void, OnExit, (app::GroundMoveInDirectionBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0111C7B0, app::IEntityLocomotion*, get_Locomotion, (app::GroundMoveInDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014922E0, void, ctor, (app::GroundMoveInDirectionBehaviourNew * this_ptr))
} // namespace app::classes::Moon::GroundMoveInDirectionBehaviourNew
