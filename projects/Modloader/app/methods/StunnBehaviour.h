#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::StunnBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::StunnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00671810, void, OnEnterTask, (app::StunnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00671E40, void, OnExitTask, (app::StunnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00671E70, void, OnAnimationEnd, (app::StunnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721DA8, StunnBehaviour_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00672030, void, ctor, (app::StunnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00672040, bool, _OnEnterTask_b__10_0, (app::StunnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C6D0, StunnBehaviour__OnEnterTask_b__10_0__MethodInfo)
} // namespace app::classes::StunnBehaviour
