#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonPhysics_AscendingDistanceComparer.h>
#include <Modloader/app/structs/RaycastHit.h>

namespace app::classes::MoonPhysics_AscendingDistanceComparer {
    IL2CPP_REGISTER_METHOD(0x0145FF70, int32_t, Compare, app::MoonPhysics_AscendingDistanceComparer* this_ptr, app::RaycastHit h1, app::RaycastHit h2)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonPhysics_AscendingDistanceComparer* this_ptr)
} // namespace app::classes::MoonPhysics_AscendingDistanceComparer
