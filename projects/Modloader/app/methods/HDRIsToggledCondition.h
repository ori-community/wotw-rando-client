#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HDRIsToggledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HDRIsToggledCondition {
    IL2CPP_REGISTER_METHOD(0x0109B310, bool, Validate, (app::HDRIsToggledCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HDRIsToggledCondition * this_ptr))
} // namespace app::classes::HDRIsToggledCondition
