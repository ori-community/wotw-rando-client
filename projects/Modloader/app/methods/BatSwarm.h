#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BatSwarm {
    IL2CPP_REGISTER_METHOD(0x00F943E0, app::Vector2, get_MainPOI, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F945A0, app::Vector2, get_Position, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F94700, void, set_Position, (app::BatSwarm * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NavigationManagerActive, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F94880, app::Vector2, get_PathPOI, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F948A0, void, Awake, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F94A20, void, OnValidate, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F94AD0, void, InitFromPlaceholder, (app::BatSwarm * this_ptr, app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00F94BE0, void, FixedUpdate, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F94DC0, bool, ShouldUpdatePath, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F94ED0, void, UpdateSpawning, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798240, BatSwarm_UpdateSpawning__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F95570, app::Vector2, get_AvoidanceSpot, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F95630, void, set_AvoidanceSpot, (app::BatSwarm * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x003FDD40, float, get_AvoidanceSpotWeight, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD50, void, set_AvoidanceSpotWeight, (app::BatSwarm * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F956F0, void, OnSwarmerDeath, (app::BatSwarm * this_ptr, app::BatEnemy* bat, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00F95B90, void, OnSwarmerStickyMineStuck, (app::BatSwarm * this_ptr, app::BatEnemy* bat))
    IL2CPP_REGISTER_METHOD(0x00F95EB0, void, OnDrawGizmos, (app::BatSwarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F96070, void, ctor, (app::BatSwarm * this_ptr))
} // namespace app::classes::BatSwarm
