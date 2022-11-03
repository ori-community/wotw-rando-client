#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriangleQuadTree_QuadNode {
        inline app::TriangleQuadTree_QuadNode__Class** type_info = (app::TriangleQuadTree_QuadNode__Class**)(modloader::win::memory::resolve_rva(0x04753A50));
        inline app::TriangleQuadTree_QuadNode__Class* get_class() {
            return il2cpp::get_nested_class<app::TriangleQuadTree_QuadNode__Class>(type_info, "TriangleNet.Tools", "TriangleQuadTree", "QuadNode");
        }
        inline app::TriangleQuadTree_QuadNode* create() {
            return il2cpp::create_object<app::TriangleQuadTree_QuadNode>(get_class());
        }
        inline app::TriangleQuadTree_QuadNode__Array* create_array(int size) {
            return il2cpp::array_new<app::TriangleQuadTree_QuadNode__Array>(get_class(), size);
        }
        inline app::TriangleQuadTree_QuadNode__Array* create_array(const std::vector<app::TriangleQuadTree_QuadNode*>& items) {
            return il2cpp::array_new<app::TriangleQuadTree_QuadNode__Array>(get_class(), items);
        }
    } // namespace TriangleQuadTree_QuadNode
} // namespace app::classes::types
