#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CharacterPlatformMovement_KickbackEntry {
    IL2CPP_REGISTER_METHOD(0x01311F00, app::Vector2, GetKickbackVector, (app::CharacterPlatformMovement_KickbackEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01312040, void, ctor, (app::CharacterPlatformMovement_KickbackEntry * this_ptr))
}
