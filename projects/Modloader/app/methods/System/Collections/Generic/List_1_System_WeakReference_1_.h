#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_WeakReference_1_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_WeakReference_1_.h>
#include <Modloader/app/structs/Predicate_1_WeakReference_1_System_Diagnostics_Tracing_EtwSession_.h>
#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession_.h>

namespace app::classes::System::Collections::Generic::List_1_System_WeakReference_1_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_WeakReference_1_, GetEnumerator, app::List_1_System_WeakReference_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_WeakReference_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_System_WeakReference_1_* this_ptr,
        app::WeakReference_1_System_Diagnostics_Tracing_EtwSession_* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_WeakReference_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1EFE0,
        int32_t,
        RemoveAll,
        app::List_1_System_WeakReference_1_* this_ptr,
        app::Predicate_1_WeakReference_1_System_Diagnostics_Tracing_EtwSession_* match
    )
} // namespace app::classes::System::Collections::Generic::List_1_System_WeakReference_1_
