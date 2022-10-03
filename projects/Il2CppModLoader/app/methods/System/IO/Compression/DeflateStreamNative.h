#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::Compression::DeflateStreamNative {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeflateStreamNative * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020084B0, app::DeflateStreamNative*, Create, (app::Stream * compressed_stream, app::CompressionMode__Enum mode, bool gzip))
    IL2CPP_REGISTER_METHOD(0x02008810, void, Finalize, (app::DeflateStreamNative * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020088F0, void, Dispose, (app::DeflateStreamNative * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x020089E0, void, Flush_1, (app::DeflateStreamNative * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02008AE0, int32_t, ReadZStream_1, (app::DeflateStreamNative * this_ptr, void* buffer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02008BE0, void, WriteZStream_1, (app::DeflateStreamNative * this_ptr, void* buffer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02008CE0, int32_t, UnmanagedRead_1, (void* buffer, int32_t length, void* data))
    IL2CPP_REGISTER_METHODINFO(0x0473D7D0, DeflateStreamNative_UnmanagedRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02008F00, int32_t, UnmanagedRead_2, (app::DeflateStreamNative * this_ptr, void* buffer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02009070, int32_t, UnmanagedWrite_1, (void* buffer, int32_t length, void* data))
    IL2CPP_REGISTER_METHODINFO(0x0478BAA8, DeflateStreamNative_UnmanagedWrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020092B0, int32_t, UnmanagedWrite_2, (app::DeflateStreamNative * this_ptr, void* buffer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02009430, void, CheckResult, (int32_t result, app::String* where))
    IL2CPP_REGISTER_METHODINFO(0x0472A070, DeflateStreamNative_CheckResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02009590, app::DeflateStreamNative_SafeDeflateStreamHandle*, CreateZStream, (app::CompressionMode__Enum compress, bool gzip, app::DeflateStreamNative_UnmanagedReadOrWrite* feeder, void* data))
    IL2CPP_REGISTER_METHOD(0x020097D0, int32_t, CloseZStream, (void* stream))
    IL2CPP_REGISTER_METHOD(0x020097E0, int32_t, Flush_2, (app::DeflateStreamNative_SafeDeflateStreamHandle * stream))
    IL2CPP_REGISTER_METHOD(0x02009880, int32_t, ReadZStream_2, (app::DeflateStreamNative_SafeDeflateStreamHandle * stream, void* buffer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02009900, int32_t, WriteZStream_2, (app::DeflateStreamNative_SafeDeflateStreamHandle * stream, void* buffer, int32_t length))
} // namespace app::classes::System::IO::Compression::DeflateStreamNative
