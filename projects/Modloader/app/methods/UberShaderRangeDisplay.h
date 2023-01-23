#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderRangeDisplay.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UberShaderRangeDisplay {
    IL2CPP_REGISTER_METHOD(0x01912760, void, ctor, (app::UberShaderRangeDisplay * this_ptr, app::String* label, float min_limit, float max_limit))
}
