#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::SerializedFloatUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SerializedFloatUberStateWrapper * this_ptr, app::ISerializedUberState * state))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (app::SerializedFloatUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (app::SerializedFloatUberStateWrapper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x030BE610, float, GetValue, (app::SerializedFloatUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BE640, void, HandleInput, (app::SerializedFloatUberStateWrapper * this_ptr, app::ControllerInput * input))
    IL2CPP_REGISTER_METHOD(0x030BE6C0, void, OnGui, (app::SerializedFloatUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BE900, void, SetValue, (app::SerializedFloatUberStateWrapper * this_ptr, float value))
}
