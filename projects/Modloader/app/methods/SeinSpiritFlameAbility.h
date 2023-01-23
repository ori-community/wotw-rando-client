#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinSpiritFlameAbility.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_ISpiritFlameAttackable_.h>
#include <Modloader/app/structs/SpiritFlame.h>

namespace app::classes::SeinSpiritFlameAbility {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinSpiritFlameAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E2B40, bool, get_LockShootingSpiritFlame, (app::SeinSpiritFlameAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E2BD0, void, AddLock, (app::SeinSpiritFlameAbility * this_ptr, app::String* lock_name))
    IL2CPP_REGISTER_METHOD(0x005E2C80, void, RemoveLock, (app::SeinSpiritFlameAbility * this_ptr, app::String* lock_name))
    IL2CPP_REGISTER_METHOD(0x005E2D20, app::List_1_ISpiritFlameAttackable_*, get_ClosestAttackables, (app::SeinSpiritFlameAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E2D70, void, OnSetReferenceToSein, (app::SeinSpiritFlameAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::SeinSpiritFlameAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E2E50, void, UpdateCharacterState, (app::SeinSpiritFlameAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E2EB0, void, ThrowSpiritFlames, (app::SeinSpiritFlameAbility * this_ptr, app::SpiritFlame* spirit_flame))
    IL2CPP_REGISTER_METHOD(0x005E39A0, void, ctor, (app::SeinSpiritFlameAbility * this_ptr))
} // namespace app::classes::SeinSpiritFlameAbility
