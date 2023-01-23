#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageReactionSettings.h>

namespace app::classes::DamageReactionSettings {
    IL2CPP_REGISTER_METHOD(0x004FC8F0, void, ctor, (app::DamageReactionSettings * this_ptr))
}
