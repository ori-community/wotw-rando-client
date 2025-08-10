#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_System_WeakReference_1___Boxed.h>
#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession_.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_WeakReference_1_ {
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        app::WeakReference_1_System_Diagnostics_Tracing_EtwSession_*,
        get_Current,
        app::List_1_T_Enumerator_System_WeakReference_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014EA20, bool, MoveNext, app::List_1_T_Enumerator_System_WeakReference_1___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_WeakReference_1___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_WeakReference_1_
