#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskToApm_TaskWrapperAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult {
    IL2CPP_REGISTER_METHOD(0x010415E0, void, ctor, (app::TaskToApm_TaskWrapperAsyncResult * this_ptr, app::Task* task, app::Object* state, bool completed_synchronously))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IAsyncResult_get_AsyncState, (app::TaskToApm_TaskWrapperAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, IAsyncResult_get_CompletedSynchronously, (app::TaskToApm_TaskWrapperAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023407D0, bool, IAsyncResult_get_IsCompleted, (app::TaskToApm_TaskWrapperAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023407F0, app::WaitHandle*, IAsyncResult_get_AsyncWaitHandle, (app::TaskToApm_TaskWrapperAsyncResult * this_ptr))
} // namespace app::classes::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult
