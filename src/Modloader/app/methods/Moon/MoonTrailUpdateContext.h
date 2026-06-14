#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTrailUpdateContext__Boxed.h>
#include <Modloader/app/structs/MoonTrailUpdateFlags__Enum.h>

namespace app::classes::Moon::MoonTrailUpdateContext {
    IL2CPP_REGISTER_METHOD(0x001F9D30, bool, HasFlag, app::MoonTrailUpdateContext__Boxed* this_ptr, app::MoonTrailUpdateFlags__Enum flag)
    IL2CPP_REGISTER_METHOD(0x001F9D40, void, SetFlag, app::MoonTrailUpdateContext__Boxed* this_ptr, app::MoonTrailUpdateFlags__Enum flag)
} // namespace app::classes::Moon::MoonTrailUpdateContext
