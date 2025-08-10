#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/HornBugBossDeathBehaviour_new.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HornBugBossDeathBehaviour_new {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, app::HornBugBossDeathBehaviour_new* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B61E60, void, OnEnterTask, app::HornBugBossDeathBehaviour_new* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, app::HornBugBossDeathBehaviour_new* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B620A0, void, OnAnimationEnd, app::HornBugBossDeathBehaviour_new* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::HornBugBossDeathBehaviour_new* this_ptr)
} // namespace app::classes::HornBugBossDeathBehaviour_new
