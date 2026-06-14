#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::UnityEngine::ManagedStreamHelpers {
    IL2CPP_REGISTER_METHOD(0x02530BF0, void, ValidateLoadFromStream, app::Stream* stream)
    IL2CPP_REGISTER_METHOD(
        0x02530D40,
        void,
        ManagedStreamRead,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::Stream* stream,
        void* return_value_address
    )
    IL2CPP_REGISTER_METHOD(0x02530E60, void, ManagedStreamSeek, int64_t offset, uint32_t origin, app::Stream* stream, void* return_value_address)
    IL2CPP_REGISTER_METHOD(0x02530F60, void, ManagedStreamLength, app::Stream* stream, void* return_value_address)
} // namespace app::classes::UnityEngine::ManagedStreamHelpers
