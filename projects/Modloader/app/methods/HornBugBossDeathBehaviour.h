#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/HornBugBossDeathBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HornBugBossDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::HornBugBossDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B61A40, void, OnEnterTask, (app::HornBugBossDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::HornBugBossDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B61C80, void, OnAnimationEnd, (app::HornBugBossDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::HornBugBossDeathBehaviour * this_ptr))
} // namespace app::classes::HornBugBossDeathBehaviour
