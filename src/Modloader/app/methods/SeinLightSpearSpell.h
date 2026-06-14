#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinLightSpearSpell.h>

namespace app::classes::SeinLightSpearSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00891A30, void, OnSetReferenceToSein, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00891A60, void, OnDestroy, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005CB2B0, bool, get_HasEnoughEnergy, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005CB2F0, void, SpendEnergy, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00891AA0, void, UpdateCharacterState, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00891BF0, void, ShootSpear, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00891F90, void, SpawnSpear, app::SeinLightSpearSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008925C0, void, ctor, app::SeinLightSpearSpell* this_ptr)
} // namespace app::classes::SeinLightSpearSpell
