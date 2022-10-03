#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinLevelUpDownDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x010237D0, void, ctor, (app::SeinLevelUpDownDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x010239B0, void, OnSelectedFixedUpdate, (app::SeinLevelUpDownDebugMenuItem * this_ptr))
} // namespace app::classes::SeinLevelUpDownDebugMenuItem
