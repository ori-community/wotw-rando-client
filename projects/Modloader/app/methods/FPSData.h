#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FPSData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::FPSData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::FPSData * this_ptr, int32_t fps))
    IL2CPP_REGISTER_METHOD(0x00988C30, void, Record, (app::BinaryWriter * binary_writer, int32_t fps))
    IL2CPP_REGISTER_METHOD(0x00988C80, void, Save, (app::FPSData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00988CB0, void, Load, (app::FPSData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x008556D0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::FPSData * this_ptr))
} // namespace app::classes::FPSData
