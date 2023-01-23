#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PoisonousWaterPocket.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::PoisonousWaterPocket {
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_DamageDealt, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_DamageDealt, (app::PoisonousWaterPocket * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014324E0, float, get_NormalizedDuration, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01432520, bool, get_IsPlayerInside, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01432630, void, OnEnableRuntime, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014326F0, void, OnDisableRuntime, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014327B0, bool, IsPointInsidePoisonousWater, (app::Vector2 point, float max_lifetime))
    IL2CPP_REGISTER_METHOD(0x014329A0, void, OnZoneUpdate, (app::PoisonousWaterPocket * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01432E70, void, HandlePosition, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01433580, bool, CanDealDamage, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014336D0, void, PlayTimeline, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01433720, void, DealDamage, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01433A30, void, RefreshBounds, (app::PoisonousWaterPocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01433D40, void, ctor, (app::PoisonousWaterPocket * this_ptr))
} // namespace app::classes::PoisonousWaterPocket
