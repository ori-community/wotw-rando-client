#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalService_XalPlatformRemoteConnectClosePromptEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XalService_XalPlatformRemoteConnectClosePromptEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (app::XalService_XalPlatformRemoteConnectClosePromptEventHandler * this_ptr, void* context, void* user_context, void* operation))
    IL2CPP_REGISTER_METHOD(0x0143DDA0, app::IAsyncResult*, BeginInvoke, (app::XalService_XalPlatformRemoteConnectClosePromptEventHandler * this_ptr, void* context, void* user_context, void* operation, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalPlatformRemoteConnectClosePromptEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalService_XalPlatformRemoteConnectClosePromptEventHandler
