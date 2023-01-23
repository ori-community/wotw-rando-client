#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StepMovementBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>

namespace app::classes::StepMovementBehaviour {
    IL2CPP_REGISTER_METHOD(0x006505D0, void, OnInitialize, (app::StepMovementBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00650790, void, OnExecute, (app::StepMovementBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::StepMovementBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006507A0, void, OnEndBehaviour, (app::StepMovementBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (app::StepMovementBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::StepMovementBehaviour * this_ptr))
} // namespace app::classes::StepMovementBehaviour
