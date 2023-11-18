#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VertexSorter.h>
#include <Modloader/app/structs/Vertex__Array.h>

namespace app::classes::TriangleNet::Tools::VertexSorter {
    IL2CPP_REGISTER_METHOD(0x02A9F090, void, ctor, (app::VertexSorter * this_ptr, app::Vertex__Array* points, int32_t seed))
    IL2CPP_REGISTER_METHOD(0x02A9F1F0, void, Sort, (app::Vertex__Array * array, int32_t seed))
    IL2CPP_REGISTER_METHOD(0x02A9F370, void, Alternate, (app::Vertex__Array * array, int32_t length, int32_t seed))
    IL2CPP_REGISTER_METHOD(0x02A9F530, void, QuickSort, (app::VertexSorter * this_ptr, int32_t left, int32_t right))
    IL2CPP_REGISTER_METHOD(0x02A9F920, void, AlternateAxes, (app::VertexSorter * this_ptr, int32_t left, int32_t right, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x02A9F9E0, void, VertexMedianX, (app::VertexSorter * this_ptr, int32_t left, int32_t right, int32_t median))
    IL2CPP_REGISTER_METHOD(0x02A9FE00, void, VertexMedianY, (app::VertexSorter * this_ptr, int32_t left, int32_t right, int32_t median))
} // namespace app::classes::TriangleNet::Tools::VertexSorter
