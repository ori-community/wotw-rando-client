#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Byte___ {
    IL2CPP_REGISTER_METHOD(0x02776D20, void, ctor_1, app::TaskCompletionSource_1_System_Byte_* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_System_Byte_*, get_Task, app::TaskCompletionSource_1_System_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor_2, app::TaskCompletionSource_1_System_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027774F0, bool, TrySetException, app::TaskCompletionSource_1_System_Byte_* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, app::TaskCompletionSource_1_System_Byte_* this_ptr, app::Byte__Array* result)
    IL2CPP_REGISTER_METHOD(0x02777610, void, SetException, app::TaskCompletionSource_1_System_Byte_* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x02777740, void, SetResult, app::TaskCompletionSource_1_System_Byte_* this_ptr, app::Byte__Array* result)
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Byte___
