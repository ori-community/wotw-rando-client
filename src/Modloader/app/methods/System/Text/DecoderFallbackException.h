#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DecoderFallbackException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::DecoderFallbackException {
    IL2CPP_REGISTER_METHOD(0x0244A140, void, ctor_1, app::DecoderFallbackException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, ctor_2, app::DecoderFallbackException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x0244A1D0,
        void,
        ctor_3,
        app::DecoderFallbackException* this_ptr,
        app::String* message,
        app::Byte__Array* bytes_unknown,
        int32_t index
    )
} // namespace app::classes::System::Text::DecoderFallbackException
