#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/EntityTask_c.h>

namespace app::classes::Moon::BehaviourSystem::EntityTask___c {
    IL2CPP_REGISTER_METHOD(0x00CB7060, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityTask_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__37_0, app::EntityTask_c* this_ptr, app::EntityTask* _p0_, app::BehaviourStatus__Enum _p1_)
} // namespace app::classes::Moon::BehaviourSystem::EntityTask___c
