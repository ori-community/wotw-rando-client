#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IsKeyboardSelectedCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsKeyboardSelectedCondition {
    IL2CPP_REGISTER_METHOD(0x00646840, bool, Validate, (app::IsKeyboardSelectedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsKeyboardSelectedCondition * this_ptr))
} // namespace app::classes::IsKeyboardSelectedCondition
