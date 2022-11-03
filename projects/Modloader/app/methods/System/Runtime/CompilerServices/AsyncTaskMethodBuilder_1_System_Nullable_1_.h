#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Nullable_1_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_Nullable_1_, Create, ())
    IL2CPP_REGISTER_METHODINFO(0x04718718, AsyncTaskMethodBuilder_1_System_Nullable_1__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3C40, void, Start, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::AsyncProtocolRequest_InnerRead_d_25* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047358D8, AsyncTaskMethodBuilder_1_System_Nullable_1__Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_System_Nullable_1_*, get_Task, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712BF8, AsyncTaskMethodBuilder_1_System_Nullable_1__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3C30, void, AwaitUnsafeOnCompleted, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_* awaiter, app::AsyncProtocolRequest_InnerRead_d_25* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04731240, AsyncTaskMethodBuilder_1_System_Nullable_1__AwaitUnsafeOnCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF580, void, SetException, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x04766A98, AsyncTaskMethodBuilder_1_System_Nullable_1__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF510, void, SetResult_1, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::Nullable_1_Int32_ result))
    IL2CPP_REGISTER_METHODINFO(0x04747550, AsyncTaskMethodBuilder_1_System_Nullable_1__SetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04751E68, AsyncTaskMethodBuilder_1_System_Nullable_1__SetStateMachine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF520, void, SetResult_2, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::Task_1_System_Nullable_1_* completed_task))
    IL2CPP_REGISTER_METHOD(0x001FF590, app::Task_1_System_Nullable_1_*, GetTaskForResult, (app::AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed * this_ptr, app::Nullable_1_Int32_ result))
    IL2CPP_REGISTER_METHOD(0x0276AC50, void, cctor, ())
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Nullable_1_
