#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SneezeAttackSettings.h>

namespace app::classes::SneezeAttackSettings {
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, app::SneezeAttackSettings* this_ptr)
}
