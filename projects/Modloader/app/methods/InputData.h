#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::InputData {
    IL2CPP_REGISTER_METHOD(0x00628710, void, Initialize, (app::InputData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00628720, void, CheckButtonChanged, (app::InputData * this_ptr, bool* changed, bool* member, app::Input_InputButtonProcessor** button))
    IL2CPP_REGISTER_METHOD(0x00628760, bool, UpdateInputs, (app::InputData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00628910, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00628AF0, void, Save, (app::InputData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00628BF0, void, Load, (app::InputData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x00417920, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::InputData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InputData * this_ptr))
} // namespace app::classes::InputData
