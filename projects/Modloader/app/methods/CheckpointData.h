#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/CheckpointData.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>

namespace app::classes::CheckpointData {
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::CheckpointData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Record, (app::BinaryWriter * binary_writer, app::List_1_MoonGuid_* scenes))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Save, (app::CheckpointData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Load, (app::CheckpointData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CheckpointData * this_ptr))
} // namespace app::classes::CheckpointData
