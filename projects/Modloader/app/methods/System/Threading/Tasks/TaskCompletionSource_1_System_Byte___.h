#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Byte_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Byte___ {
    IL2CPP_REGISTER_METHOD(0x02776D20, void, ctor_1, (app::TaskCompletionSource_1_System_Byte_ * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04767D48, TaskCompletionSource_1_System_Byte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_System_Byte_*, get_Task, (app::TaskCompletionSource_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E048, TaskCompletionSource_1_System_Byte__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor_2, (app::TaskCompletionSource_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746440, TaskCompletionSource_1_System_Byte___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027774F0, bool, TrySetException, (app::TaskCompletionSource_1_System_Byte_ * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x04729098, TaskCompletionSource_1_System_Byte__TrySetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, (app::TaskCompletionSource_1_System_Byte_ * this_ptr, app::Byte__Array* result))
    IL2CPP_REGISTER_METHODINFO(0x0475CA48, TaskCompletionSource_1_System_Byte__TrySetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777610, void, SetException, (app::TaskCompletionSource_1_System_Byte_ * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x04798A18, TaskCompletionSource_1_System_Byte__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777740, void, SetResult, (app::TaskCompletionSource_1_System_Byte_ * this_ptr, app::Byte__Array* result))
    IL2CPP_REGISTER_METHODINFO(0x04726560, TaskCompletionSource_1_System_Byte__SetResult__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Byte___
