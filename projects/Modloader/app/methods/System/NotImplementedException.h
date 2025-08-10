#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotImplementedException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::NotImplementedException {
    IL2CPP_REGISTER_METHOD(0x0226F270, void, ctor_1, app::NotImplementedException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0226F300, void, ctor_2, app::NotImplementedException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::NotImplementedException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::NotImplementedException
