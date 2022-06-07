#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsShowingQuestMessageCondition {
    IL2CPP_REGISTER_METHOD(0x00647C60, bool, Validate, (app::IsShowingQuestMessageCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsShowingQuestMessageCondition * this_ptr))
}
