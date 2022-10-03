#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HornBugBossDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::HornBugBossDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B61A40, void, OnEnterTask, (app::HornBugBossDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::HornBugBossDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B61C80, void, OnAnimationEnd, (app::HornBugBossDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047518B8, HornBugBossDeathBehaviour_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::HornBugBossDeathBehaviour * this_ptr))
} // namespace app::classes::HornBugBossDeathBehaviour
