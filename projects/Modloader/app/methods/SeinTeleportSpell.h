#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinTeleportSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9C4D0, app::AbilityType__Enum, get_AbilityType, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9C4E0, bool, get_HasLiveBeacon, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9C610, void, OnSetReferenceToSein, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9C6F0, bool, get_CanAim, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9C7F0, void, OnGrenadeSpawn, (app::SeinTeleportSpell * this_ptr, app::IGreanade* grenade, app::Vector2 velocity, bool bashable, float damage, bool can_fracture, bool is_fractured_piece))
    IL2CPP_REGISTER_METHOD(0x00A9CA50, void, SpawnQuickGrenade, (app::SeinTeleportSpell * this_ptr, app::Vector2 velocity, bool bashable))
    IL2CPP_REGISTER_METHOD(0x00A9CAE0, void, SpawnAimingGrenade, (app::SeinTeleportSpell * this_ptr, app::Vector2 velocity, bool bashable))
    IL2CPP_REGISTER_METHOD(0x00A9CB80, void, UpdateNormal, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9D400, void, UpdateAiming, (app::SeinTeleportSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9DBB0, void, TeleportOri, (app::SeinTeleportSpell * this_ptr, app::Vector2 new_position))
    IL2CPP_REGISTER_METHOD(0x00A7EB30, void, ctor, (app::SeinTeleportSpell * this_ptr))
} // namespace app::classes::SeinTeleportSpell
