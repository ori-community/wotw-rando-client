#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesiredStateTransitionInfo.h>
#include <Modloader/app/structs/List_1_Moon_DesiredStateTransitionInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_DesiredStateTransitionInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x00152840,
        void,
        ctor,
        app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr,
        app::List_1_Moon_DesiredStateTransitionInfo_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152880, bool, MoveNext, app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152970, bool, MoveNextRare, app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001354E0, app::DesiredStateTransitionInfo, get_Current, app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001529D0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152AA0, void, IEnumerator_Reset, app::List_1_T_Enumerator_Moon_DesiredStateTransitionInfo___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_DesiredStateTransitionInfo_
