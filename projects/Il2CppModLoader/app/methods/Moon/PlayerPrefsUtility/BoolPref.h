#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::PlayerPrefsUtility::BoolPref {
    IL2CPP_REGISTER_METHOD(0x00C3D150, void, ctor, (app::BoolPref * this_ptr, app::String* _key, bool _default_value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_value, (app::BoolPref * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3D1D0, void, set_value, (app::BoolPref * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C3D1F0, bool, op_Implicit, (app::BoolPref * _pref))
    IL2CPP_REGISTER_METHOD(0x00C3D210, app::String*, ToString, (app::BoolPref * this_ptr))
} // namespace app::classes::Moon::PlayerPrefsUtility::BoolPref
