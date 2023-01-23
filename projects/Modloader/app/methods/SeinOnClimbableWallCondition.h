#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinOnClimbableWallCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlatformBehaviour.h>

namespace app::classes::SeinOnClimbableWallCondition {
    IL2CPP_REGISTER_METHOD(0x008AF1E0, bool, Validate, (app::SeinOnClimbableWallCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008AF400, bool, IsSafeTestPassed, (app::SeinOnClimbableWallCondition * this_ptr, app::PlatformBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::SeinOnClimbableWallCondition * this_ptr))
} // namespace app::classes::SeinOnClimbableWallCondition
