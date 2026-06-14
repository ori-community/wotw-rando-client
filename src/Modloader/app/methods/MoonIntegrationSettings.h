#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonIntegrationSettings.h>

namespace app::classes::MoonIntegrationSettings {
    IL2CPP_REGISTER_METHOD(0x02719880, void, ctor, app::MoonIntegrationSettings* this_ptr)
}
