#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceDebug.h>

namespace app::classes::RaceDebug {
    IL2CPP_REGISTER_METHOD(0x00E98580, void, DownloadReplay, app::RaceDebug* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E985B0, void, ParseLastDownloadedReplay, app::RaceDebug* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E98870, void, ctor, app::RaceDebug* this_ptr)
} // namespace app::classes::RaceDebug
