#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_.h>

namespace app::classes::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ {
    IL2CPP_REGISTER_METHOD(0x0225C010, void, ctor, app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, set_Capacity, app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Count, app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225C100, void, Put, app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, app::HalfEdge* obj)
    IL2CPP_REGISTER_METHOD(0x002FC780, void, Release, app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225C0A0, bool, TryGet, app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, app::HalfEdge** obj)
} // namespace app::classes::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_
