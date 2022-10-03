#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmoothCurve_PathNode {
        namespace {
            app::SmoothCurve_PathNode__Class* type_info_ref = nullptr;
        }
        app::SmoothCurve_PathNode__Class** type_info = &type_info_ref;
        inline app::SmoothCurve_PathNode__Class* get_class() {
            return il2cpp::get_nested_class<app::SmoothCurve_PathNode__Class>(type_info, "", "SmoothCurve", "PathNode");
        }
        inline app::SmoothCurve_PathNode* create() {
            return il2cpp::create_object<app::SmoothCurve_PathNode>(get_class());
        }
        inline app::SmoothCurve_PathNode__Array* create_array(int size) {
            return il2cpp::array_new<app::SmoothCurve_PathNode__Array>(get_class(), size);
        }
    } // namespace SmoothCurve_PathNode
} // namespace app::classes::types
