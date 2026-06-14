#pragma once
#include <Modloader/app/structs/TriangleQuadTree.h>
#include <Modloader/app/structs/TriangleQuadTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleQuadTree {
        inline app::TriangleQuadTree__Class** type_info() {
            static app::TriangleQuadTree__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriangleQuadTree__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriangleQuadTree__Class* get_class() {
            return il2cpp::get_class<app::TriangleQuadTree__Class>(type_info(), "TriangleNet.Tools", "TriangleQuadTree");
        }
        inline app::TriangleQuadTree* create() {
            return il2cpp::create_object<app::TriangleQuadTree>(get_class());
        }
    } // namespace TriangleQuadTree
} // namespace app::classes::types
