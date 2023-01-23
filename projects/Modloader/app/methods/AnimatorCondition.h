#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimatorCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AnimatorCondition {
    IL2CPP_REGISTER_METHOD(0x00504AA0, bool, Validate, (app::AnimatorCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00504BB0, app::String*, GetNiceName, (app::AnimatorCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AnimatorCondition * this_ptr))
} // namespace app::classes::AnimatorCondition
