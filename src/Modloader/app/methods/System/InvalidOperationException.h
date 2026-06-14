#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/InvalidOperationException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::InvalidOperationException {
    IL2CPP_REGISTER_METHOD(0x02265E10, void, ctor_1, app::InvalidOperationException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCD850, void, ctor_2, app::InvalidOperationException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x02265EA0, void, ctor_3, app::InvalidOperationException* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, app::InvalidOperationException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::InvalidOperationException
