#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpListenerResponse.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResponseStream.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Net::ResponseStream {
    IL2CPP_REGISTER_METHOD(0x01BCF150, void, ctor, app::ResponseStream* this_ptr, app::Stream* stream, app::HttpListenerResponse* response, bool ignore_errors)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanRead, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCF210, int64_t, get_Length, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCF260, int64_t, get_Position, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCF2B0, void, set_Position, app::ResponseStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BCF300, void, Close, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCF5A0, app::MemoryStream*, GetHeaders, app::ResponseStream* this_ptr, bool closing)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, app::ResponseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCF840, app::Byte__Array*, GetChunkSizeBytes, int32_t size, bool final_1)
    IL2CPP_REGISTER_METHOD(0x01BCF970, void, InternalWrite, app::ResponseStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01BCFA80, void, Write, app::ResponseStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x01BCFDF0,
        app::IAsyncResult*,
        BeginWrite,
        app::ResponseStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* cback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BD00B0, void, EndWrite, app::ResponseStream* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x01BD0310, int32_t, Read, app::ResponseStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x01BD0360,
        app::IAsyncResult*,
        BeginRead,
        app::ResponseStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* cback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BD03B0, int32_t, EndRead, app::ResponseStream* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x01BD0400, int64_t, Seek, app::ResponseStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01BD0450, void, SetLength, app::ResponseStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BD04A0, void, cctor, )
} // namespace app::classes::System::Net::ResponseStream
