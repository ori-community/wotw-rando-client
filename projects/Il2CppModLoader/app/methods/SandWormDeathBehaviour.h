#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SandWormDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C0BE80, void, OnInitializeTask, (app::SandWormDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C0BF80, void, OnEnterTask, (app::SandWormDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C0C3D0, void, OnSequenceEnd, (app::SandWormDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047668B0, SandWormDeathBehaviour_OnSequenceEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C0C5C0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SandWormDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C0C910, void, OnExitTask, (app::SandWormDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C0C940, void, ctor, (app::SandWormDeathBehaviour * this_ptr))
}
