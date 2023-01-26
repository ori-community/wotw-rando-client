#pragma once
#include <Modloader/app/structs/SmoothCurve_PathNode__Array.h>
#include <Modloader/app/structs/SmoothCurve_PathNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothCurve_PathNode__Array {
        inline app::SmoothCurve_PathNode__Array__Class** type_info() {
            static app::SmoothCurve_PathNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothCurve_PathNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothCurve_PathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::SmoothCurve_PathNode__Array__Class>(type_info(), "", "SmoothCurve+PathNode[]");
        }
        inline app::SmoothCurve_PathNode__Array* create() {
            return il2cpp::create_object<app::SmoothCurve_PathNode__Array>(get_class());
        }
    } // namespace SmoothCurve_PathNode__Array
} // namespace app::classes::types
