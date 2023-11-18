#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Base64Stream_WriteAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Base64Stream.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Base64Stream_WriteAsyncResult {
    IL2CPP_REGISTER_METHOD(0x020139E0, void, ctor, (app::Base64Stream_WriteAsyncResult * this_ptr, app::Base64Stream* parent, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x02014150, void, Write, (app::Base64Stream_WriteAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02014420, void, CompleteWrite, (app::Base64Stream_WriteAsyncResult * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x02014490, void, OnWrite, (app::IAsyncResult * result))
    IL2CPP_REGISTER_METHOD(0x02014620, void, End, (app::IAsyncResult * result))
    IL2CPP_REGISTER_METHOD(0x02014740, void, cctor, ())
} // namespace app::classes::System::Net::Base64Stream_WriteAsyncResult
