#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NotCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::NotCondition {
    IL2CPP_REGISTER_METHOD(0x0060C300, bool, Validate, (app::NotCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NotCondition * this_ptr))
} // namespace app::classes::NotCondition
