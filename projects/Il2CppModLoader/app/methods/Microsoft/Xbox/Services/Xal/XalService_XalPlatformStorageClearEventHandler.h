#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformStorageClearEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XalService_XalPlatformStorageClearEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::XalService_XalPlatformStorageClearEventHandler * this_ptr, void * context, void * user_context, void * operation, app::String * key))
    IL2CPP_REGISTER_METHOD(0x0143E430, app::IAsyncResult *, BeginInvoke, (app::XalService_XalPlatformStorageClearEventHandler * this_ptr, void * context, void * user_context, void * operation, app::String * key, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalPlatformStorageClearEventHandler * this_ptr, app::IAsyncResult * result))
}
