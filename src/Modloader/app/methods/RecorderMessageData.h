#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/RecorderMessageData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RecorderMessageData {
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, app::RecorderMessageData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F25E0, void, Record, app::BinaryWriter* binary_writer, app::String* text)
    IL2CPP_REGISTER_METHOD(0x008F2640, void, Save, app::RecorderMessageData* this_ptr, app::BinaryWriter* binary_writer)
    IL2CPP_REGISTER_METHOD(0x008F2670, void, Load, app::RecorderMessageData* this_ptr, app::BinaryReader* binary_reader, int32_t current_version)
    IL2CPP_REGISTER_METHOD(0x008F26B0, void, ctor, app::RecorderMessageData* this_ptr)
} // namespace app::classes::RecorderMessageData
