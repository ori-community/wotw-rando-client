#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MinerThrowAttackSettings.h>

namespace app::classes::MinerThrowAttackSettings {
    IL2CPP_REGISTER_METHOD(0x01452B00, void, ctor, (app::MinerThrowAttackSettings * this_ptr))
}
