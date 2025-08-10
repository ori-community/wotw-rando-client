#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo_.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_LegacySwarmEnemyManager_SpawnInfo_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo_.h>

namespace app::classes::System::Collections::Generic::Queue_1_LegacySwarmEnemyManager_SpawnInfo_ {
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA38C0, void, Enqueue, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr, app::LegacySwarmEnemyManager_SpawnInfo item)
    IL2CPP_REGISTER_METHOD(0x02CA3B30, app::LegacySwarmEnemyManager_SpawnInfo, Dequeue, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA3330, void, ctor_2, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA3460, app::Object*, ICollection_get_SyncRoot, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA35C0, void, ICollection_CopyTo, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02CA39C0,
        app::Queue_1_T_Enumerator_LegacySwarmEnemyManager_SpawnInfo_,
        GetEnumerator,
        app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CA3A30,
        app::IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CA3A30, app::IEnumerator*, IEnumerable_GetEnumerator, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA3CB0, app::LegacySwarmEnemyManager_SpawnInfo, Peek, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA3D50, bool, Contains, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr, app::LegacySwarmEnemyManager_SpawnInfo item)
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::LegacySwarmEnemyManager_SpawnInfo__Array*, ToArray, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr, int32_t* index)
    IL2CPP_REGISTER_METHOD(0x02CA3EC0, void, ThrowForEmptyQueue, app::Queue_1_LegacySwarmEnemyManager_SpawnInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_LegacySwarmEnemyManager_SpawnInfo_
