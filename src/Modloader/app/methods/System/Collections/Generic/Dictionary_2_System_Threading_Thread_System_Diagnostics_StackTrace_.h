#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_.h>
#include <Modloader/app/structs/StackTrace.h>
#include <Modloader/app/structs/Thread.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::StackTrace*,
        get_Item,
        app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_* this_ptr,
        app::Thread* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_* this_ptr,
        app::Thread* key,
        app::StackTrace* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_* this_ptr, app::Thread* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_
