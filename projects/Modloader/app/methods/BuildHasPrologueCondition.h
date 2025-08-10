#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuildHasPrologueCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::BuildHasPrologueCondition {
    IL2CPP_REGISTER_METHOD(0x00815AB0, bool, Validate, app::BuildHasPrologueCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BuildHasPrologueCondition* this_ptr)
} // namespace app::classes::BuildHasPrologueCondition
