#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ {
    IL2CPP_REGISTER_METHOD(0x0225C010, void, ctor, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04728078, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, set_Capacity, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x047613D0, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex__set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Count, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047595D8, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C100, void, Put, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * this_ptr, app::Vertex_1 * obj))
    IL2CPP_REGISTER_METHODINFO(0x04726D70, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex__Put__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC780, void, Release, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709A30, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex__Release__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C0A0, bool, TryGet, (app::VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * this_ptr, app::Vertex_1 * * obj))
    IL2CPP_REGISTER_METHODINFO(0x04791FB8, VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex__TryGet__MethodInfo)
}
