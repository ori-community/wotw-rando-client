#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::PlatformStorageReadEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlatformStorageReadEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::Task_1_System_Byte_ *, Invoke, (app::PlatformStorageReadEventHandler * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::PlatformStorageReadEventHandler * this_ptr, app::String * key, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Task_1_System_Byte_ *, EndInvoke, (app::PlatformStorageReadEventHandler * this_ptr, app::IAsyncResult * result))
}
