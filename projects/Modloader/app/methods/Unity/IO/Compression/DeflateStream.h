#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeflateStream_1.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompressionMode__Enum_2.h>
#include <Modloader/app/structs/DeflateStreamAsyncResult.h>
#include <Modloader/app/structs/DeflateStream_WorkerType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IDeflater.h>
#include <Modloader/app/structs/IFileFormatReader.h>
#include <Modloader/app/structs/IFileFormatWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::Unity::IO::Compression::DeflateStream {
    IL2CPP_REGISTER_METHOD(0x02B72150, void, ctor_1, (app::DeflateStream_1 * this_ptr, app::Stream* stream, app::CompressionMode__Enum_2 mode))
    IL2CPP_REGISTER_METHOD(0x02B72170, void, ctor_2, (app::DeflateStream_1 * this_ptr, app::Stream* stream, app::CompressionMode__Enum_2 mode, bool leave_open))
    IL2CPP_REGISTER_METHOD(0x02B72830, app::IDeflater*, CreateDeflater, ())
    IL2CPP_REGISTER_METHOD(0x00417870, app::DeflateStream_WorkerType__Enum, GetDeflaterType, ())
    IL2CPP_REGISTER_METHOD(0x02B72970, void, SetFileFormatReader, (app::DeflateStream_1 * this_ptr, app::IFileFormatReader* reader))
    IL2CPP_REGISTER_METHOD(0x02B729A0, void, SetFileFormatWriter, (app::DeflateStream_1 * this_ptr, app::IFileFormatWriter* writer))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Stream*, get_BaseStream, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B729B0, bool, get_CanRead, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B729E0, bool, get_CanWrite, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B72A10, int64_t, get_Length, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B72A80, int64_t, get_Position, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B72AF0, void, set_Position, (app::DeflateStream_1 * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x02B72B60, void, Flush, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B72B70, int64_t, Seek, (app::DeflateStream_1 * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x02B72BE0, void, SetLength, (app::DeflateStream_1 * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x02B72C50, int32_t, Read, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B72DA0, void, ValidateParameters, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B72F20, void, EnsureNotDisposed, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B72FF0, void, EnsureDecompressionMode, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B730B0, void, EnsureCompressionMode, (app::DeflateStream_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B73170, app::IAsyncResult*, BeginRead, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, app::AsyncCallback* async_callback, app::Object* async_state))
    IL2CPP_REGISTER_METHOD(0x02B734B0, void, ReadCallback, (app::DeflateStream_1 * this_ptr, app::IAsyncResult* base_stream_result))
    IL2CPP_REGISTER_METHOD(0x02B73740, int32_t, EndRead, (app::DeflateStream_1 * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02B738E0, void, Write, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B73960, void, InternalWrite, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, bool is_async))
    IL2CPP_REGISTER_METHOD(0x02B73B50, void, WriteDeflaterOutput, (app::DeflateStream_1 * this_ptr, bool is_async))
    IL2CPP_REGISTER_METHOD(0x02B73D30, void, DoWrite, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, bool is_async))
    IL2CPP_REGISTER_METHOD(0x02B73DC0, void, DoMaintenance, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B73EF0, void, PurgeBuffers, (app::DeflateStream_1 * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02B74100, void, Dispose, (app::DeflateStream_1 * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02B74310, app::IAsyncResult*, BeginWrite, (app::DeflateStream_1 * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count, app::AsyncCallback* async_callback, app::Object* async_state))
    IL2CPP_REGISTER_METHOD(0x02B74640, void, WriteCallback, (app::DeflateStream_1 * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02B747C0, void, EndWrite, (app::DeflateStream_1 * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02B74930, void, CheckEndXxxxLegalStateAndParams, (app::DeflateStream_1 * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02B74AB0, void, AwaitAsyncResultCompletion, (app::DeflateStream_1 * this_ptr, app::DeflateStreamAsyncResult* async_result))
} // namespace app::classes::Unity::IO::Compression::DeflateStream
