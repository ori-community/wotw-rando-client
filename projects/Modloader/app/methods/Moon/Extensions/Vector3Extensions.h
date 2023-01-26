#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Extensions::Vector3Extensions {
    IL2CPP_REGISTER_METHOD(0x02F8EBE0, app::MoonVector3*, AsMoonVector3, (app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x02F8ED50, float, DistanceSquared, (app::Vector3 v1, app::Vector3* v2))
    IL2CPP_REGISTER_METHOD(0x02F8EE50, float, Distance2DSquared, (app::Vector3 v1, app::Vector3* v2))
    IL2CPP_REGISTER_METHOD(0x02F8EE90, float, Distance2D, (app::Vector3 v1, app::Vector3* v2))
} // namespace app::classes::Moon::Extensions::Vector3Extensions
