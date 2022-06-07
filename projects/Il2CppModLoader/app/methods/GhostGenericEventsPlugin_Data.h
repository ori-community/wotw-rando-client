#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GhostGenericEventsPlugin_Data {
    IL2CPP_REGISTER_METHOD(0x0011F5D0, void, ctor, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr, int32_t recording_i_d, int32_t property_id))
    IL2CPP_REGISTER_METHOD(0x0011F5F0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011F600, int32_t, GetDataSize, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FB00, bool, get_Executed, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B00, void, set_Executed, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0011F620, void, Load, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr, app::BinaryReader * binary_reader))
    IL2CPP_REGISTER_METHODINFO(0x047519E0, GhostGenericEventsPlugin_Data_Load__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0011F630, void, Save, (app::GhostGenericEventsPlugin_Data__Boxed * this_ptr, app::BinaryWriter * binary_writer))
}
