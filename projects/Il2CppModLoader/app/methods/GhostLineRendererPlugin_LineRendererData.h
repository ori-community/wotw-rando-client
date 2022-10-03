#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostLineRendererPlugin_LineRendererData {
    IL2CPP_REGISTER_METHOD(0x00E21D20, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostLineRendererPlugin_LineRendererData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostLineRendererPlugin_LineRendererData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E21D30, void, ctor, (app::GhostLineRendererPlugin_LineRendererData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E21DC0, void, Save, (app::GhostLineRendererPlugin_LineRendererData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00E21F60, void, Load, (app::GhostLineRendererPlugin_LineRendererData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Executed, (app::GhostLineRendererPlugin_LineRendererData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Executed, (app::GhostLineRendererPlugin_LineRendererData * this_ptr, bool value))
} // namespace app::classes::GhostLineRendererPlugin_LineRendererData
