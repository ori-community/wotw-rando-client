#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1StartBehaviour.h>

namespace app::classes::PetrifiedOwlBossFight1StartBehaviour {
    IL2CPP_REGISTER_METHOD(0x0176C490, void, OnEnter, app::PetrifiedOwlBossFight1StartBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, app::PetrifiedOwlBossFight1StartBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, app::PetrifiedOwlBossFight1StartBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0176C810, void, HandleBrokenTimelineState, app::PetrifiedOwlBossFight1StartBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, app::PetrifiedOwlBossFight1StartBehaviour* this_ptr)
} // namespace app::classes::PetrifiedOwlBossFight1StartBehaviour
