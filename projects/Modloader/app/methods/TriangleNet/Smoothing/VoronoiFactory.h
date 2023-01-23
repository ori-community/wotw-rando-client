#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VoronoiFactory.h>
#include <Modloader/app/structs/Vertex_1.h>
#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/Face.h>
#include <Modloader/app/structs/Vertex.h>

namespace app::classes::TriangleNet::Smoothing::VoronoiFactory {
    IL2CPP_REGISTER_METHOD(0x02A92FF0, void, ctor, (app::VoronoiFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A933A0, void, Initialize, (app::VoronoiFactory * this_ptr, int32_t vertex_count, int32_t edge_count, int32_t face_count))
    IL2CPP_REGISTER_METHOD(0x02A93990, void, Reset, (app::VoronoiFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A93A40, app::Vertex_1*, CreateVertex, (app::VoronoiFactory * this_ptr, double x, double y))
    IL2CPP_REGISTER_METHOD(0x02A93C50, app::HalfEdge*, CreateHalfEdge, (app::VoronoiFactory * this_ptr, app::Vertex_1* origin, app::Face* face))
    IL2CPP_REGISTER_METHOD(0x02A93E60, app::Face*, CreateFace, (app::VoronoiFactory * this_ptr, app::Vertex* vertex))
} // namespace app::classes::TriangleNet::Smoothing::VoronoiFactory
