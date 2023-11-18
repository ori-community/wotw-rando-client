#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformRemoteConnectClosePromptEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformRemoteConnectClosePromptEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlatformRemoteConnectClosePromptEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::PlatformRemoteConnectClosePromptEventHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::PlatformRemoteConnectClosePromptEventHandler * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlatformRemoteConnectClosePromptEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformRemoteConnectClosePromptEventHandler
