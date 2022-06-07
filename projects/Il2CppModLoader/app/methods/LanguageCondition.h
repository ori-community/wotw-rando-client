#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LanguageCondition {
    IL2CPP_REGISTER_METHOD(0x00F03960, bool, Validate, (app::LanguageCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LanguageCondition * this_ptr))
}
