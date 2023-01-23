#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerFacingCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PlayerFacingCondition {
    IL2CPP_REGISTER_METHOD(0x0140EB90, bool, Validate, (app::PlayerFacingCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerFacingCondition * this_ptr))
} // namespace app::classes::PlayerFacingCondition
