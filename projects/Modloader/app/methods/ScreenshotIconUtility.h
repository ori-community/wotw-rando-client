#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::ScreenshotIconUtility {
    IL2CPP_REGISTER_METHOD(0x01068E20, app::String*, FirstCharacterToLower, (app::String * str))
}
