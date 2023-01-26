#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostRecorderData.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/GhostFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GhostRecorderData {
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_FlushedFramesCount, (app::GhostRecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E29C0, app::GhostFrame*, GetFrame, (app::GhostRecorderData * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x007E2A90, app::GhostFrame*, get_LastFrame, (app::GhostRecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E2B50, void, LoadFromFile, (app::GhostRecorderData * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x007E2E80, void, LoadFromReplay, (app::GhostRecorderData * this_ptr, app::String* replay))
    IL2CPP_REGISTER_METHOD(0x007E3240, void, BeginTimeslicedLoadFromReplay, (app::GhostRecorderData * this_ptr, app::String* replay))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ContinueTimeslicedLoadFromReplay, (app::GhostRecorderData * this_ptr, double* time_left))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishTimeslicedLoadFromReplay, (app::GhostRecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E37A0, void, LoadFromBinaryReader, (app::GhostRecorderData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007E3CB0, void, ctor, (app::GhostRecorderData * this_ptr))
} // namespace app::classes::GhostRecorderData
