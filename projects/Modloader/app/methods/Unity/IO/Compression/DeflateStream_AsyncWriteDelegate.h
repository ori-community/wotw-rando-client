#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Unity::IO::Compression::DeflateStream_AsyncWriteDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DeflateStream_AsyncWriteDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B74C40, void, Invoke, (app::DeflateStream_AsyncWriteDelegate * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, bool is_async))
    IL2CPP_REGISTER_METHOD(0x02B75230, app::IAsyncResult*, BeginInvoke, (app::DeflateStream_AsyncWriteDelegate * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, bool is_async, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DeflateStream_AsyncWriteDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Unity::IO::Compression::DeflateStream_AsyncWriteDelegate
