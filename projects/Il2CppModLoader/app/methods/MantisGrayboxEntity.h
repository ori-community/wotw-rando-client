#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MantisGrayboxEntity {
    IL2CPP_REGISTER_METHOD(0x009FC180, bool, get_IgnoreGoThroughs, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC2A0, void, set_IgnoreGoThroughs, (app::MantisGrayboxEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009FC3F0, bool, get_MeetsRetaliationConditions, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC420, void, set_MeetsRetaliationConditions, (app::MantisGrayboxEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009FC450, float, get_JumpAttackCooldown, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IgnoreAllowedZonesIfFreed, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00956AC0, app::MantisSpawnType__Enum, get_SpawnType, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC480, void, set_SpawnType, (app::MantisGrayboxEntity * this_ptr, app::MantisSpawnType__Enum value))
    IL2CPP_REGISTER_METHOD(0x009FC490, void, OnPoolSpawned, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC4C0, void, OnFixedUpdate, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC530, void, ResetEntity, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC560, void, Start, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC6D0, void, ResolveDamage, (app::MantisGrayboxEntity * this_ptr, app::DamageResult * damage_result))
    IL2CPP_REGISTER_METHOD(0x009FC730, void, SetTouchDamageWeight, (app::MantisGrayboxEntity * this_ptr, app::DamageWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x009FC750, void, ResetTouchDamageWeight, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC780, app::Vector3, get_CameraTargetPosition, (app::MantisGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FCBA0, void, ctor, (app::MantisGrayboxEntity * this_ptr))
}
