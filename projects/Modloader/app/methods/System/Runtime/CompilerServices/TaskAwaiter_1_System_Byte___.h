#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Byte___Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Byte___ {
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::TaskAwaiter_1_System_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744750, TaskAwaiter_1_System_Byte__get_IsCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF750, app::Byte__Array*, GetResult, (app::TaskAwaiter_1_System_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047146C8, TaskAwaiter_1_System_Byte__GetResult__MethodInfo)
} // namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Byte___
