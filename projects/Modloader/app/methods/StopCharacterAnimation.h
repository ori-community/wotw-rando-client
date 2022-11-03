#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::StopCharacterAnimation {
    IL2CPP_REGISTER_METHOD(0x0065C9B0, void, Perform, (app::StopCharacterAnimation * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::StopCharacterAnimation * this_ptr))
} // namespace app::classes::StopCharacterAnimation
