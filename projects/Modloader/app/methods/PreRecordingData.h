#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PreRecordingData.h>

namespace app::classes::PreRecordingData {
    IL2CPP_REGISTER_METHOD(0x00C6CEA0, void, RemoveInvalidEntries, app::PreRecordingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6D230, void, Clear, app::PreRecordingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6D340, void, ctor, app::PreRecordingData* this_ptr)
} // namespace app::classes::PreRecordingData
