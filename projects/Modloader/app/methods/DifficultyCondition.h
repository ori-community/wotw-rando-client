#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DifficultyCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DifficultyCondition {
    IL2CPP_REGISTER_METHOD(0x00B91AA0, bool, Validate, app::DifficultyCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DifficultyCondition* this_ptr)
} // namespace app::classes::DifficultyCondition
