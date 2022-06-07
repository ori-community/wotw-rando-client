#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02778BD0, void, ctor_1, (app::TaskFactory_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02778C10, void, ctor_2, (app::TaskFactory_1_System_Boolean_ * this_ptr, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskContinuationOptions__Enum continuation_options, app::TaskScheduler * scheduler))
    IL2CPP_REGISTER_METHOD(0x02778C80, app::Task_1_System_Boolean_ *, StartNew, (app::TaskFactory_1_System_Boolean_ * this_ptr, app::Func_1_Boolean_ * function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskScheduler * scheduler))
    IL2CPP_REGISTER_METHOD(0x02778E10, void, FromAsyncCoreLogic, (app::IAsyncResult * iar, app::Func_2_IAsyncResult_Boolean_ * end_function, app::Action_1_IAsyncResult_ * end_action, app::Task_1_System_Boolean_ * promise, bool requires_synchronization))
    IL2CPP_REGISTER_METHOD(0x027792C0, app::Task_1_System_Boolean_ *, FromAsync, (app::TaskFactory_1_System_Boolean_ * this_ptr, app::Func_3_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_2_IAsyncResult_Boolean_ * end_method, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x02779310, app::Task_1_System_Boolean_ *, FromAsyncImpl, (app::Func_3_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_2_IAsyncResult_Boolean_ * end_function, app::Action_1_IAsyncResult_ * end_action, app::Object * state, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHODINFO(0x0475BEF0, TaskFactory_1_System_Boolean__FromAsyncImpl__MethodInfo)
}
