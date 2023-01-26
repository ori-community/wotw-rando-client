#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SecurityException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::SecurityException {
    IL2CPP_REGISTER_METHOD(0x01E219C0, void, ctor_1, (app::SecurityException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E21A50, void, ctor_2, (app::SecurityException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E21A70, void, ctor_3, (app::SecurityException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E21BD0, void, ctor_4, (app::SecurityException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x01E21BF0, void, GetObjectData, (app::SecurityException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01A1BAA0, app::String*, ToString, (app::SecurityException * this_ptr))
} // namespace app::classes::System::Security::SecurityException
