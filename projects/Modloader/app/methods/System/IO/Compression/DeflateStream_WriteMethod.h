#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeflateStream_WriteMethod.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::IO::Compression::DeflateStream_WriteMethod {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DeflateStream_WriteMethod * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (app::DeflateStream_WriteMethod * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x020083D0, app::IAsyncResult*, BeginInvoke, (app::DeflateStream_WriteMethod * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DeflateStream_WriteMethod * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::IO::Compression::DeflateStream_WriteMethod
