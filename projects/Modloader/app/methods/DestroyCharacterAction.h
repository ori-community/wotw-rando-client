#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DestroyCharacterAction {
    IL2CPP_REGISTER_METHOD(0x00B8A400, void, Perform, (app::DestroyCharacterAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B8A490, app::String*, GetNiceName, (app::DestroyCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DestroyCharacterAction * this_ptr))
} // namespace app::classes::DestroyCharacterAction
