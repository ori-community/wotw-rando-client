#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SmoothRangeAttribute.h>

namespace app::classes::SmoothRangeAttribute {
    IL2CPP_REGISTER_METHOD(0x006D39E0, void, ctor, (app::SmoothRangeAttribute * this_ptr, float min, float max))
}
