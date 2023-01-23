#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FileStreamAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::System::IO::FileStreamAsyncResult {
    IL2CPP_REGISTER_METHOD(0x0236F0A0, void, ctor, (app::FileStreamAsyncResult * this_ptr, app::AsyncCallback* cb, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0236F2E0, void, CBWrapper, (app::IAsyncResult * ares))
    IL2CPP_REGISTER_METHODINFO(0x047115B0, FileStreamAsyncResult_CBWrapper__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_AsyncState, (app::FileStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_CompletedSynchronously, (app::FileStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::WaitHandle*, get_AsyncWaitHandle, (app::FileStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsCompleted, (app::FileStreamAsyncResult * this_ptr))
} // namespace app::classes::System::IO::FileStreamAsyncResult
