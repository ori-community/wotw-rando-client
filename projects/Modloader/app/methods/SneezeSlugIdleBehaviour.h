#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SneezeSlugIdleBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>

namespace app::classes::SneezeSlugIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::SneezeSlugIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDFAF0, void, OnExecute, (app::SneezeSlugIdleBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x00EDFC40, void, OnUpdateBehaviour, (app::SneezeSlugIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (app::SneezeSlugIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::SneezeSlugIdleBehaviour * this_ptr))
} // namespace app::classes::SneezeSlugIdleBehaviour
