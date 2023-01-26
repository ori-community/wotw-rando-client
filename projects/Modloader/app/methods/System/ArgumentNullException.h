#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArgumentNullException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ArgumentNullException {
    IL2CPP_REGISTER_METHOD(0x02290640, void, ctor_1, (app::ArgumentNullException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022906D0, void, ctor_2, (app::ArgumentNullException * this_ptr, app::String* param_name))
    IL2CPP_REGISTER_METHOD(0x02290770, void, ctor_3, (app::ArgumentNullException * this_ptr, app::String* param_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, ctor_4, (app::ArgumentNullException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::ArgumentNullException
