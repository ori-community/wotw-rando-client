#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GhostCameraPlugin_CameraData {
    IL2CPP_REGISTER_METHOD(0x00E159F0, void, Save, (app::GhostCameraPlugin_CameraData * this_ptr, app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00E15B10, void, Load, (app::GhostCameraPlugin_CameraData * this_ptr, app::BinaryReader * binary_reader))
    IL2CPP_REGISTER_METHOD(0x00E15C60, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostCameraPlugin_CameraData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostCameraPlugin_CameraData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_Executed, (app::GhostCameraPlugin_CameraData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_Executed, (app::GhostCameraPlugin_CameraData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GhostCameraPlugin_CameraData * this_ptr))
}
