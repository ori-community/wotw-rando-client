#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InternalException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Net::InternalException {
    IL2CPP_REGISTER_METHOD(0x01E25790, void, ctor_1, app::InternalException* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01A0FAA0,
        void,
        ctor_2,
        app::InternalException* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
} // namespace app::classes::System::Net::InternalException
