#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::PlatformStorageWriteEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlatformStorageWriteEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01434D20, app::Task *, Invoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::String * key, app::Byte__Array * data))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::String * key, app::Byte__Array * data, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Task *, EndInvoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::IAsyncResult * result))
}
