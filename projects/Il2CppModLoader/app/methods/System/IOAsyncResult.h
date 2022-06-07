#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IOAsyncResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::IOAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200AA90, void, Init, (app::IOAsyncResult * this_ptr, app::AsyncCallback * async_callback, app::Object * async_state))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::IOAsyncResult * this_ptr, app::AsyncCallback * async_callback, app::Object * async_state))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::AsyncCallback *, get_AsyncCallback, (app::IOAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, get_AsyncState, (app::IOAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200AAB0, app::WaitHandle *, get_AsyncWaitHandle, (app::IOAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CompletedSynchronously, (app::IOAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_CompletedSynchronously, (app::IOAsyncResult * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_IsCompleted, (app::IOAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200ACF0, void, set_IsCompleted, (app::IOAsyncResult * this_ptr, bool value))
}
