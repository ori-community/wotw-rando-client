#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#include <Modloader/app/structs/List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        app::EventProvider_SessionInfo,
        get_Current,
        app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014CEB0, bool, MoveNext, app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014CC40,
        void,
        ctor,
        app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr,
        app::List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* list
    )
    IL2CPP_REGISTER_METHOD(0x0014CD40, bool, MoveNextRare, app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014CF70,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014CE70, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Diagnostics_Tracing_EventProvider_SessionInfo_
