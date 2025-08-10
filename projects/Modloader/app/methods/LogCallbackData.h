#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/LogCallbackData.h>
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>

namespace app::classes::LogCallbackData {
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, app::LogCallbackData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EC720, void, Save, app::LogCallbackData* this_ptr, app::BinaryWriter* binary_writer)
    IL2CPP_REGISTER_METHOD(0x009EC790, void, Load, app::LogCallbackData* this_ptr, app::BinaryReader* binary_reader, int32_t current_version)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LogCallbackData* this_ptr)
} // namespace app::classes::LogCallbackData
