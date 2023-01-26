#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GasballSpawnSetup.h>

namespace app::classes::GasballSpawnSetup {
    IL2CPP_REGISTER_METHOD(0x00420C50, app::Vector3, get_StartPosition, (app::GasballSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420E20, void, ctor, (app::GasballSpawnSetup * this_ptr))
} // namespace app::classes::GasballSpawnSetup
