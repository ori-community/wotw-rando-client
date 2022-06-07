#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ {
    IL2CPP_REGISTER_METHOD(0x0225C010, void, ctor, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0477F3B8, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, set_Capacity, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04766FB0, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge__set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Count, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708808, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C100, void, Put, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr, app::HalfEdge * obj))
    IL2CPP_REGISTER_METHODINFO(0x04769FF0, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge__Put__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC780, void, Release, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047679F8, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge__Release__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C0A0, bool, TryGet, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr, app::HalfEdge * * obj))
    IL2CPP_REGISTER_METHODINFO(0x047919C0, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge__TryGet__MethodInfo)
}
