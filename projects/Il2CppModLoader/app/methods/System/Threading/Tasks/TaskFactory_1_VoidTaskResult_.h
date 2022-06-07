#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_1_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(0x01545B70, app::Task_1_VoidTaskResult_ *, FromAsyncTrim_1, (app::Stream * this_ref, app::Stream_ReadWriteParameters args, app::Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_3_System_IO_Stream_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * end_method))
    IL2CPP_REGISTER_METHODINFO(0x04787B00, TaskFactory_1_VoidTaskResult__FromAsyncTrim__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01545B70, app::Task_1_VoidTaskResult_ *, FromAsyncTrim_2, (app::Object * this_ref, app::Stream_ReadWriteParameters args, app::Func_5_Object_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_3_Object_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * end_method))
    IL2CPP_REGISTER_METHOD(0x02778BD0, void, ctor_1, (app::TaskFactory_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02778C10, void, ctor_2, (app::TaskFactory_1_VoidTaskResult_ * this_ptr, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskContinuationOptions__Enum continuation_options, app::TaskScheduler * scheduler))
    IL2CPP_REGISTER_METHOD(0x0277CED0, app::Task_1_VoidTaskResult_ *, StartNew, (app::TaskFactory_1_VoidTaskResult_ * this_ptr, app::Func_1_System_Threading_Tasks_VoidTaskResult_ * function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskScheduler * scheduler))
    IL2CPP_REGISTER_METHOD(0x0277D060, void, FromAsyncCoreLogic, (app::IAsyncResult * iar, app::Func_2_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * end_function, app::Action_1_IAsyncResult_ * end_action, app::Task_1_VoidTaskResult_ * promise, bool requires_synchronization))
    IL2CPP_REGISTER_METHOD(0x027792C0, app::Task_1_VoidTaskResult_ *, FromAsync, (app::TaskFactory_1_VoidTaskResult_ * this_ptr, app::Func_3_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_2_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * end_method, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x0277D500, app::Task_1_VoidTaskResult_ *, FromAsyncImpl, (app::Func_3_AsyncCallback_Object_IAsyncResult_ * begin_method, app::Func_2_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * end_function, app::Action_1_IAsyncResult_ * end_action, app::Object * state, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHODINFO(0x047374C0, TaskFactory_1_VoidTaskResult__FromAsyncImpl__MethodInfo)
}
