#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RequestStream.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Net::RequestStream {
    IL2CPP_REGISTER_METHOD(0x01BCE410, void, ctor_1, (app::RequestStream * this_ptr, app::Stream* stream, app::Byte__Array* buffer, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x01BCE440, void, ctor_2, (app::RequestStream * this_ptr, app::Stream* stream, app::Byte__Array* buffer, int32_t offset, int32_t length, int64_t contentlength))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanWrite, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCE510, int64_t, get_Length, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCE560, int64_t, get_Position, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCE5B0, void, set_Position, (app::RequestStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01132D30, void, Close, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::RequestStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCE600, int32_t, FillFromBuffer, (app::RequestStream * this_ptr, app::Byte__Array* buffer, int32_t off, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01BCE8F0, int32_t, Read, (app::RequestStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01BCEA80, app::IAsyncResult*, BeginRead, (app::RequestStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* cback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCED70, int32_t, EndRead, (app::RequestStream * this_ptr, app::IAsyncResult* ares))
    IL2CPP_REGISTER_METHOD(0x01BCEFC0, int64_t, Seek, (app::RequestStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01BCF010, void, SetLength, (app::RequestStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01BCF060, void, Write, (app::RequestStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01BCF0B0, app::IAsyncResult*, BeginWrite, (app::RequestStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* cback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCF100, void, EndWrite, (app::RequestStream * this_ptr, app::IAsyncResult* async_result))
} // namespace app::classes::System::Net::RequestStream
