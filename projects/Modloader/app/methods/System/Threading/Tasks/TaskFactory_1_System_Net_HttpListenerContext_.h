#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task_1_System_Net_HttpListenerContext_.h>
#include <Modloader/app/structs/Func_2_IAsyncResult_System_Net_HttpListenerContext_.h>
#include <Modloader/app/structs/Func_3_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskFactory_1_System_Net_HttpListenerContext_.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_System_Net_HttpListenerContext_ {
    IL2CPP_REGISTER_METHOD(0x027792C0, app::Task_1_System_Net_HttpListenerContext_*, FromAsync, (app::TaskFactory_1_System_Net_HttpListenerContext_ * this_ptr, app::Func_3_AsyncCallback_Object_IAsyncResult_* begin_method, app::Func_2_IAsyncResult_System_Net_HttpListenerContext_* end_method, app::Object* state))
}
