#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect.h>

namespace app::classes::CageMath_Rectangle {
    IL2CPP_REGISTER_METHOD(0x00823AE0, app::Rect, Absolute, app::Rect rect)
}
