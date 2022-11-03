#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmoothCurve_PathNode__Array {
        namespace {
            inline app::SmoothCurve_PathNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::SmoothCurve_PathNode__Array__Class** type_info = &type_info_ref;
        inline app::SmoothCurve_PathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::SmoothCurve_PathNode__Array__Class>(type_info, "", "SmoothCurve+PathNode[]");
        }
        inline app::SmoothCurve_PathNode__Array* create() {
            return il2cpp::create_object<app::SmoothCurve_PathNode__Array>(get_class());
        }
    } // namespace SmoothCurve_PathNode__Array
} // namespace app::classes::types
