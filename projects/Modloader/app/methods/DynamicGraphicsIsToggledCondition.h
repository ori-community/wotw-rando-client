#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicGraphicsIsToggledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DynamicGraphicsIsToggledCondition {
    IL2CPP_REGISTER_METHOD(0x00BEAA90, bool, Validate, (app::DynamicGraphicsIsToggledCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DynamicGraphicsIsToggledCondition * this_ptr))
} // namespace app::classes::DynamicGraphicsIsToggledCondition
