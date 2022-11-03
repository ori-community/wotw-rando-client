#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkinningEdge_SkinningCapsule {
    IL2CPP_REGISTER_METHOD(0x006BE9E0, void, Set, (app::SkinningEdge_SkinningCapsule * this_ptr, app::SkinningEdge_SkinningCapsule* cap))
    IL2CPP_REGISTER_METHOD(0x006BEA20, float, get_outerRadius1, (app::SkinningEdge_SkinningCapsule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BEA30, void, set_outerRadius1, (app::SkinningEdge_SkinningCapsule * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006BEB00, float, get_outerRadius2, (app::SkinningEdge_SkinningCapsule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BEB10, void, set_outerRadius2, (app::SkinningEdge_SkinningCapsule * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006BEBE0, float, FaloffWeight2D, (app::SkinningEdge_SkinningCapsule * this_ptr, app::Vector3 point1, app::Vector3 point2, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x006BEC40, float, FaloffWeight, (app::SkinningEdge_SkinningCapsule * this_ptr, app::Vector3 point1, app::Vector3 point2, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x006BF170, void, ctor, (app::SkinningEdge_SkinningCapsule * this_ptr))
} // namespace app::classes::SkinningEdge_SkinningCapsule
