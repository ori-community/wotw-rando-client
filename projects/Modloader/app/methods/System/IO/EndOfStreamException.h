#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EndOfStreamException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::IO::EndOfStreamException {
    IL2CPP_REGISTER_METHOD(0x01E051C0, void, ctor_1, (app::EndOfStreamException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E05250, void, ctor_2, (app::EndOfStreamException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::EndOfStreamException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::IO::EndOfStreamException
