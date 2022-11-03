#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostTransformData {
    IL2CPP_REGISTER_METHOD(0x007EC230, app::Vector3, get_Position, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_FaceLeft, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_FeetAngle, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC250, void, ctor_2, (app::GhostTransformData * this_ptr, app::Vector3 position, bool face_left, float feet_angle))
    IL2CPP_REGISTER_METHOD(0x007EC270, void, Save, (app::GhostTransformData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007EC320, void, Load, (app::GhostTransformData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC3F0, int32_t, GetDataSize, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Executed, (app::GhostTransformData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Executed, (app::GhostTransformData * this_ptr, bool value))
} // namespace app::classes::GhostTransformData
