#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ApplicationException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::ApplicationException {
    IL2CPP_REGISTER_METHOD(0x0228FE70, void, ctor_1, (app::ApplicationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228FF30, void, ctor_2, (app::ApplicationException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0228FFF0, void, ctor_3, (app::ApplicationException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x022900B0, void, ctor_4, (app::ApplicationException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::ApplicationException
