#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HoldingLightTorchCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HoldingLightTorchCondition {
    IL2CPP_REGISTER_METHOD(0x00B5AB70, bool, Validate, app::HoldingLightTorchCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::HoldingLightTorchCondition* this_ptr)
} // namespace app::classes::HoldingLightTorchCondition
