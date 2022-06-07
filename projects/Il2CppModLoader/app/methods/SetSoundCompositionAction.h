#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetSoundCompositionAction {
    IL2CPP_REGISTER_METHOD(0x005A4800, void, Perform, (app::SetSoundCompositionAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetSoundCompositionAction * this_ptr))
}
