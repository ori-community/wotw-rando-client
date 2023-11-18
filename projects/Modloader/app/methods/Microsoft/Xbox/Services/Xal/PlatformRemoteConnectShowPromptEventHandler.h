#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformRemoteConnectShowPromptEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformRemoteConnectShowPromptEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::String* url, app::String* code, app::CancellationTokenSource* cancellation))
    IL2CPP_REGISTER_METHOD(0x00DC7DB0, app::IAsyncResult*, BeginInvoke, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::String* url, app::String* code, app::CancellationTokenSource* cancellation, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformRemoteConnectShowPromptEventHandler
