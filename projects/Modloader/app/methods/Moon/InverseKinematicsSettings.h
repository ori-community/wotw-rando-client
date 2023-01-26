#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InverseKinematicsSettings.h>

namespace app::classes::Moon::InverseKinematicsSettings {
    IL2CPP_REGISTER_METHOD(0x01B15190, void, ctor, (app::InverseKinematicsSettings * this_ptr))
}
