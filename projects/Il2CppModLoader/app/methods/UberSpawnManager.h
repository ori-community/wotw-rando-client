#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberSpawnManager {
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_FrameBudgetSpent, (app::UberSpawnManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128A7D0, void, Awake, (app::UberSpawnManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128A860, bool, GetSpawnOk, (app::UberSpawnManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128A8D0, void, FixedUpdate, (app::UberSpawnManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128AD60, void, InstantiateItem, (app::UberSpawnManager * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item))
    IL2CPP_REGISTER_METHOD(0x0128AF50, void, StartSpawn, (app::UberSpawnManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128AFB0, void, StopSpawn, (app::UberSpawnManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506160, void, ctor, (app::UberSpawnManager * this_ptr))
}
