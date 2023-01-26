#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone.h>

namespace app::classes::RootMotion::FinalIK::RotationLimitPolygonal_ReachCone {
    IL2CPP_REGISTER_METHOD(0x02A25710, app::Vector3, get_o, (app::RotationLimitPolygonal_ReachCone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A25760, app::Vector3, get_a, (app::RotationLimitPolygonal_ReachCone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A257B0, app::Vector3, get_b, (app::RotationLimitPolygonal_ReachCone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A25800, app::Vector3, get_c, (app::RotationLimitPolygonal_ReachCone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A25850, void, ctor, (app::RotationLimitPolygonal_ReachCone * this_ptr, app::Vector3 _o, app::Vector3 _a, app::Vector3 _b, app::Vector3 _c))
    IL2CPP_REGISTER_METHOD(0x02A25A60, bool, get_isValid, (app::RotationLimitPolygonal_ReachCone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A25A70, void, Calculate, (app::RotationLimitPolygonal_ReachCone * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::RotationLimitPolygonal_ReachCone
