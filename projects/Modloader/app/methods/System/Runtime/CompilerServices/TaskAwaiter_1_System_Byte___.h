#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskAwaiter_1_System_Byte___Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Byte___ {
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::TaskAwaiter_1_System_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF750, app::Byte__Array*, GetResult, (app::TaskAwaiter_1_System_Byte___Boxed * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Byte___
