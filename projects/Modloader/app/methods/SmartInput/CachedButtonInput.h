#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CachedButtonInput.h>

namespace app::classes::SmartInput::CachedButtonInput {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, GetButton, (app::CachedButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA330, void, ctor, (app::CachedButtonInput * this_ptr))
} // namespace app::classes::SmartInput::CachedButtonInput
