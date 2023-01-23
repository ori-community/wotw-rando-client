#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::IO::StreamReader {
    IL2CPP_REGISTER_METHOD(0x012EE6D0, int32_t, get_DefaultBufferSize, ())
    IL2CPP_REGISTER_METHOD(0x0237F810, void, CheckAsyncTaskInProgress, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047394C8, StreamReader_CheckAsyncTaskInProgress__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237F8F0, void, ctor_1, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237F980, void, ctor_2, (app::StreamReader * this_ptr, app::Stream* stream))
    IL2CPP_REGISTER_METHOD(0x0237FA60, void, ctor_3, (app::StreamReader * this_ptr, app::Stream* stream, bool detect_encoding_from_byte_order_marks))
    IL2CPP_REGISTER_METHOD(0x0237FB50, void, ctor_4, (app::StreamReader * this_ptr, app::Stream* stream, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x0237FC30, void, ctor_5, (app::StreamReader * this_ptr, app::Stream* stream, app::Encoding* encoding, bool detect_encoding_from_byte_order_marks))
    IL2CPP_REGISTER_METHOD(0x0237FD20, void, ctor_6, (app::StreamReader * this_ptr, app::Stream* stream, app::Encoding* encoding, bool detect_encoding_from_byte_order_marks, int32_t buffer_size, bool leave_open))
    IL2CPP_REGISTER_METHODINFO(0x0478FEF0, StreamReader__ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237FF00, void, ctor_7, (app::StreamReader * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x0237FFE0, void, ctor_8, (app::StreamReader * this_ptr, app::String* path, bool detect_encoding_from_byte_order_marks))
    IL2CPP_REGISTER_METHOD(0x023800D0, void, ctor_9, (app::StreamReader * this_ptr, app::String* path, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x023801B0, void, ctor_10, (app::StreamReader * this_ptr, app::String* path, app::Encoding* encoding, bool detect_encoding_from_byte_order_marks, int32_t buffer_size))
    IL2CPP_REGISTER_METHOD(0x023801E0, void, ctor_11, (app::StreamReader * this_ptr, app::String* path, app::Encoding* encoding, bool detect_encoding_from_byte_order_marks, int32_t buffer_size, bool check_host))
    IL2CPP_REGISTER_METHODINFO(0x04702D18, StreamReader__ctor_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023804E0, void, Init_1, (app::StreamReader * this_ptr, app::Stream* stream, app::Encoding* encoding, bool detect_encoding_from_byte_order_marks, int32_t buffer_size, bool leave_open))
    IL2CPP_REGISTER_METHOD(0x02380640, void, Init_2, (app::StreamReader * this_ptr, app::Stream* stream))
    IL2CPP_REGISTER_METHOD(0x02380650, void, Close, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02380670, void, Dispose, (app::StreamReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Encoding*, get_CurrentEncoding, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Stream*, get_BaseStream, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02380750, bool, get_LeaveOpen, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02380760, bool, get_EndOfStream, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023807B0, int32_t, Peek, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02380840, bool, DataAvailable, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02380850, int32_t, Read_1, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023808E0, int32_t, Read_2, (app::StreamReader * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0476D3B8, StreamReader_Read_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02380B40, app::String*, ReadToEnd, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02380D20, void, CompressBuffer, (app::StreamReader * this_ptr, int32_t n))
    IL2CPP_REGISTER_METHOD(0x02380D60, void, DetectEncoding, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023813E0, bool, IsPreamble, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02381530, int32_t, ReadBuffer_1, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02381710, int32_t, ReadBuffer_2, (app::StreamReader * this_ptr, app::Char__Array* user_buffer, int32_t user_offset, int32_t desired_chars, bool* read_to_user_buffer))
    IL2CPP_REGISTER_METHOD(0x02381990, app::String*, ReadLine, (app::StreamReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02381C90, void, cctor, ())
} // namespace app::classes::System::IO::StreamReader
