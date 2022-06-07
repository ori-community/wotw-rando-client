#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::PlayerPrefsUtility::StringArrayPref {
    IL2CPP_REGISTER_METHOD(0x00C3D4F0, void, ctor, (app::StringArrayPref * this_ptr, app::String * _key, app::String__Array * _default_value))
    IL2CPP_REGISTER_METHOD(0x00C3D650, app::String *, GetStringFromArray, (app::StringArrayPref * this_ptr, app::String__Array * array))
    IL2CPP_REGISTER_METHOD(0x00C3D8D0, app::String__Array *, GetArrayFromString, (app::StringArrayPref * this_ptr, app::String * val))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String__Array *, get_value, (app::StringArrayPref * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3D9B0, void, set_value, (app::StringArrayPref * this_ptr, app::String__Array * value))
    IL2CPP_REGISTER_METHOD(0x00C3D9F0, app::String__Array *, op_Implicit, (app::StringArrayPref * pref))
    IL2CPP_REGISTER_METHOD(0x00C3DA10, app::String *, ToString, (app::StringArrayPref * this_ptr))
}
