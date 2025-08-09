#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeoutException.h>

namespace app::classes::System::TimeoutException {
    IL2CPP_REGISTER_METHOD(0x027BB380, void, ctor_1, app::TimeoutException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BB410, void, ctor_2, app::TimeoutException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::TimeoutException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::TimeoutException
