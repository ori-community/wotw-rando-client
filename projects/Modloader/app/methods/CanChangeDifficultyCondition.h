#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanChangeDifficultyCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanChangeDifficultyCondition {
    IL2CPP_REGISTER_METHOD(0x00B21F40, bool, Validate, app::CanChangeDifficultyCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CanChangeDifficultyCondition* this_ptr)
} // namespace app::classes::CanChangeDifficultyCondition
