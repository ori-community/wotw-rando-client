#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_3_Object_IAsyncResult_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object_.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_TResult__FromAsyncTrimPromise_1_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x027779D0,
        void,
        ctor,
        app::TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object_* this_ptr,
        app::Object* this_ref,
        app::Func_3_Object_IAsyncResult_Object_* end_method
    )
    IL2CPP_REGISTER_METHOD(0x02778070, void, CompleteFromAsyncResult, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x027782C0,
        void,
        Complete,
        app::TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object_* this_ptr,
        app::Object* this_ref,
        app::Func_3_Object_IAsyncResult_Object_* end_method,
        app::IAsyncResult* async_result,
        bool requires_synchronization
    )
    IL2CPP_REGISTER_METHOD(0x02778480, void, cctor, )
} // namespace app::classes::System::Threading::Tasks::TaskFactory_1_TResult__FromAsyncTrimPromise_1_System_Object_System_Object_
