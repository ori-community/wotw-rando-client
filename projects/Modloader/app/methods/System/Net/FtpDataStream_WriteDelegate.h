#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FtpDataStream_WriteDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::FtpDataStream_WriteDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::FtpDataStream_WriteDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (app::FtpDataStream_WriteDelegate * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01D2ED60, app::IAsyncResult*, BeginInvoke, (app::FtpDataStream_WriteDelegate * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::FtpDataStream_WriteDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::FtpDataStream_WriteDelegate
