#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_System_Tuple_2___Boxed.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Tuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_*,
        get_Current,
        app::List_1_T_Enumerator_System_Tuple_2___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014EA20, bool, MoveNext, app::List_1_T_Enumerator_System_Tuple_2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Tuple_2___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Tuple_2_
