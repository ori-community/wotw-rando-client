#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::NewEntityPlatformMovement_KickbackEntry {
    IL2CPP_REGISTER_METHOD(0x005FBEA0, app::Vector2, GetKickbackVector, app::NewEntityPlatformMovement_KickbackEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NewEntityPlatformMovement_KickbackEntry* this_ptr)
} // namespace app::classes::NewEntityPlatformMovement_KickbackEntry
