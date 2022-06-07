#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ChangeTargetToCurrentCharacterAction {
    IL2CPP_REGISTER_METHOD(0x01046270, void, Perform, (app::ChangeTargetToCurrentCharacterAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01046320, app::String *, GetNiceName, (app::ChangeTargetToCurrentCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ChangeTargetToCurrentCharacterAction * this_ptr))
}
