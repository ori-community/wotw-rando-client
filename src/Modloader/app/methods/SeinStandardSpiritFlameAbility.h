#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ISpiritFlameAttackable_.h>
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility.h>
#include <Modloader/app/structs/SpiritFlame.h>

namespace app::classes::SeinStandardSpiritFlameAbility {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C0F0, app::SpiritFlame*, get_CurrentSpiritFlame, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C180, int32_t, get_OriLevel, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C1B0, bool, get_LockShootingSpiritFlame, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C200, int32_t, get_MaxTargets, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C230, void, UpdateCharacterState, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C960, app::SpiritFlame*, GetStandardSpiritFlame, app::SeinStandardSpiritFlameAbility* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x005E2D20, app::List_1_ISpiritFlameAttackable_*, get_ClosestAttackables, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7C9C0, void, OnSetReferenceToSein, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7CAA0, void, UpdateTargetting, app::SeinStandardSpiritFlameAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7CB90, void, ctor, app::SeinStandardSpiritFlameAbility* this_ptr)
} // namespace app::classes::SeinStandardSpiritFlameAbility
