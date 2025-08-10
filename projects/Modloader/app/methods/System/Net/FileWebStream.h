#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CloseExState__Enum.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/FileMode__Enum.h>
#include <Modloader/app/structs/FileShare__Enum.h>
#include <Modloader/app/structs/FileWebRequest.h>
#include <Modloader/app/structs/FileWebStream.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::FileWebStream {
    IL2CPP_REGISTER_METHOD(
        0x01D2BB10,
        void,
        ctor_1,
        app::FileWebStream* this_ptr,
        app::FileWebRequest* request,
        app::String* path,
        app::FileMode__Enum mode,
        app::FileAccess__Enum access,
        app::FileShare__Enum sharing
    )
    IL2CPP_REGISTER_METHOD(
        0x01D2BC10,
        void,
        ctor_2,
        app::FileWebStream* this_ptr,
        app::FileWebRequest* request,
        app::String* path,
        app::FileMode__Enum mode,
        app::FileAccess__Enum access,
        app::FileShare__Enum sharing,
        int32_t length,
        bool async
    )
    IL2CPP_REGISTER_METHOD(0x01D2BD30, void, Dispose, app::FileWebStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01D2BDF0, void, ICloseEx_CloseEx, app::FileWebStream* this_ptr, app::CloseExState__Enum close_state)
    IL2CPP_REGISTER_METHOD(0x01D2BE40, int32_t, Read, app::FileWebStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01D2BF20, void, Write, app::FileWebStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(
        0x01D2C000,
        app::IAsyncResult*,
        BeginRead,
        app::FileWebStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01D2C100, int32_t, EndRead, app::FileWebStream* this_ptr, app::IAsyncResult* ar)
    IL2CPP_REGISTER_METHOD(
        0x01D2C1C0,
        app::IAsyncResult*,
        BeginWrite,
        app::FileWebStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01D2C2C0, void, EndWrite, app::FileWebStream* this_ptr, app::IAsyncResult* ar)
    IL2CPP_REGISTER_METHOD(0x01D2C380, void, CheckError, app::FileWebStream* this_ptr)
} // namespace app::classes::System::Net::FileWebStream
