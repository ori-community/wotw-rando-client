#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UberPoolPerfTest_PrefabInfo_.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Collections_Generic_List_1___Boxed.h>

namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Collections_Generic_List_1_ {
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, app::TaskAwaiter_1_System_Collections_Generic_List_1___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001FF750,
        app::List_1_UberPoolPerfTest_PrefabInfo_*,
        GetResult,
        app::TaskAwaiter_1_System_Collections_Generic_List_1___Boxed* this_ptr
    )
} // namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Collections_Generic_List_1_
