#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue_1_OrbSpawnerManager_ItemToSpawn_.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn_.h>
#include <Modloader/app/structs/IEnumerator_1_OrbSpawnerManager_ItemToSpawn_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Array.h>

namespace app::classes::System::Collections::Generic::Queue_1_OrbSpawnerManager_ItemToSpawn_ {
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748710, Queue_1_OrbSpawnerManager_ItemToSpawn__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA4F40, void, Enqueue, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::OrbSpawnerManager_ItemToSpawn item))
    IL2CPP_REGISTER_METHODINFO(0x047498B8, Queue_1_OrbSpawnerManager_ItemToSpawn__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA5190, app::OrbSpawnerManager_ItemToSpawn, Dequeue, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777330, Queue_1_OrbSpawnerManager_ItemToSpawn__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789690, Queue_1_OrbSpawnerManager_ItemToSpawn__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA49B0, void, ctor_1, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0470BBF8, Queue_1_OrbSpawnerManager_ItemToSpawn___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_2, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA4AE0, app::Object*, ICollection_get_SyncRoot, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA4C40, void, ICollection_CopyTo, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04751AF0, Queue_1_OrbSpawnerManager_ItemToSpawn__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA5040, app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn_, GetEnumerator, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA50B0, app::IEnumerator_1_OrbSpawnerManager_ItemToSpawn_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA50B0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA52E0, app::OrbSpawnerManager_ItemToSpawn, Peek, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA5370, bool, Contains, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::OrbSpawnerManager_ItemToSpawn item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::OrbSpawnerManager_ItemToSpawn__Array*, ToArray, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x02CA54F0, void, ThrowForEmptyQueue, (app::Queue_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F000, Queue_1_OrbSpawnerManager_ItemToSpawn__ThrowForEmptyQueue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_OrbSpawnerManager_ItemToSpawn_
