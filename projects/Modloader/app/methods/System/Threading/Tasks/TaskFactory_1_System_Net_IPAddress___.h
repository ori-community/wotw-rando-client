#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Task_1_System_Net_IPAddress_.h>
#include <Modloader/app/structs/TaskFactory_1_System_Net_IPAddress_.h>
#include <Modloader/app/structs/Func_4_String_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/Func_2_IAsyncResult_System_Net_IPAddress_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Net_IPAddress___ {
    IL2CPP_REGISTER_METHOD(0x01544F10, app::Task_1_System_Net_IPAddress_*, FromAsync, (app::TaskFactory_1_System_Net_IPAddress_ * this_ptr, app::Func_4_String_AsyncCallback_Object_IAsyncResult_* begin_method, app::Func_2_IAsyncResult_System_Net_IPAddress_* end_method, app::String* arg1, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04784388, TaskFactory_1_System_Net_IPAddress__FromAsync__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Net_IPAddress___
