#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::AsyncVoidMethodBuilder {
    IL2CPP_REGISTER_METHOD(0x01A91D60, app::AsyncVoidMethodBuilder, Create, ())
    IL2CPP_REGISTER_METHOD(0x0018EE20, void, SetStateMachine, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::IAsyncStateMachine * state_machine))
    IL2CPP_REGISTER_METHOD(0x0018EE30, void, SetResult, (app::AsyncVoidMethodBuilder__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018EE40, void, SetException, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHODINFO(0x0473D378, AsyncVoidMethodBuilder_SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0018EE50, void, NotifySynchronizationContextOfCompletion, (app::AsyncVoidMethodBuilder__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018EE60, app::Task *, get_Task, (app::AsyncVoidMethodBuilder__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012E5F0, void, Start_1, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::Object * * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047769F0, AsyncVoidMethodBuilder_Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012E5D0, void, AwaitUnsafeOnCompleted_1, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::Object * * awaiter, app::Object * * state_machine))
    IL2CPP_REGISTER_METHOD(0x0012E600, void, Start_2, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0477F8B0, AsyncVoidMethodBuilder_Start_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012E5E0, void, AwaitUnsafeOnCompleted_2, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ * awaiter, app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04714918, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012E5E0, void, AwaitUnsafeOnCompleted_3, (app::AsyncVoidMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Object_ * awaiter, app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d * state_machine))
}
