#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::FtpAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01D2C460, void, ctor, (app::FtpAsyncResult * this_ptr, app::AsyncCallback * callback, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Object *, get_AsyncState, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2C5C0, app::WaitHandle *, get_AsyncWaitHandle, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_CompletedSynchronously, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2C7F0, bool, get_IsCompleted, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00519280, bool, get_GotException, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Exception *, get_Exception, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::FtpWebResponse *, get_Response, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Response, (app::FtpAsyncResult * this_ptr, app::FtpWebResponse * value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Stream *, get_Stream, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Stream, (app::FtpAsyncResult * this_ptr, app::Stream * value))
    IL2CPP_REGISTER_METHOD(0x01D2C8E0, void, WaitUntilComplete_1, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2C930, bool, WaitUntilComplete_2, (app::FtpAsyncResult * this_ptr, int32_t timeout, bool exit_context))
    IL2CPP_REGISTER_METHOD(0x01D2C9B0, void, SetCompleted_1, (app::FtpAsyncResult * this_ptr, bool synch, app::Exception * exc, app::FtpWebResponse * response))
    IL2CPP_REGISTER_METHOD(0x01D2CAB0, void, SetCompleted_2, (app::FtpAsyncResult * this_ptr, bool synch, app::FtpWebResponse * response))
    IL2CPP_REGISTER_METHOD(0x01D2CAD0, void, SetCompleted_3, (app::FtpAsyncResult * this_ptr, bool synch, app::Exception * exc))
    IL2CPP_REGISTER_METHOD(0x01D2CAF0, void, DoCallback, (app::FtpAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2CBA0, void, Reset, (app::FtpAsyncResult * this_ptr))
}
