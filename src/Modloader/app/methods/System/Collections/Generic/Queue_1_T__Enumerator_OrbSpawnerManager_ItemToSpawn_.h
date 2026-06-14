#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#include <Modloader/app/structs/Queue_1_OrbSpawnerManager_ItemToSpawn_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_OrbSpawnerManager_ItemToSpawn_ {
    IL2CPP_REGISTER_METHOD(
        0x001ED940,
        void,
        ctor,
        app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr,
        app::Queue_1_OrbSpawnerManager_ItemToSpawn_* q
    )
    IL2CPP_REGISTER_METHOD(0x001ED990, void, Dispose, app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED9C0, bool, MoveNext, app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001ED9D0,
        app::OrbSpawnerManager_ItemToSpawn,
        get_Current,
        app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001EDA30, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDA40, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDB10, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_OrbSpawnerManager_ItemToSpawn___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_OrbSpawnerManager_ItemToSpawn_
