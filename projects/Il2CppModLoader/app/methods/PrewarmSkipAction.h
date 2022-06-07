#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PrewarmSkipAction {
    IL2CPP_REGISTER_METHOD(0x00C738A0, void, Perform, (app::PrewarmSkipAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PrewarmSkipAction * this_ptr))
}
