#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrailRenderer {
        namespace {
            app::TrailRenderer__Class* type_info_ref = nullptr;
        }
        app::TrailRenderer__Class** type_info = &type_info_ref;
        inline app::TrailRenderer__Class* get_class() {
            return il2cpp::get_class<app::TrailRenderer__Class>(type_info, "UnityEngine", "TrailRenderer");
        }
        inline app::TrailRenderer* create() {
            return il2cpp::create_object<app::TrailRenderer>(get_class());
        }
    } // namespace TrailRenderer
} // namespace app::classes::types
