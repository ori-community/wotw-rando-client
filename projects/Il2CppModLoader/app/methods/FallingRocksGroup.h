#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FallingRocksGroup {
    IL2CPP_REGISTER_METHOD(0x00998560, int32_t, get_GroundMask, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (app::FallingRocksGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998580, void, set_Mask, (app::FallingRocksGroup * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00998630, void, RocksPrefabInstantiation, (app::FallingRocksGroup * this_ptr, app::List_1_DynamicInstantiationDescriptor_ * instantiations))
    IL2CPP_REGISTER_METHOD(0x00998A50, void, Awake, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998AF0, void, Start, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998F80, void, OnEnable, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00999120, void, OnDisable, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009992C0, void, OnDestroy, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00999360, void, SpawnRock, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00999C80, void, TriggerFallingRocks, (app::FallingRocksGroup * this_ptr, int32_t numger_of_rocks, float min_time_between_faling_rock, float max_time_between_faling_rock))
    IL2CPP_REGISTER_METHOD(0x00999CB0, app::Vector3, GetSpawnPosition, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00999E30, void, Update, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00999F00, void, UpdateDelayedAntics, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099A150, int32_t, GetRandomWeightIndex, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099A380, void, OnRestoreCheckpoint, (app::FallingRocksGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741F00, FallingRocksGroup_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0099A430, void, OnRockExploded, (app::FallingRocksGroup * this_ptr, app::Projectile * proj))
    IL2CPP_REGISTER_METHODINFO(0x0474BAA0, FallingRocksGroup_OnRockExploded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0099A680, void, ctor, (app::FallingRocksGroup * this_ptr))
}
