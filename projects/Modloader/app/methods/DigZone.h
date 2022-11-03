#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DigZone {
    IL2CPP_REGISTER_METHOD(0x00B92F40, app::Collider*, get_CageCollider, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B93010, app::CageStructureTool*, get_CageStructure, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B930B0, bool, get_ContainsEntranceConstraint, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B930C0, void, Awake, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B932F0, void, OnDestroy, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911620, void, OnDigStartedInZone, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B933B0, bool, IsPointInside, (app::DigZone * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00B93400, bool, IsCircleOverlapping, (app::DigZone * this_ptr, app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::NavigationType__Enum, AreaType, (app::DigZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B93460, bool, ContainsPoint, (app::DigZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00B935C0, float, GetDistanceToNearestPoint, (app::DigZone * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00B93870, app::Vector2, GetVelocityAtPoint, (app::DigZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00B93900, void, ctor, (app::DigZone * this_ptr))
} // namespace app::classes::DigZone
