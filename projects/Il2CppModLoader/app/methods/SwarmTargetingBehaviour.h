#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwarmTargetingBehaviour {
    IL2CPP_REGISTER_METHOD(0x01825920, void, Start, (app::SwarmTargetingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01825AC0, void, OnEnter, (app::SwarmTargetingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01825BB0, void, AssignLocomotionData, (app::SwarmTargetingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01825CB0, app::BehaviourStatus__Enum, OnExecute, (app::SwarmTargetingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01825F10, void, OnExit, (app::SwarmTargetingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01825FB0, app::Vector3, GetAtttackStartPositionSmart, (app::SwarmTargetingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugTempMarkPoint, (app::SwarmTargetingBehaviour * this_ptr, app::Vector3 point, app::Color color))
    IL2CPP_REGISTER_METHOD(0x018269C0, void, ctor, (app::SwarmTargetingBehaviour * this_ptr))
}
