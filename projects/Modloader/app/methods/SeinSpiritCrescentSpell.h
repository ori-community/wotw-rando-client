#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinSpiritCrescentSpell.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SeinSpiritCrescentSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1270, bool, get_CanAfford, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E12B0, bool, KeepPlayingThrowAnimation, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, KeepPlayingAirThrowAnimation, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1350, void, OnSetReferenceToSein, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1380, void, OnDestroy, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E13C0, void, UpdateCharacterState, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1680, void, PlayThrowAnimation, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1E10, float, ClampToPlane, app::SeinSpiritCrescentSpell* this_ptr, float angle, app::Vector2 plane_normal)
    IL2CPP_REGISTER_METHOD(0x005E1E80, void, SpawnBoomerang, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E28D0, void, OnCatchBoomerang, app::SeinSpiritCrescentSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E2B10, void, ctor, app::SeinSpiritCrescentSpell* this_ptr)
} // namespace app::classes::SeinSpiritCrescentSpell
