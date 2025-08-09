#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/MinerEntity.h>
#include <Modloader/app/structs/MinerSpawnType__Enum.h>

namespace app::classes::MinerEntity {
    IL2CPP_REGISTER_METHOD(0x014489D0, bool, get_CanHaveShield, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448A80, bool, get_IsProtectedByShield, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448A90, bool, get_HasShield, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448AA0, bool, get_IsFacingLeft, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448AD0, bool, get_IsFacingRight, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448B00, app::MinerSpawnType__Enum, get_SpawnType, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448B10, void, set_SpawnType, app::MinerEntity* this_ptr, app::MinerSpawnType__Enum value)
    IL2CPP_REGISTER_METHOD(0x01448B20, void, OnAwake, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448BC0, void, OnEnable, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448BE0, void, Start, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01448CA0, void, OnFixedUpdate, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01449080, void, LateUpdate, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01449510, void, ResetEntity, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014495F0, void, OnCacheSerializedComponents, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01449690, void, ResolveDamage, app::MinerEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x01448B10, void, SetSpawnType, app::MinerEntity* this_ptr, app::MinerSpawnType__Enum spawn_type)
    IL2CPP_REGISTER_METHOD(0x01449710, void, UpdateGoThroughPlatformInteraction, app::MinerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB7080, void, ctor, app::MinerEntity* this_ptr)
} // namespace app::classes::MinerEntity
