#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticationException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Authentication::AuthenticationException {
    IL2CPP_REGISTER_METHOD(0x021BC660, void, ctor_1, (app::AuthenticationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, ctor_2, (app::AuthenticationException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::AuthenticationException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
} // namespace app::classes::System::Security::Authentication::AuthenticationException
