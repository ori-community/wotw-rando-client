#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::SimpleAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01BDA2F0, void, ctor_1, (app::SimpleAsyncResult * this_ptr, app::SimpleAsyncCallback* cb))
    IL2CPP_REGISTER_METHOD(0x01BDA440, void, ctor_2, (app::SimpleAsyncResult * this_ptr, app::AsyncCallback* cb, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BDA740, void, Run, (app::Func_2_System_Net_SimpleAsyncResult_Boolean_ * func, app::SimpleAsyncCallback* callback))
    IL2CPP_REGISTER_METHOD(0x01BDAA30, void, RunWithLock, (app::Object * locker, app::Func_2_System_Net_SimpleAsyncResult_Boolean_* func, app::SimpleAsyncCallback* callback))
    IL2CPP_REGISTER_METHOD(0x01BDAD50, void, Reset_internal, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDAE40, void, SetCompleted_1, (app::SimpleAsyncResult * this_ptr, bool synch, app::Exception* e))
    IL2CPP_REGISTER_METHOD(0x01BDAE80, void, SetCompleted_2, (app::SimpleAsyncResult * this_ptr, bool synch))
    IL2CPP_REGISTER_METHOD(0x01BDAEC0, void, SetCompleted_internal_1, (app::SimpleAsyncResult * this_ptr, bool synch, app::Exception* e))
    IL2CPP_REGISTER_METHOD(0x01BDAFB0, void, SetCompleted_internal_2, (app::SimpleAsyncResult * this_ptr, bool synch))
    IL2CPP_REGISTER_METHOD(0x01BDAFC0, void, DoCallback_private, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDAFF0, void, DoCallback_internal, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDB020, void, WaitUntilComplete_1, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDB070, bool, WaitUntilComplete_2, (app::SimpleAsyncResult * this_ptr, int32_t timeout, bool exit_context))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_AsyncState, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDB0F0, app::WaitHandle*, get_AsyncWaitHandle, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDB340, bool, get_CompletedSynchronously, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_CompletedSynchronouslyPeek, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDB500, bool, get_IsCompleted, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00938880, bool, get_GotException, (app::SimpleAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Exception*, get_Exception, (app::SimpleAsyncResult * this_ptr))
} // namespace app::classes::System::Net::SimpleAsyncResult
