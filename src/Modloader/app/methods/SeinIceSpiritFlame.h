#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinIceSpiritFlame.h>

namespace app::classes::SeinIceSpiritFlame {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinIceSpiritFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100AD30, void, OnSetReferenceToSein, app::SeinIceSpiritFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100AE10, bool, get_HasEnoughEnergy, app::SeinIceSpiritFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100AE50, void, SpendEnergy, app::SeinIceSpiritFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCharacterState, app::SeinIceSpiritFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinIceSpiritFlame* this_ptr)
} // namespace app::classes::SeinIceSpiritFlame
