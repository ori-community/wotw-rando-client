#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Tools::TriangleQuadTree_QuadNode {
    IL2CPP_REGISTER_METHOD(0x02A9CB50, void, ctor_1, (app::TriangleQuadTree_QuadNode * this_ptr, app::Rectangle* box, app::TriangleQuadTree* tree))
    IL2CPP_REGISTER_METHOD(0x02A9CB70, void, ctor_2, (app::TriangleQuadTree_QuadNode * this_ptr, app::Rectangle* box, app::TriangleQuadTree* tree, bool init))
    IL2CPP_REGISTER_METHOD(0x02A9D1F0, app::List_1_System_Int32_*, FindTriangles, (app::TriangleQuadTree_QuadNode * this_ptr, app::Point* search_point))
    IL2CPP_REGISTER_METHOD(0x02A9D2A0, void, CreateSubRegion, (app::TriangleQuadTree_QuadNode * this_ptr, int32_t current_depth))
    IL2CPP_REGISTER_METHOD(0x02A9E180, void, AddTriangleToRegion, (app::TriangleQuadTree_QuadNode * this_ptr, app::Point__Array* triangle, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02A9E520, void, FindTriangleIntersections, (app::TriangleQuadTree_QuadNode * this_ptr, app::Point__Array* triangle, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02A9E690, void, FindIntersectionsWithX, (app::TriangleQuadTree_QuadNode * this_ptr, double dx, double dy, app::Point__Array* triangle, int32_t index, int32_t k))
    IL2CPP_REGISTER_METHOD(0x02A9E9F0, void, FindIntersectionsWithY, (app::TriangleQuadTree_QuadNode * this_ptr, double dx, double dy, app::Point__Array* triangle, int32_t index, int32_t k))
    IL2CPP_REGISTER_METHOD(0x02A9ED40, int32_t, FindRegion, (app::TriangleQuadTree_QuadNode * this_ptr, app::Point* point))
    IL2CPP_REGISTER_METHOD(0x02A9EDA0, void, AddToRegion, (app::TriangleQuadTree_QuadNode * this_ptr, int32_t index, int32_t region))
    IL2CPP_REGISTER_METHOD(0x02A9EFE0, void, cctor, ())
} // namespace app::classes::TriangleNet::Tools::TriangleQuadTree_QuadNode
