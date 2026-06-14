#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControllerInput.h>
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/SerializedBoolUberStateWrapper.h>

namespace app::classes::Moon::UberStateVisualization::SerializedBoolUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x01999FC0, void, ctor, app::SerializedBoolUberStateWrapper* this_ptr, app::ISerializedUberState* state)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsActive, app::SerializedBoolUberStateWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsActive, app::SerializedBoolUberStateWrapper* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0199B1B0, bool, GetValue, app::SerializedBoolUberStateWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199B1E0, void, HandleInput, app::SerializedBoolUberStateWrapper* this_ptr, app::ControllerInput* input)
    IL2CPP_REGISTER_METHOD(0x0199B240, void, OnGui, app::SerializedBoolUberStateWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199B4F0, void, SetValue, app::SerializedBoolUberStateWrapper* this_ptr, bool value)
} // namespace app::classes::Moon::UberStateVisualization::SerializedBoolUberStateWrapper
