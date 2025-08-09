#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::MessageProvider {
    IL2CPP_REGISTER_METHOD(0x0159D840, app::String*, ToString, app::MessageProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0159D8E0, app::String__Array*, GetAllMessages, app::MessageProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::MessageProvider* this_ptr)
} // namespace app::classes::MessageProvider
