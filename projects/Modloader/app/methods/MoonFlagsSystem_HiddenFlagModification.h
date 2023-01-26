#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonFlagsSystem_HiddenFlagModification__Boxed.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::MoonFlagsSystem_HiddenFlagModification {
    IL2CPP_REGISTER_METHOD(0x0010DB70, void, ctor, (app::MoonFlagsSystem_HiddenFlagModification__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00247070, void, Apply, (app::MoonFlagsSystem_HiddenFlagModification__Boxed * this_ptr, app::Renderer* renderer))
} // namespace app::classes::MoonFlagsSystem_HiddenFlagModification
