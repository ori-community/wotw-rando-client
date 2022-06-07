#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_1_System_Nullable_1_ {
    IL2CPP_REGISTER_METHOD(0x02778BD0, void, ctor_1, (app::TaskFactory_1_System_Nullable_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02778C10, void, ctor_2, (app::TaskFactory_1_System_Nullable_1_ * this_ptr, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskContinuationOptions__Enum continuation_options, app::TaskScheduler * scheduler))
    IL2CPP_REGISTER_METHOD(0x0277ADD0, app::Task_1_System_Nullable_1_ *, StartNew, (app::TaskFactory_1_System_Nullable_1_ * this_ptr, app::Func_1_Nullable_1_Int32_ * function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskScheduler * scheduler))
    IL2CPP_REGISTER_METHOD(0x0277AF60, void, FromAsyncCoreLogic, (app::IAsyncResult * iar, app::Func_2_IAsyncResult_Nullable_1_Int32_ * end_function, app::Action_1_IAsyncResult_ * end_action, app::Task_1_System_Nullable_1_ * promise, bool requires_synchronization))
    IL2CPP_REGISTER_METHOD(0x027792C0, app::Task_1_System_Nullable_1_ *, FromAsync, (app::TaskFactory_1_System_Nullable_1_ * this_ptr, app::Func_3_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_2_IAsyncResult_Nullable_1_Int32_ * end_method, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x0277B410, app::Task_1_System_Nullable_1_ *, FromAsyncImpl, (app::Func_3_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_2_IAsyncResult_Nullable_1_Int32_ * end_function, app::Action_1_IAsyncResult_ * end_action, app::Object * state, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHODINFO(0x047561E0, TaskFactory_1_System_Nullable_1__FromAsyncImpl__MethodInfo)
}
