#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrainBehaviour.h>
#include <Modloader/app/structs/Brain.h>

namespace app::classes::Moon::BrainBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CC04B0, bool, get_IsOnCooldown, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Brain*, get_Brain, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartBehaviour, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, EndCondition, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetScore, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetBehaviour, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFixedUpdate, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC04C0, void, OnEnable, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC0640, void, OnDisable, (app::BrainBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::BrainBehaviour * this_ptr))
} // namespace app::classes::Moon::BrainBehaviour
