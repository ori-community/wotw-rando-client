#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InsufficientExecutionStackException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::InsufficientExecutionStackException {
    IL2CPP_REGISTER_METHOD(0x0238C370, void, ctor_1, (app::InsufficientExecutionStackException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_2, (app::InsufficientExecutionStackException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::InsufficientExecutionStackException
