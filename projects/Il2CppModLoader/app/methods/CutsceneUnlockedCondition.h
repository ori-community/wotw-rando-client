#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CutsceneUnlockedCondition {
    IL2CPP_REGISTER_METHOD(0x00DBF740, bool, Validate, (app::CutsceneUnlockedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CutsceneUnlockedCondition * this_ptr))
} // namespace app::classes::CutsceneUnlockedCondition
