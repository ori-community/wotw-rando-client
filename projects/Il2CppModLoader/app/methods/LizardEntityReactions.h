#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LizardEntityReactions {
    IL2CPP_REGISTER_METHOD(0x00FAE7C0, void, ProcessEntityEvent, (app::LizardEntityReactions * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x00420B10, void, ctor, (app::LizardEntityReactions * this_ptr))
} // namespace app::classes::LizardEntityReactions
