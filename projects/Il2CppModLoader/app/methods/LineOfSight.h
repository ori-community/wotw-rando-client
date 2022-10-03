#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LineOfSight {
    IL2CPP_REGISTER_METHOD(0x00FA7080, bool, IsRayOccluded_1, (app::Vector3 origin, app::Vector3 dir, app::RaycastHit* hit, float dist, app::LayerMask mask, app::QueryTriggerInteraction__Enum trigger))
    IL2CPP_REGISTER_METHOD(0x00FA71E0, bool, IsRayOccluded_2, (app::Vector3 origin, app::Vector3 dir, float dist, app::LayerMask mask, app::QueryTriggerInteraction__Enum trigger))
    IL2CPP_REGISTER_METHOD(0x00FA7340, bool, IsRayOccluded_3, (app::Ray ray, float dist, app::LayerMask mask, app::QueryTriggerInteraction__Enum trigger))
    IL2CPP_REGISTER_METHOD(0x00FA7390, bool, IsLineOccluded_1, (app::Vector3 from, app::Vector3 to, app::LayerMask mask))
    IL2CPP_REGISTER_METHOD(0x00FA7440, bool, IsLineOccluded_2, (app::Vector3 from, app::Vector3 to, app::RaycastHit* hit, app::LayerMask mask))
} // namespace app::classes::LineOfSight
