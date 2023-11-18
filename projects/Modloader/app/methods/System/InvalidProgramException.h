#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InvalidProgramException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::InvalidProgramException {
    IL2CPP_REGISTER_METHOD(0x02265EC0, void, ctor_1, (app::InvalidProgramException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02265F50, void, ctor_2, (app::InvalidProgramException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::InvalidProgramException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::InvalidProgramException
