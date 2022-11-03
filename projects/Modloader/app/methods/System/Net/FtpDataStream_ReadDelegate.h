#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::FtpDataStream_ReadDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::FtpDataStream_ReadDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (app::FtpDataStream_ReadDelegate * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01D2E740, app::IAsyncResult*, BeginInvoke, (app::FtpDataStream_ReadDelegate * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::FtpDataStream_ReadDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::FtpDataStream_ReadDelegate
