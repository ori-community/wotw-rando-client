#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo__Array.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CD6960, app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B4BFB0, int32_t, IndexOf, (app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_ * this_ptr, app::LegacySwarmEnemyManager_SpawnInfo__Array* array, app::LegacySwarmEnemyManager_SpawnInfo value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4C100, int32_t, LastIndexOf, (app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_ * this_ptr, app::LegacySwarmEnemyManager_SpawnInfo__Array* array, app::LegacySwarmEnemyManager_SpawnInfo value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4C240, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B4C370, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_LegacySwarmEnemyManager_SpawnInfo_
