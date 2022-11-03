#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActivateCharacterAction {
    IL2CPP_REGISTER_METHOD(0x004C8620, void, Perform, (app::ActivateCharacterAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004C8710, app::String*, GetNiceName, (app::ActivateCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::ActivateCharacterAction * this_ptr))
} // namespace app::classes::ActivateCharacterAction
