#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#include <Modloader/app/structs/StaticEntityLookBehaviour.h>

namespace app::classes::StaticEntityLookBehaviour {
    IL2CPP_REGISTER_METHOD(0x009B6EB0, app::StaticEntityLocomotion*, get_Locomotion, app::StaticEntityLookBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009B6FE0, void, OnEnter, app::StaticEntityLookBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009B70C0, app::BehaviourStatus__Enum, OnExecute, app::StaticEntityLookBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::StaticEntityLookBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::StaticEntityLookBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::StaticEntityLookBehaviour* this_ptr)
} // namespace app::classes::StaticEntityLookBehaviour
