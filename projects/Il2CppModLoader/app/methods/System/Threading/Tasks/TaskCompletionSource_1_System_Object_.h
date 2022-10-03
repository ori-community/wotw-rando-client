#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_System_Object_*, get_Task, (app::TaskCompletionSource_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047936C0, TaskCompletionSource_1_System_Object__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor_1, (app::TaskCompletionSource_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737768, TaskCompletionSource_1_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02776D20, void, ctor_2, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04712B28, TaskCompletionSource_1_System_Object___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02776D50, void, ctor_3, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::Object* state, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHOD(0x02776E90, void, SpinUntilCompleted, (app::TaskCompletionSource_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027774F0, bool, TrySetException, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x04715410, TaskCompletionSource_1_System_Object__TrySetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777610, void, SetException, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x0474C998, TaskCompletionSource_1_System_Object__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::Object* result))
    IL2CPP_REGISTER_METHOD(0x02777740, void, SetResult, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::Object* result))
    IL2CPP_REGISTER_METHODINFO(0x04718060, TaskCompletionSource_1_System_Object__SetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777340, bool, TrySetCanceled_1, (app::TaskCompletionSource_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02777370, bool, TrySetCanceled_2, (app::TaskCompletionSource_1_System_Object_ * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x02777830, void, SetCanceled, (app::TaskCompletionSource_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761D50, TaskCompletionSource_1_System_Object__SetCanceled__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_Object_
