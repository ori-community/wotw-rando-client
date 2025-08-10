#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformNotSupportedException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::PlatformNotSupportedException {
    IL2CPP_REGISTER_METHOD(0x02280400, void, ctor_1, app::PlatformNotSupportedException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280490, void, ctor_2, app::PlatformNotSupportedException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::PlatformNotSupportedException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::PlatformNotSupportedException
