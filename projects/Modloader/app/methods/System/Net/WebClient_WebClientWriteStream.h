#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::WebClient_WebClientWriteStream {
    IL2CPP_REGISTER_METHOD(0x01D611E0, void, ctor, (app::WebClient_WebClientWriteStream * this_ptr, app::Stream* stream, app::WebRequest* request, app::WebClient* web_client))
    IL2CPP_REGISTER_METHOD(0x01D612A0, bool, get_CanRead, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D612D0, bool, get_CanSeek, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61300, bool, get_CanWrite, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61330, bool, get_CanTimeout, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61360, int32_t, get_ReadTimeout, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61390, void, set_ReadTimeout, (app::WebClient_WebClientWriteStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01D613C0, int32_t, get_WriteTimeout, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D613F0, void, set_WriteTimeout, (app::WebClient_WebClientWriteStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01D61420, int64_t, get_Length, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61450, int64_t, get_Position, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61480, void, set_Position, (app::WebClient_WebClientWriteStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01D614B0, app::IAsyncResult*, BeginRead, (app::WebClient_WebClientWriteStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01D614E0, app::IAsyncResult*, BeginWrite, (app::WebClient_WebClientWriteStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01D61510, void, Dispose, (app::WebClient_WebClientWriteStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01D61600, int32_t, EndRead, (app::WebClient_WebClientWriteStream * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01D61630, void, EndWrite, (app::WebClient_WebClientWriteStream * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01D61660, void, Flush, (app::WebClient_WebClientWriteStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61690, int32_t, Read, (app::WebClient_WebClientWriteStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01D616C0, int64_t, Seek, (app::WebClient_WebClientWriteStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01D616F0, void, SetLength, (app::WebClient_WebClientWriteStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01D61720, void, Write, (app::WebClient_WebClientWriteStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
} // namespace app::classes::System::Net::WebClient_WebClientWriteStream
