#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::Compression::DeflateStream_WriteMethod {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DeflateStream_WriteMethod * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (app::DeflateStream_WriteMethod * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x020083D0, app::IAsyncResult *, BeginInvoke, (app::DeflateStream_WriteMethod * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DeflateStream_WriteMethod * this_ptr, app::IAsyncResult * result))
}
