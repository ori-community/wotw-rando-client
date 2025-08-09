#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Byte__1.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_IEnumerable_1_.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Collections_Generic_IEnumerable_1_ {
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, app::TaskCompletionSource_1_System_Collections_Generic_IEnumerable_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02777740,
        void,
        SetResult,
        app::TaskCompletionSource_1_System_Collections_Generic_IEnumerable_1_* this_ptr,
        app::IEnumerable_1_System_Byte__1* result
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA280,
        app::Task_1_System_Collections_Generic_IEnumerable_1_*,
        get_Task,
        app::TaskCompletionSource_1_System_Collections_Generic_IEnumerable_1_* this_ptr
    )
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Collections_Generic_IEnumerable_1_
