#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HornBugBossDeathBehaviour_new {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::HornBugBossDeathBehaviour_new * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B61E60, void, OnEnterTask, (app::HornBugBossDeathBehaviour_new * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::HornBugBossDeathBehaviour_new * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B620A0, void, OnAnimationEnd, (app::HornBugBossDeathBehaviour_new * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472DFD0, HornBugBossDeathBehaviour_new_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::HornBugBossDeathBehaviour_new * this_ptr))
}
