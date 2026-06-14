#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/NSAsyncQueueInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NSAsyncQueueInfo {
    IL2CPP_REGISTER_METHOD(
        0x0257B4C0,
        void,
        ctor_1,
        app::NSAsyncQueueInfo* this_ptr,
        app::String* typ,
        app::String* path,
        app::Byte__Array* data,
        int32_t file_size_in_bytes,
        bool overwrite,
        bool is_from_copy_request
    )
    IL2CPP_REGISTER_METHOD(0x0257B4F0, void, ctor_2, app::NSAsyncQueueInfo* this_ptr, app::String* typ, app::String* source, app::String* dest, bool overwrite)
} // namespace app::classes::NSAsyncQueueInfo
