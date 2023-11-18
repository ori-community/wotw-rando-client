#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ScreenshotIcon.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::ScreenshotIcon {
    IL2CPP_REGISTER_METHOD(0x01068C40, app::Type*, get_Type, (app::ScreenshotIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01068D60, void, ctor, (app::ScreenshotIcon * this_ptr, app::Type* type, int32_t enum_integer_value, app::Vector2 position))
} // namespace app::classes::ScreenshotIcon
