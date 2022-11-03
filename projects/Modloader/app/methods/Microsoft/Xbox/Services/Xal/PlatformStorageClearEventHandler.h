#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformStorageClearEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlatformStorageClearEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::Task*, Invoke, (app::PlatformStorageClearEventHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::PlatformStorageClearEventHandler * this_ptr, app::String* key, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Task*, EndInvoke, (app::PlatformStorageClearEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformStorageClearEventHandler
