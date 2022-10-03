#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_TurningAnimationEntry, (app::TurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA3800, void, set_TurningAnimationEntry, (app::TurningBehaviour * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00D1F560, app::TurningAnimation*, get_CurrentTurningAnimation, (app::TurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1F5C0, void, OnInitializeTask, (app::TurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1F6A0, void, OnEnterTask, (app::TurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1FBD0, app::BehaviourStatus__Enum, OnExecuteTask, (app::TurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1FCF0, void, OnExitTask, (app::TurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1FDE0, void, OnAnimationEnd, (app::TurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702550, TurningBehaviour_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00672040, bool, ContinuePlaying, (app::TurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474CCE8, TurningBehaviour_ContinuePlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D1FFA0, void, OnDrawGizmos, (app::TurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D201A0, void, ctor, (app::TurningBehaviour * this_ptr))
} // namespace app::classes::Moon::TurningBehaviour
