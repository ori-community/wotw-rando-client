#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PoisonousWaterZone {
    IL2CPP_REGISTER_METHOD(0x00C57630, bool, get_IsPlayerInside, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C57740, bool, IsPointInsidePoisonousWater, (app::PoisonousWaterZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00C57930, bool, IsPlayerInsidePoisonousWater, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C57B40, bool, IsPointInsidePoisonousWaterZone, (app::Vector2 point, app::PoisonousWaterZone * * zone))
    IL2CPP_REGISTER_METHOD(0x00C57D10, void, OnEnable, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C57DD0, void, OnDisable, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C57E90, void, Awake, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C58110, void, Update, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C581F0, void, OnAfterUdpate, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C58230, void, UdpateMetaBall, (app::PoisonousWaterZone * this_ptr, app::MetaballRenderer_IMetaball * current_ball))
    IL2CPP_REGISTER_METHOD(0x00C587F0, bool, CanDealDamage, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C58800, void, AddPoisonWaterBlob, (app::PoisonousWaterZone * this_ptr, app::Vector2 position, float radius_multiplier, bool forced))
    IL2CPP_REGISTER_METHOD(0x00C58A40, void, DealDamage, (app::PoisonousWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C58D40, void, ctor, (app::PoisonousWaterZone * this_ptr))
}
