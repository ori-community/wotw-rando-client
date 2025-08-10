#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FieldAccessException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::FieldAccessException {
    IL2CPP_REGISTER_METHOD(0x01A1C8E0, void, ctor_1, app::FieldAccessException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1C970, void, ctor_2, app::FieldAccessException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::FieldAccessException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::FieldAccessException
