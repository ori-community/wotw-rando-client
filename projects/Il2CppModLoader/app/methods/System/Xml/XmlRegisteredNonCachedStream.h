#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::XmlRegisteredNonCachedStream {
    IL2CPP_REGISTER_METHOD(0x01706880, void, ctor, (app::XmlRegisteredNonCachedStream * this_ptr, app::Stream* stream, app::XmlDownloadManager* download_manager, app::String* host))
    IL2CPP_REGISTER_METHOD(0x01706940, void, Finalize, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017069E0, void, Dispose, (app::XmlRegisteredNonCachedStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01706B30, app::IAsyncResult*, BeginRead, (app::XmlRegisteredNonCachedStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01706B60, app::IAsyncResult*, BeginWrite, (app::XmlRegisteredNonCachedStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01706B90, int32_t, EndRead, (app::XmlRegisteredNonCachedStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01706BC0, void, EndWrite, (app::XmlRegisteredNonCachedStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01706BF0, void, Flush, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706C20, int32_t, Read, (app::XmlRegisteredNonCachedStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01706C50, int32_t, ReadByte, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706C80, int64_t, Seek, (app::XmlRegisteredNonCachedStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01706CB0, void, SetLength, (app::XmlRegisteredNonCachedStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01706CE0, void, Write, (app::XmlRegisteredNonCachedStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01706D10, void, WriteByte, (app::XmlRegisteredNonCachedStream * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x01706D40, bool, get_CanRead, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706D70, bool, get_CanSeek, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706DD0, int64_t, get_Length, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706E00, int64_t, get_Position, (app::XmlRegisteredNonCachedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706E30, void, set_Position, (app::XmlRegisteredNonCachedStream * this_ptr, int64_t value))
} // namespace app::classes::System::Xml::XmlRegisteredNonCachedStream
