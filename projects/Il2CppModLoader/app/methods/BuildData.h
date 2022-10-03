#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BuildData {
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::BuildData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00814D80, void, Initialize, (app::BuildData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008152E0, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x008158F0, void, Save, (app::BuildData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00815980, void, Load, (app::BuildData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x00815A10, void, ctor, (app::BuildData * this_ptr))
} // namespace app::classes::BuildData
