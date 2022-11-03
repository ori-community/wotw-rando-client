#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::Compression::DeflateStream_ReadMethod {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DeflateStream_ReadMethod * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (app::DeflateStream_ReadMethod * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x020082F0, app::IAsyncResult*, BeginInvoke, (app::DeflateStream_ReadMethod * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::DeflateStream_ReadMethod * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::IO::Compression::DeflateStream_ReadMethod
