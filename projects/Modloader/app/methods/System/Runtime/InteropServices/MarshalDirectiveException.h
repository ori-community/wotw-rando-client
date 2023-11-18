#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MarshalDirectiveException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::InteropServices::MarshalDirectiveException {
    IL2CPP_REGISTER_METHOD(0x01A96C00, void, ctor_1, (app::MarshalDirectiveException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A96C90, void, ctor_2, (app::MarshalDirectiveException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::MarshalDirectiveException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Runtime::InteropServices::MarshalDirectiveException
