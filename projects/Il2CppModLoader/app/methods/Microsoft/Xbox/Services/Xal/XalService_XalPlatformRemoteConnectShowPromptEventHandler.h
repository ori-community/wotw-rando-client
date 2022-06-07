#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformRemoteConnectShowPromptEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XalService_XalPlatformRemoteConnectShowPromptEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0143DE90, void, Invoke, (app::XalService_XalPlatformRemoteConnectShowPromptEventHandler * this_ptr, void * context, void * user_context, void * operation, app::String * url, app::String * code))
    IL2CPP_REGISTER_METHOD(0x0143E320, app::IAsyncResult *, BeginInvoke, (app::XalService_XalPlatformRemoteConnectShowPromptEventHandler * this_ptr, void * context, void * user_context, void * operation, app::String * url, app::String * code, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalPlatformRemoteConnectShowPromptEventHandler * this_ptr, app::IAsyncResult * result))
}
