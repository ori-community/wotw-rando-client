#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteeringForcesSettings.h>

namespace app::classes::SteeringForcesSettings {
    IL2CPP_REGISTER_METHOD(0x00650470, void, ctor, (app::SteeringForcesSettings * this_ptr))
}
