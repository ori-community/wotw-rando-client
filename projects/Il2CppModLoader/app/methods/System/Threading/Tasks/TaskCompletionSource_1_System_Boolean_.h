#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskCompletionSource_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor_1, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793660, TaskCompletionSource_1_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02776F70, bool, TrySetException, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHODINFO(0x0477C960, TaskCompletionSource_1_System_Boolean__TrySetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_System_Boolean_ *, get_Task, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047958F0, TaskCompletionSource_1_System_Boolean__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777250, void, SetResult, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, bool result))
    IL2CPP_REGISTER_METHODINFO(0x04752F88, TaskCompletionSource_1_System_Boolean__SetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, bool result))
    IL2CPP_REGISTER_METHODINFO(0x04778E18, TaskCompletionSource_1_System_Boolean__TrySetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02776D20, void, ctor_2, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x02776D50, void, ctor_3, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, app::Object * state, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHOD(0x02776E90, void, SpinUntilCompleted, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02777090, void, SetException, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHODINFO(0x0475FCC0, TaskCompletionSource_1_System_Boolean__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777340, bool, TrySetCanceled_1, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02777370, bool, TrySetCanceled_2, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x02777400, void, SetCanceled, (app::TaskCompletionSource_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796EE0, TaskCompletionSource_1_System_Boolean__SetCanceled__MethodInfo)
}
