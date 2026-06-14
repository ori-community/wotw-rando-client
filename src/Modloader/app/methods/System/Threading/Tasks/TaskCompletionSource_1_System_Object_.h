#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Object_.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_System_Object_*, get_Task, app::TaskCompletionSource_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor_1, app::TaskCompletionSource_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02776D20, void, ctor_2, app::TaskCompletionSource_1_System_Object_* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(
        0x02776D50,
        void,
        ctor_3,
        app::TaskCompletionSource_1_System_Object_* this_ptr,
        app::Object* state,
        app::TaskCreationOptions__Enum creation_options
    )
    IL2CPP_REGISTER_METHOD(0x02776E90, void, SpinUntilCompleted, app::TaskCompletionSource_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027774F0, bool, TrySetException, app::TaskCompletionSource_1_System_Object_* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x02777610, void, SetException, app::TaskCompletionSource_1_System_Object_* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, app::TaskCompletionSource_1_System_Object_* this_ptr, app::Object* result)
    IL2CPP_REGISTER_METHOD(0x02777740, void, SetResult, app::TaskCompletionSource_1_System_Object_* this_ptr, app::Object* result)
    IL2CPP_REGISTER_METHOD(0x02777340, bool, TrySetCanceled_1, app::TaskCompletionSource_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02777370, bool, TrySetCanceled_2, app::TaskCompletionSource_1_System_Object_* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02777830, void, SetCanceled, app::TaskCompletionSource_1_System_Object_* this_ptr)
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Object_
