#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GhostTimeTrackingPlugin_Data {
    IL2CPP_REGISTER_METHOD(0x007EA1D0, void, Save, (app::GhostTimeTrackingPlugin_Data * this_ptr, app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x007EA230, void, Load, (app::GhostTimeTrackingPlugin_Data * this_ptr, app::BinaryReader * binary_reader))
    IL2CPP_REGISTER_METHOD(0x007EA270, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostTimeTrackingPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostTimeTrackingPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_Executed, (app::GhostTimeTrackingPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_Executed, (app::GhostTimeTrackingPlugin_Data * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GhostTimeTrackingPlugin_Data * this_ptr))
}
