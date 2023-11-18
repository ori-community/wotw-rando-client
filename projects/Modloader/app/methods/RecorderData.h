#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderData.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RecorderFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RecorderData {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_FlushedFramesCount, (app::RecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008EE620, app::RecorderFrame*, GetFrame, (app::RecorderData * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x008EE6F0, app::RecorderFrame*, get_LastFrame, (app::RecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008EE7B0, void, LoadFromFile, (app::RecorderData * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x008EEAC0, void, LoadFrom, (app::RecorderData * this_ptr, app::BinaryReader* reader))
    IL2CPP_REGISTER_METHOD(0x008EF290, void, WriteSplitReplay, (app::RecorderData * this_ptr, app::String* folder_path))
    IL2CPP_REGISTER_METHOD(0x008EF720, void, LoadFromBytes, (app::RecorderData * this_ptr, app::Byte__Array* bytes))
    IL2CPP_REGISTER_METHOD(0x008EFA40, void, ctor, (app::RecorderData * this_ptr))
} // namespace app::classes::RecorderData
