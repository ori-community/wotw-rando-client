#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LockRecursionException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::LockRecursionException {
    IL2CPP_REGISTER_METHOD(0x027DE730, void, ctor_1, app::LockRecursionException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027DE7D0, void, ctor_2, app::LockRecursionException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x027DE880, void, ctor_3, app::LockRecursionException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::Threading::LockRecursionException
