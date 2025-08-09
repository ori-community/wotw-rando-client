#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ChunkedInputStream_ReadBufferState.h>
#include <Modloader/app/structs/HttpStreamAsyncResult.h>

namespace app::classes::System::Net::ChunkedInputStream_ReadBufferState {
    IL2CPP_REGISTER_METHOD(
        0x02017B30,
        void,
        ctor,
        app::ChunkedInputStream_ReadBufferState* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::HttpStreamAsyncResult* ares
    )
}
