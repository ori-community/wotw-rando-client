#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Threading::Tasks::TaskToApm {
    IL2CPP_REGISTER_METHOD(0x023401B0, app::IAsyncResult*, Begin, (app::Task * task, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x02340440, void, End_1, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x02340530, void, InvokeCallbackWhenTaskCompletes, (app::Task * antecedent, app::AsyncCallback* callback, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01580480, app::Object*, End_2, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x01580330, int32_t, End_3, (app::IAsyncResult * async_result))
} // namespace app::classes::System::Threading::Tasks::TaskToApm
