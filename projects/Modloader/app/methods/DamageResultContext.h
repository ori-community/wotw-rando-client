#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageResultContext__Boxed.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::DamageResultContext {
    IL2CPP_REGISTER_METHOD(0x0011E7F0, void, ctor, (app::DamageResultContext__Boxed * this_ptr, app::DamageResult damage_result))
}
