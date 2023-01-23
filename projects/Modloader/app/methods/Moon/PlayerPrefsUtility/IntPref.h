#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IntPref.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::PlayerPrefsUtility::IntPref {
    IL2CPP_REGISTER_METHOD(0x00C3D400, void, ctor, (app::IntPref * this_ptr, app::String* _key, int32_t _default_value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_value, (app::IntPref * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3D480, void, set_value, (app::IntPref * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00C3D4A0, int32_t, op_Implicit, (app::IntPref * _pref))
    IL2CPP_REGISTER_METHOD(0x00C3D4C0, app::String*, ToString, (app::IntPref * this_ptr))
} // namespace app::classes::Moon::PlayerPrefsUtility::IntPref
