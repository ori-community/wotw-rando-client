#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Ionic::Zlib::DeflateManager_CompressFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DeflateManager_CompressFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B33400, app::BlockState__Enum, Invoke, (app::DeflateManager_CompressFunc * this_ptr, app::FlushType__Enum flush))
    IL2CPP_REGISTER_METHOD(0x0306C060, app::IAsyncResult*, BeginInvoke, (app::DeflateManager_CompressFunc * this_ptr, app::FlushType__Enum flush, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::BlockState__Enum, EndInvoke, (app::DeflateManager_CompressFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Ionic::Zlib::DeflateManager_CompressFunc
