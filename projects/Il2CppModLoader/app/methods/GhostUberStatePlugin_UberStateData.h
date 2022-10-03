#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostUberStatePlugin_UberStateData {
    IL2CPP_REGISTER_METHOD(0x007EC4E0, void, Save, (app::GhostUberStatePlugin_UberStateData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007EC610, void, Load, (app::GhostUberStatePlugin_UberStateData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007EC6B0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostUberStatePlugin_UberStateData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostUberStatePlugin_UberStateData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Executed, (app::GhostUberStatePlugin_UberStateData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Executed, (app::GhostUberStatePlugin_UberStateData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GhostUberStatePlugin_UberStateData * this_ptr))
} // namespace app::classes::GhostUberStatePlugin_UberStateData
