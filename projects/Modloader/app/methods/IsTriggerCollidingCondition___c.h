#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IsTriggerCollidingCondition_c.h>

namespace app::classes::IsTriggerCollidingCondition___c {
    IL2CPP_REGISTER_METHOD(0x00648AD0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::IsTriggerCollidingCondition_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00648C10, bool, _UpdateState_b__9_0, app::IsTriggerCollidingCondition_c* this_ptr, app::GameObject* entity)
} // namespace app::classes::IsTriggerCollidingCondition___c
