#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsWatchingCutsceneCondition {
    IL2CPP_REGISTER_METHOD(0x00648FA0, bool, Validate, (app::IsWatchingCutsceneCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsWatchingCutsceneCondition * this_ptr))
}
