#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PressAnyButtonPrompt.h>

namespace app::classes::PressAnyButtonPrompt {
    IL2CPP_REGISTER_METHOD(0x00C70600, void, FixedUpdate, (app::PressAnyButtonPrompt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PressAnyButtonPrompt * this_ptr))
} // namespace app::classes::PressAnyButtonPrompt
