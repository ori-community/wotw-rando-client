#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/NotSupportedException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::NotSupportedException {
    IL2CPP_REGISTER_METHOD(0x0226F320, void, ctor_1, app::NotSupportedException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0226F3B0, void, ctor_2, app::NotSupportedException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0226F3D0, void, ctor_3, app::NotSupportedException* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, app::NotSupportedException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::NotSupportedException
