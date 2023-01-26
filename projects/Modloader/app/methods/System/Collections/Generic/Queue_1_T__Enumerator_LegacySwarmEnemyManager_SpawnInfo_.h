#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_LegacySwarmEnemyManager_SpawnInfo_.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_LegacySwarmEnemyManager_SpawnInfo_ {
    IL2CPP_REGISTER_METHOD(0x001ED400, void, ctor, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* q))
    IL2CPP_REGISTER_METHOD(0x001ED450, void, Dispose, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED480, bool, MoveNext, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED490, app::LegacySwarmEnemyManager_SpawnInfo, get_Current, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED4F0, void, ThrowEnumerationNotStartedOrEnded, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED500, app::Object*, IEnumerator_get_Current, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED5E0, void, IEnumerator_Reset, (app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_LegacySwarmEnemyManager_SpawnInfo_
