#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/ScreenshotTextMarker.h>

namespace app::classes::ScreenshotTextMarker {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::ScreenshotTextMarker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01069700, void, ctor, (app::ScreenshotTextMarker * this_ptr))
} // namespace app::classes::ScreenshotTextMarker
