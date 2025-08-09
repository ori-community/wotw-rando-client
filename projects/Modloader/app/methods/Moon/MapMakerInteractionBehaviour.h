#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MapMakerInteractionBehaviour.h>

namespace app::classes::Moon::MapMakerInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110E920, app::GroundEntityLocomotion*, get_Locomotion, app::MapMakerInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110EA50, void, OnEnter, app::MapMakerInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0110EB30, app::BehaviourStatus__Enum, OnExecute, app::MapMakerInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::MapMakerInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::MapMakerInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::MapMakerInteractionBehaviour* this_ptr)
} // namespace app::classes::Moon::MapMakerInteractionBehaviour
