#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ {
    IL2CPP_REGISTER_METHOD(0x0225C010, void, ctor, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0471CE50, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, set_Capacity, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x047313E8, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face__set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Count, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715078, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C100, void, Put, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * this_ptr, app::Face* obj))
    IL2CPP_REGISTER_METHODINFO(0x04792E00, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face__Put__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC780, void, Release, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759540, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face__Release__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C0A0, bool, TryGet, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * this_ptr, app::Face** obj))
    IL2CPP_REGISTER_METHODINFO(0x047339F8, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face__TryGet__MethodInfo)
} // namespace app::classes::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_
