#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostSceneTrackingPlugin_Data.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>

namespace app::classes::GhostSceneTrackingPlugin_Data {
    IL2CPP_REGISTER_METHOD(0x007E59C0, void, Save, (app::GhostSceneTrackingPlugin_Data * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007E5AE0, void, Load, (app::GhostSceneTrackingPlugin_Data * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007E5B60, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostSceneTrackingPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostSceneTrackingPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (app::GhostSceneTrackingPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (app::GhostSceneTrackingPlugin_Data * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GhostSceneTrackingPlugin_Data * this_ptr))
} // namespace app::classes::GhostSceneTrackingPlugin_Data
