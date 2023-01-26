#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaitHandleCannotBeOpenedException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::WaitHandleCannotBeOpenedException {
    IL2CPP_REGISTER_METHOD(0x027AB880, void, ctor_1, (app::WaitHandleCannotBeOpenedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027AB910, void, ctor_2, (app::WaitHandleCannotBeOpenedException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0268AE20, void, ctor_3, (app::WaitHandleCannotBeOpenedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Threading::WaitHandleCannotBeOpenedException
