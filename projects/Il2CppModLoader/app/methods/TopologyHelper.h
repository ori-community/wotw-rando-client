#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TopologyHelper {
    IL2CPP_REGISTER_METHOD(0x00AFE600, app::EnvTopology *, ScanLocalTopology, (app::Vector3 origin, float range))
}
