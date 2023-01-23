#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightTorchIsSolidCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LightTorchIsSolidCondition {
    IL2CPP_REGISTER_METHOD(0x00FA2770, bool, Validate, (app::LightTorchIsSolidCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LightTorchIsSolidCondition * this_ptr))
} // namespace app::classes::LightTorchIsSolidCondition
