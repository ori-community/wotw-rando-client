#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsInNPCInteractionCondition {
    IL2CPP_REGISTER_METHOD(0x00646140, bool, Validate, (app::IsInNPCInteractionCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsInNPCInteractionCondition * this_ptr))
}
