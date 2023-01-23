#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ThreadInterruptedException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Threading::ThreadInterruptedException {
    IL2CPP_REGISTER_METHOD(0x02344910, void, ctor_1, (app::ThreadInterruptedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_2, (app::ThreadInterruptedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Threading::ThreadInterruptedException
