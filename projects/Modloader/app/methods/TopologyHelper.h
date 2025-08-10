#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnvTopology.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TopologyHelper {
    IL2CPP_REGISTER_METHOD(0x00AFE600, app::EnvTopology*, ScanLocalTopology, app::Vector3 origin, float range)
}
