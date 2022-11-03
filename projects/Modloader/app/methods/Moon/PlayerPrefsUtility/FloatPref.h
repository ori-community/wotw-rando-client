#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::PlayerPrefsUtility::FloatPref {
    IL2CPP_REGISTER_METHOD(0x00C3D220, void, ctor, (app::FloatPref * this_ptr, app::String* _key, float _default_value))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_value, (app::FloatPref * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3D2A0, void, set_value, (app::FloatPref * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C3D3B0, float, op_Implicit, (app::FloatPref * _pref))
    IL2CPP_REGISTER_METHOD(0x00C3D3D0, app::String*, ToString, (app::FloatPref * this_ptr))
} // namespace app::classes::Moon::PlayerPrefsUtility::FloatPref
