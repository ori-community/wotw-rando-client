#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/FileStream_WriteDelegate.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::IO::FileStream_WriteDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::FileStream_WriteDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, app::FileStream_WriteDelegate* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x0236EFC0,
        app::IAsyncResult*,
        BeginInvoke,
        app::FileStream_WriteDelegate* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::FileStream_WriteDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::IO::FileStream_WriteDelegate
