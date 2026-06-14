#pragma once
#include <Modloader/app/structs/SmoothCurve_PathNode.h>
#include <Modloader/app/structs/SmoothCurve_PathNode__Array.h>
#include <Modloader/app/structs/SmoothCurve_PathNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothCurve_PathNode {
        inline app::SmoothCurve_PathNode__Class** type_info() {
            static app::SmoothCurve_PathNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothCurve_PathNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothCurve_PathNode__Class* get_class() {
            return il2cpp::get_nested_class<app::SmoothCurve_PathNode__Class>(type_info(), "", "SmoothCurve", "PathNode");
        }
        inline app::SmoothCurve_PathNode* create() {
            return il2cpp::create_object<app::SmoothCurve_PathNode>(get_class());
        }
        inline app::SmoothCurve_PathNode__Array* create_array(int size) {
            return il2cpp::array_new<app::SmoothCurve_PathNode__Array>(get_class(), size);
        }
        inline app::SmoothCurve_PathNode__Array* create_array(const std::vector<app::SmoothCurve_PathNode*>& items) {
            return il2cpp::array_new<app::SmoothCurve_PathNode__Array>(get_class(), items);
        }
    } // namespace SmoothCurve_PathNode
} // namespace app::classes::types
