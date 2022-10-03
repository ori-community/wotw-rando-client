#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScrollRect {
        namespace {
            app::ScrollRect__Class* type_info_ref = nullptr;
        }
        app::ScrollRect__Class** type_info = &type_info_ref;
        inline app::ScrollRect__Class* get_class() {
            return il2cpp::get_class<app::ScrollRect__Class>(type_info, "UnityEngine.UI", "ScrollRect");
        }
        inline app::ScrollRect* create() {
            return il2cpp::create_object<app::ScrollRect>(get_class());
        }
    } // namespace ScrollRect
} // namespace app::classes::types
