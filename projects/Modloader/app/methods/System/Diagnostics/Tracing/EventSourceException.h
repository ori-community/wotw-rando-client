#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventSourceException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::Tracing::EventSourceException {
    IL2CPP_REGISTER_METHOD(0x019FD3F0, void, ctor_1, app::EventSourceException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019FD4A0, void, ctor_2, app::EventSourceException* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x019FD560, void, ctor_3, app::EventSourceException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x019FD620, void, ctor_4, app::EventSourceException* this_ptr, app::Exception* inner_exception)
} // namespace app::classes::System::Diagnostics::Tracing::EventSourceException
