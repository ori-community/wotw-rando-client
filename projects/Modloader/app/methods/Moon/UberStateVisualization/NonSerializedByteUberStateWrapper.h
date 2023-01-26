#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NonSerializedByteUberStateWrapper.h>
#include <Modloader/app/structs/ByteUberState.h>
#include <Modloader/app/structs/ControllerInput.h>

namespace app::classes::Moon::UberStateVisualization::NonSerializedByteUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NonSerializedByteUberStateWrapper * this_ptr, app::ByteUberState* state))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (app::NonSerializedByteUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (app::NonSerializedByteUberStateWrapper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0199A400, uint8_t, GetValue, (app::NonSerializedByteUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (app::NonSerializedByteUberStateWrapper * this_ptr, app::ControllerInput* input))
    IL2CPP_REGISTER_METHOD(0x0199A420, void, OnGui, (app::NonSerializedByteUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199A700, void, SetValue, (app::NonSerializedByteUberStateWrapper * this_ptr, uint8_t value))
} // namespace app::classes::Moon::UberStateVisualization::NonSerializedByteUberStateWrapper
