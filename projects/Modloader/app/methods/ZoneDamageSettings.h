#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ZoneDamageSettings.h>

namespace app::classes::ZoneDamageSettings {
    IL2CPP_REGISTER_METHOD(0x00F59010, void, ctor, (app::ZoneDamageSettings * this_ptr))
}
