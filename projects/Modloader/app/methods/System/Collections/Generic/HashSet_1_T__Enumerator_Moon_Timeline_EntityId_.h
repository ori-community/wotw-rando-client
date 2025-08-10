#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/HashSet_1_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_Moon_Timeline_EntityId_ {
    IL2CPP_REGISTER_METHOD(
        0x0021FC60,
        void,
        ctor,
        app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed* this_ptr,
        app::HashSet_1_Moon_Timeline_EntityId_* set
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021FC90, bool, MoveNext, app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114150, app::EntityId, get_Current, app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021FCA0, app::Object*, IEnumerator_get_Current, app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021FDE0, void, IEnumerator_Reset, app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_Moon_Timeline_EntityId_
