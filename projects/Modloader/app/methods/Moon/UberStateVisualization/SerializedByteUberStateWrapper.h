#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UberStateVisualization::SerializedByteUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SerializedByteUberStateWrapper * this_ptr, app::ISerializedUberState* state))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (app::SerializedByteUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (app::SerializedByteUberStateWrapper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x030BE250, uint8_t, GetValue, (app::SerializedByteUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (app::SerializedByteUberStateWrapper * this_ptr, app::ControllerInput* input))
    IL2CPP_REGISTER_METHOD(0x030BE280, void, OnGui, (app::SerializedByteUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BE550, void, SetValue, (app::SerializedByteUberStateWrapper * this_ptr, uint8_t value))
} // namespace app::classes::Moon::UberStateVisualization::SerializedByteUberStateWrapper
