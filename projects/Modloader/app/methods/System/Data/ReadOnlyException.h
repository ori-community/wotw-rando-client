#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::ReadOnlyException {
    IL2CPP_REGISTER_METHOD(0x01E49810, void, ctor_1, (app::ReadOnlyException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E49860, void, ctor_2, (app::ReadOnlyException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E498F0, void, ctor_3, (app::ReadOnlyException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::ReadOnlyException
