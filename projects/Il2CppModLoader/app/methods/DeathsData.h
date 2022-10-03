#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DeathsData {
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::DeathsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE0C90, void, Initialize, (app::DeathsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE0D60, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00DE0EA0, void, Save, (app::DeathsData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00DE0F10, void, Load, (app::DeathsData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeathsData * this_ptr))
} // namespace app::classes::DeathsData
