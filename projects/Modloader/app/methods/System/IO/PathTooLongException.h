#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PathTooLongException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::PathTooLongException {
    IL2CPP_REGISTER_METHOD(0x0237B060, void, ctor_1, app::PathTooLongException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0237B0F0, void, ctor_2, app::PathTooLongException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::PathTooLongException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::IO::PathTooLongException
