#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControllerInput.h>
#include <Modloader/app/structs/FloatUberState.h>
#include <Modloader/app/structs/NonSerializedFloatUberStateWrapper.h>

namespace app::classes::Moon::UberStateVisualization::NonSerializedFloatUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::NonSerializedFloatUberStateWrapper* this_ptr, app::FloatUberState* state)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, app::NonSerializedFloatUberStateWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, app::NonSerializedFloatUberStateWrapper* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0199A7C0, float, GetValue, app::NonSerializedFloatUberStateWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199A7E0, void, HandleInput, app::NonSerializedFloatUberStateWrapper* this_ptr, app::ControllerInput* input)
    IL2CPP_REGISTER_METHOD(0x0199A870, void, OnGui, app::NonSerializedFloatUberStateWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199AAB0, void, SetValue, app::NonSerializedFloatUberStateWrapper* this_ptr, float value)
} // namespace app::classes::Moon::UberStateVisualization::NonSerializedFloatUberStateWrapper
