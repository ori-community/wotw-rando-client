#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultVoronoiFactory.h>
#include <Modloader/app/structs/Face.h>
#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/Vertex.h>
#include <Modloader/app/structs/Vertex_1.h>

namespace app::classes::TriangleNet::Voronoi::DefaultVoronoiFactory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, app::DefaultVoronoiFactory* this_ptr, int32_t vertex_count, int32_t edge_count, int32_t face_count)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::DefaultVoronoiFactory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AA8360, app::Vertex_1*, CreateVertex, app::DefaultVoronoiFactory* this_ptr, double x, double y)
    IL2CPP_REGISTER_METHOD(0x02AA84D0, app::HalfEdge*, CreateHalfEdge, app::DefaultVoronoiFactory* this_ptr, app::Vertex_1* origin, app::Face* face)
    IL2CPP_REGISTER_METHOD(0x02AA8630, app::Face*, CreateFace, app::DefaultVoronoiFactory* this_ptr, app::Vertex* vertex)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DefaultVoronoiFactory* this_ptr)
} // namespace app::classes::TriangleNet::Voronoi::DefaultVoronoiFactory
