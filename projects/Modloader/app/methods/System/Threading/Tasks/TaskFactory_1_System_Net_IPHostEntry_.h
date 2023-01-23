#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Task_1_System_Net_IPHostEntry_.h>
#include <Modloader/app/structs/TaskFactory_1_System_Net_IPHostEntry_.h>
#include <Modloader/app/structs/Func_4_System_Net_IPAddress_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/Func_2_IAsyncResult_System_Net_IPHostEntry_.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Func_4_String_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Net_IPHostEntry_ {
    IL2CPP_REGISTER_METHOD(0x01544F10, app::Task_1_System_Net_IPHostEntry_*, FromAsync_1, (app::TaskFactory_1_System_Net_IPHostEntry_ * this_ptr, app::Func_4_System_Net_IPAddress_AsyncCallback_Object_IAsyncResult_* begin_method, app::Func_2_IAsyncResult_System_Net_IPHostEntry_* end_method, app::IPAddress* arg1, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x047162E0, TaskFactory_1_System_Net_IPHostEntry__FromAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01544F10, app::Task_1_System_Net_IPHostEntry_*, FromAsync_2, (app::TaskFactory_1_System_Net_IPHostEntry_ * this_ptr, app::Func_4_String_AsyncCallback_Object_IAsyncResult_* begin_method, app::Func_2_IAsyncResult_System_Net_IPHostEntry_* end_method, app::String* arg1, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04781E20, TaskFactory_1_System_Net_IPHostEntry__FromAsync_1__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Net_IPHostEntry_
