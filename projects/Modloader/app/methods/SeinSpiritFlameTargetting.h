#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinSpiritFlameTargetting.h>
#include <Modloader/app/structs/IAttackable.h>

namespace app::classes::SeinSpiritFlameTargetting {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_Range, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_Range, (app::SeinSpiritFlameTargetting * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FD740, float, get_MaxNumberOfTargets, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E3B30, void, set_MaxNumberOfTargets, (app::SeinSpiritFlameTargetting * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x005E3B40, void, OnSetReferenceToSein, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E3C20, bool, IsShootableTarget, (app::SeinSpiritFlameTargetting * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x005E3FB0, void, UpdateClosestAttackables, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E4610, void, UpdateTargetHighlight, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E4850, void, UpdateCharacterState, (app::SeinSpiritFlameTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E5440, void, ctor, (app::SeinSpiritFlameTargetting * this_ptr))
} // namespace app::classes::SeinSpiritFlameTargetting
