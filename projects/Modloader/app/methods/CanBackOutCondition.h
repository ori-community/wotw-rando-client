#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CanBackOutCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanBackOutCondition {
    IL2CPP_REGISTER_METHOD(0x00B21E90, bool, Validate, (app::CanBackOutCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanBackOutCondition * this_ptr))
} // namespace app::classes::CanBackOutCondition
