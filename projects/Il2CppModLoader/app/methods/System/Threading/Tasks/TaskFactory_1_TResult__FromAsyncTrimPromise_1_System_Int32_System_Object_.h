#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_TResult__FromAsyncTrimPromise_1_System_Int32_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x027779D0, void, ctor, (app::TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Int32_System_Object_ * this_ptr, app::Object* this_ref, app::Func_3_Object_IAsyncResult_Int32_* end_method))
    IL2CPP_REGISTER_METHOD(0x02777AC0, void, CompleteFromAsyncResult, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHODINFO(0x04721B28, TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Int32_System_Object__CompleteFromAsyncResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777D10, void, Complete, (app::TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Int32_System_Object_ * this_ptr, app::Object* this_ref, app::Func_3_Object_IAsyncResult_Int32_* end_method, app::IAsyncResult* async_result, bool requires_synchronization))
    IL2CPP_REGISTER_METHOD(0x02777ED0, void, cctor, ())
} // namespace app::classes::System::Threading::Tasks::TaskFactory_1_TResult__FromAsyncTrimPromise_1_System_Int32_System_Object_
