#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmoothCurve {
        namespace {
            app::SmoothCurve__Class* type_info_ref = nullptr;
        }
        app::SmoothCurve__Class** type_info = &type_info_ref;
        inline app::SmoothCurve__Class* get_class() {
            return il2cpp::get_class<app::SmoothCurve__Class>(type_info, "", "SmoothCurve");
        }
        inline app::SmoothCurve* create() {
            return il2cpp::create_object<app::SmoothCurve>(get_class());
        }
        inline app::SmoothCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::SmoothCurve__Array>(get_class(), size);
        }
    } // namespace SmoothCurve
} // namespace app::classes::types
