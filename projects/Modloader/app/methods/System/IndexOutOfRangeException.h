#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IndexOutOfRangeException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IndexOutOfRangeException {
    IL2CPP_REGISTER_METHOD(0x0238C2C0, void, ctor_1, (app::IndexOutOfRangeException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238C350, void, ctor_2, (app::IndexOutOfRangeException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::IndexOutOfRangeException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::IndexOutOfRangeException
