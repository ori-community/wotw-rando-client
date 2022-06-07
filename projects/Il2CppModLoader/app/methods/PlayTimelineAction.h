#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayTimelineAction {
    IL2CPP_REGISTER_METHOD(0x0117BB40, void, Perform, (app::PlayTimelineAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlayTimelineAction * this_ptr))
}
