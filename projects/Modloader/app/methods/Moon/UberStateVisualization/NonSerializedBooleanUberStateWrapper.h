#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper.h>
#include <Modloader/app/structs/BooleanUberState.h>
#include <Modloader/app/structs/ControllerInput.h>

namespace app::classes::Moon::UberStateVisualization::NonSerializedBooleanUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x01999FC0, void, ctor, (app::NonSerializedBooleanUberStateWrapper * this_ptr, app::BooleanUberState* state))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsActive, (app::NonSerializedBooleanUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsActive, (app::NonSerializedBooleanUberStateWrapper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0199A010, bool, GetValue, (app::NonSerializedBooleanUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199A030, void, HandleInput, (app::NonSerializedBooleanUberStateWrapper * this_ptr, app::ControllerInput* input))
    IL2CPP_REGISTER_METHOD(0x0199A090, void, OnGui, (app::NonSerializedBooleanUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199A340, void, SetValue, (app::NonSerializedBooleanUberStateWrapper * this_ptr, bool value))
} // namespace app::classes::Moon::UberStateVisualization::NonSerializedBooleanUberStateWrapper
