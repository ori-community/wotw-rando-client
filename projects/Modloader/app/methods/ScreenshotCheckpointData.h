#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScreenshotCheckpointData.h>

namespace app::classes::ScreenshotCheckpointData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScreenshotCheckpointData * this_ptr))
}
