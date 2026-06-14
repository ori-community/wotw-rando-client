#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data__Boxed.h>

namespace app::classes::GhostGenericEventsPlugin_Data {
    IL2CPP_REGISTER_METHOD(0x0011F5D0, void, ctor, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr, int32_t recording_i_d, int32_t property_id)
    IL2CPP_REGISTER_METHOD(0x0011F5F0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011F600, int32_t, GetDataSize, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FB00, bool, get_Executed, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B00, void, set_Executed, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0011F620, void, Load, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr, app::BinaryReader* binary_reader)
    IL2CPP_REGISTER_METHOD(0x0011F630, void, Save, app::GhostGenericEventsPlugin_Data__Boxed* this_ptr, app::BinaryWriter* binary_writer)
} // namespace app::classes::GhostGenericEventsPlugin_Data
