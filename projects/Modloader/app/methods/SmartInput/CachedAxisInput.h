#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedAxisInput.h>

namespace app::classes::SmartInput::CachedAxisInput {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, AxisValue, app::CachedAxisInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006CA2B0, void, ctor, app::CachedAxisInput* this_ptr)
} // namespace app::classes::SmartInput::CachedAxisInput
