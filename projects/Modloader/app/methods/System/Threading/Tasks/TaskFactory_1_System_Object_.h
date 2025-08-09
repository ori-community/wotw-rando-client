#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_IAsyncResult_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Func_2_IAsyncResult_Object_.h>
#include <Modloader/app/structs/Func_3_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/Func_3_Object_IAsyncResult_Object_.h>
#include <Modloader/app/structs/Func_4_Object_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/Func_5_Object_Object_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/TaskFactory_1_System_Object_.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02778BD0, void, ctor_1, app::TaskFactory_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02778C10,
        void,
        ctor_2,
        app::TaskFactory_1_System_Object_* this_ptr,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::TaskContinuationOptions__Enum continuation_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(
        0x0277BE50,
        app::Task_1_System_Object_*,
        StartNew,
        app::TaskFactory_1_System_Object_* this_ptr,
        app::Func_1_Object_* function,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(
        0x0277BFE0,
        void,
        FromAsyncCoreLogic,
        app::IAsyncResult* iar,
        app::Func_2_IAsyncResult_Object_* end_function,
        app::Action_1_IAsyncResult_* end_action,
        app::Task_1_System_Object_* promise,
        bool requires_synchronization
    )
    IL2CPP_REGISTER_METHOD(
        0x027792C0,
        app::Task_1_System_Object_*,
        FromAsync_1,
        app::TaskFactory_1_System_Object_* this_ptr,
        app::Func_3_AsyncCallback_Object_IAsyncResult_* begin_method,
        app::Func_2_IAsyncResult_Object_* end_method,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x0277C490,
        app::Task_1_System_Object_*,
        FromAsyncImpl_1,
        app::Func_3_AsyncCallback_Object_IAsyncResult_* begin_method,
        app::Func_2_IAsyncResult_Object_* end_function,
        app::Action_1_IAsyncResult_* end_action,
        app::Object* state,
        app::TaskCreationOptions__Enum creation_options
    )
    IL2CPP_REGISTER_METHOD(
        0x01544F10,
        app::Task_1_System_Object_*,
        FromAsync_2,
        app::TaskFactory_1_System_Object_* this_ptr,
        app::Func_4_Object_AsyncCallback_Object_IAsyncResult_* begin_method,
        app::Func_2_IAsyncResult_Object_* end_method,
        app::Object* arg1,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01544F60,
        app::Task_1_System_Object_*,
        FromAsyncImpl_2,
        app::Func_4_Object_AsyncCallback_Object_IAsyncResult_* begin_method,
        app::Func_2_IAsyncResult_Object_* end_function,
        app::Action_1_IAsyncResult_* end_action,
        app::Object* arg1,
        app::Object* state,
        app::TaskCreationOptions__Enum creation_options
    )
    IL2CPP_REGISTER_METHOD(
        0x015458E0,
        app::Task_1_System_Object_*,
        FromAsyncTrim,
        app::Object* this_ref,
        app::Object* args,
        app::Func_5_Object_Object_AsyncCallback_Object_IAsyncResult_* begin_method,
        app::Func_3_Object_IAsyncResult_Object_* end_method
    )
} // namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Object_
