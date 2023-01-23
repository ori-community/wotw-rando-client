#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Array.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02D43EF0, app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02D44850, int32_t, IndexOf, (app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::OrbSpawnerManager_ItemToSpawn__Array* array, app::OrbSpawnerManager_ItemToSpawn value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D44980, int32_t, LastIndexOf, (app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::OrbSpawnerManager_ItemToSpawn__Array* array, app::OrbSpawnerManager_ItemToSpawn value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D44AB0, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D44BD0, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_OrbSpawnerManager_ItemToSpawn_
