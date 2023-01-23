#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/CharacterPlatformMovement_KickbackEntry.h>

namespace app::classes::CharacterPlatformMovement_KickbackEntry {
    IL2CPP_REGISTER_METHOD(0x01311F00, app::Vector2, GetKickbackVector, (app::CharacterPlatformMovement_KickbackEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01312040, void, ctor, (app::CharacterPlatformMovement_KickbackEntry * this_ptr))
} // namespace app::classes::CharacterPlatformMovement_KickbackEntry
