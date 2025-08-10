#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Base64Stream.h>
#include <Modloader/app/structs/Base64Stream_ReadAsyncResult.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Base64Stream_ReadAsyncResult {
    IL2CPP_REGISTER_METHOD(
        0x020139E0,
        void,
        ctor,
        app::Base64Stream_ReadAsyncResult* this_ptr,
        app::Base64Stream* parent,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x02013A50, bool, CompleteRead, app::Base64Stream_ReadAsyncResult* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x02013AE0, void, Read, app::Base64Stream_ReadAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02013D80, void, OnRead, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x02013F10, int32_t, End, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x02013FF0, void, cctor, )
} // namespace app::classes::System::Net::Base64Stream_ReadAsyncResult
