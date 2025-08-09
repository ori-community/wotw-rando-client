#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanViewProfilesCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanViewProfilesCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, app::CanViewProfilesCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CanViewProfilesCondition* this_ptr)
} // namespace app::classes::CanViewProfilesCondition
