#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderFloatDisplay.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UberShaderFloatDisplay {
    IL2CPP_REGISTER_METHOD(0x01912760, void, ctor, (app::UberShaderFloatDisplay * this_ptr, app::String* label, float min, float max))
}
