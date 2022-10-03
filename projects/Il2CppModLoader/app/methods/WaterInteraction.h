#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WaterInteraction {
    IL2CPP_REGISTER_METHOD(0x008D6C00, void, add_OnWaterZoneEnterAction, (app::WaterInteraction * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x008D6CF0, void, remove_OnWaterZoneEnterAction, (app::WaterInteraction * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x008D6DE0, void, add_OnWaterZoneExitAction, (app::WaterInteraction * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x008D6ED0, void, remove_OnWaterZoneExitAction, (app::WaterInteraction * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x008D6FC0, bool, get_IsInWater, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D7050, void, OnEnable, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D7200, void, OnDisable, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D73E0, void, OnWaterZoneEnter, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D7460, void, OnWaterZoneExit, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D74E0, void, OnTriggerEnter, (app::WaterInteraction * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x008D77E0, void, OnTriggerExit, (app::WaterInteraction * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x008D7AC0, void, OnRestoreCheckpoint, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E6D8, WaterInteraction_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008D7AD0, void, InitialTriggerCheck, (app::WaterInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D7E20, void, SetUnderwaterRtpc, (app::WaterInteraction * this_ptr, bool underwater))
    IL2CPP_REGISTER_METHOD(0x008D7EB0, void, ctor, (app::WaterInteraction * this_ptr))
} // namespace app::classes::WaterInteraction
