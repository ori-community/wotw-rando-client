#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MessageProvider {
    IL2CPP_REGISTER_METHOD(0x0159D840, app::String *, ToString, (app::MessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0159D8E0, app::String__Array *, GetAllMessages, (app::MessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::MessageProvider * this_ptr))
}
