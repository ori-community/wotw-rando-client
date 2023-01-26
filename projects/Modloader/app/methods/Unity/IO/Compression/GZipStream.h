#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GZipStream_2.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompressionMode__Enum_2.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::Unity::IO::Compression::GZipStream {
    IL2CPP_REGISTER_METHOD(0x02B78E60, void, ctor_1, (app::GZipStream_2 * this_ptr, app::Stream* stream, app::CompressionMode__Enum_2 mode))
    IL2CPP_REGISTER_METHOD(0x02B78E80, void, ctor_2, (app::GZipStream_2 * this_ptr, app::Stream* stream, app::CompressionMode__Enum_2 mode, bool leave_open))
    IL2CPP_REGISTER_METHOD(0x02B79020, void, SetDeflateStreamFileFormatter, (app::GZipStream_2 * this_ptr, app::CompressionMode__Enum_2 mode))
    IL2CPP_REGISTER_METHOD(0x0200A160, bool, get_CanRead, (app::GZipStream_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A180, bool, get_CanWrite, (app::GZipStream_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A1A0, bool, get_CanSeek, (app::GZipStream_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B79310, int64_t, get_Length, (app::GZipStream_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B79380, int64_t, get_Position, (app::GZipStream_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B793F0, void, set_Position, (app::GZipStream_2 * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x02B79460, void, Flush, (app::GZipStream_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B79540, int64_t, Seek, (app::GZipStream_2 * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x02B795B0, void, SetLength, (app::GZipStream_2 * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x02B79620, app::IAsyncResult*, BeginRead, (app::GZipStream_2 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, app::AsyncCallback* async_callback, app::Object* async_state))
    IL2CPP_REGISTER_METHOD(0x02B79720, int32_t, EndRead, (app::GZipStream_2 * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02B79800, app::IAsyncResult*, BeginWrite, (app::GZipStream_2 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, app::AsyncCallback* async_callback, app::Object* async_state))
    IL2CPP_REGISTER_METHOD(0x02B79900, void, EndWrite, (app::GZipStream_2 * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02B799E0, int32_t, Read, (app::GZipStream_2 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B79AE0, void, Write, (app::GZipStream_2 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B79BE0, void, Dispose, (app::GZipStream_2 * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02B79C80, app::Stream*, get_BaseStream, (app::GZipStream_2 * this_ptr))
} // namespace app::classes::Unity::IO::Compression::GZipStream
