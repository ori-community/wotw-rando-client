#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlatformStorageWriteEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformStorageWriteEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlatformStorageWriteEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01434D20, app::Task*, Invoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::String* key, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::String* key, app::Byte__Array* data, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Task*, EndInvoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::PlatformStorageWriteEventHandler
