#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::Moon::Extensions::MathfExtensions {
    IL2CPP_REGISTER_METHOD(0x031B5C80, float, Max, app::Single__Array* values)
}
