#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartBoost.h>

namespace app::classes::CartBoost {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D27C0, float, get_BoostExtraSpeed, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B33020, void, set_BoostExtraSpeed, app::CartBoost* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00B33030, void, OnAwake, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B33040, void, UpdateCharacterState, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFE20, bool, get_IsStatePerforming, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A79490, float, get_BoostCharge, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B332C0, bool, get_CanBoost, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B332E0, void, PerformBoost, app::CartBoost* this_ptr, bool consume_boost_charge)
    IL2CPP_REGISTER_METHOD(0x00B335A0, void, RechargeBoost, app::CartBoost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B33620, void, ctor, app::CartBoost* this_ptr)
} // namespace app::classes::CartBoost
