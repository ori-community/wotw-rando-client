#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::GameObject*, get_ChaseTarget, (app::ChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_ChaseTarget, (app::ChaseBehaviour * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x00CC41B0, void, OnExecute, (app::ChaseBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x00CC4290, void, OnUpdateBehaviour, (app::ChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::ChaseBehaviour * this_ptr))
} // namespace app::classes::Moon::ChaseBehaviour
