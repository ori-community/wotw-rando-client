#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UberStateVisualization::NonSerializedIntUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NonSerializedIntUberStateWrapper * this_ptr, app::IntUberState* state))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (app::NonSerializedIntUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (app::NonSerializedIntUberStateWrapper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0199AB70, int32_t, GetValue, (app::NonSerializedIntUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199AB90, void, HandleInput, (app::NonSerializedIntUberStateWrapper * this_ptr, app::ControllerInput* input))
    IL2CPP_REGISTER_METHOD(0x0199AC00, void, OnGui, (app::NonSerializedIntUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199AE30, void, SetValue, (app::NonSerializedIntUberStateWrapper * this_ptr, int32_t value))
} // namespace app::classes::Moon::UberStateVisualization::NonSerializedIntUberStateWrapper
