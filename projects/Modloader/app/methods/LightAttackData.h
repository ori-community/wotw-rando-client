#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightAttackData.h>

namespace app::classes::LightAttackData {
    IL2CPP_REGISTER_METHOD(0x0113FD10, void, ctor, (app::LightAttackData * this_ptr))
}
