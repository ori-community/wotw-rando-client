#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StackOverflowException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::StackOverflowException {
    IL2CPP_REGISTER_METHOD(0x01E26AB0, void, ctor_1, (app::StackOverflowException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E26B40, void, ctor_2, (app::StackOverflowException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::StackOverflowException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::StackOverflowException
