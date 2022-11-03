#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetCharacterPosition {
    IL2CPP_REGISTER_METHOD(0x005A2070, void, Perform, (app::SetCharacterPosition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04762098, SetCharacterPosition_Perform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005A2300, void, ctor, (app::SetCharacterPosition * this_ptr))
} // namespace app::classes::SetCharacterPosition
