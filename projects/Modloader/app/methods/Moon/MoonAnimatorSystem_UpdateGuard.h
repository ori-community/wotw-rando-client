#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimatorSystem.h>
#include <Modloader/app/structs/MoonAnimatorSystem_UpdateGuard__Boxed.h>

namespace app::classes::Moon::MoonAnimatorSystem_UpdateGuard {
    IL2CPP_REGISTER_METHOD(0x001DC5E0, void, ctor, app::MoonAnimatorSystem_UpdateGuard__Boxed* this_ptr, app::MoonAnimatorSystem* system)
    IL2CPP_REGISTER_METHOD(0x001DC600, void, Dispose, app::MoonAnimatorSystem_UpdateGuard__Boxed* this_ptr)
} // namespace app::classes::Moon::MoonAnimatorSystem_UpdateGuard
