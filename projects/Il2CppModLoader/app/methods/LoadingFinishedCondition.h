#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadingFinishedCondition {
    IL2CPP_REGISTER_METHOD(0x00FC0C20, bool, Validate, (app::LoadingFinishedCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LoadingFinishedCondition * this_ptr))
}
