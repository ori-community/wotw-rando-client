#pragma once
#include <Modloader/app/structs/TriangleQuadTree_QuadNode__Array.h>
#include <Modloader/app/structs/TriangleQuadTree_QuadNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleQuadTree_QuadNode__Array {
        inline app::TriangleQuadTree_QuadNode__Array__Class** type_info() {
            static app::TriangleQuadTree_QuadNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriangleQuadTree_QuadNode__Array__Class**)(modloader::win::memory::resolve_rva(0x04749700));
            }
            return cache;
        }
        inline app::TriangleQuadTree_QuadNode__Array__Class* get_class() {
            return il2cpp::get_class<app::TriangleQuadTree_QuadNode__Array__Class>(type_info(), "TriangleNet.Tools", "TriangleQuadTree+QuadNode[]");
        }
        inline app::TriangleQuadTree_QuadNode__Array* create() {
            return il2cpp::create_object<app::TriangleQuadTree_QuadNode__Array>(get_class());
        }
    } // namespace TriangleQuadTree_QuadNode__Array
} // namespace app::classes::types
