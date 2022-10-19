#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriangleQuadTree {
        namespace {
            inline app::TriangleQuadTree__Class* type_info_ref = nullptr;
        }
        inline app::TriangleQuadTree__Class** type_info = &type_info_ref;
        inline app::TriangleQuadTree__Class* get_class() {
            return il2cpp::get_class<app::TriangleQuadTree__Class>(type_info, "TriangleNet.Tools", "TriangleQuadTree");
        }
        inline app::TriangleQuadTree* create() {
            return il2cpp::create_object<app::TriangleQuadTree>(get_class());
        }
    } // namespace TriangleQuadTree
} // namespace app::classes::types
