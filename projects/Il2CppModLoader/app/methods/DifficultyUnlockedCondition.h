#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DifficultyUnlockedCondition {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Validate, (app::DifficultyUnlockedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DifficultyUnlockedCondition * this_ptr))
} // namespace app::classes::DifficultyUnlockedCondition
