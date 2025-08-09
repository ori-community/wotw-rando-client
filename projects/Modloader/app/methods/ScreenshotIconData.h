#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScreenshotIconData.h>

namespace app::classes::ScreenshotIconData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::ScreenshotIconData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01068DD0, void, ctor_2, app::ScreenshotIconData* this_ptr, app::ScreenshotIconData* data)
} // namespace app::classes::ScreenshotIconData
