#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Resources {
        namespace {
            app::Resources__Class* type_info_ref = nullptr;
        }
        app::Resources__Class** type_info = &type_info_ref;
        inline app::Resources__Class* get_class() {
            return il2cpp::get_class<app::Resources__Class>(type_info, "UnityEngine", "Resources");
        }
        inline app::Resources* create() {
            return il2cpp::create_object<app::Resources>(get_class());
        }
    } // namespace Resources
} // namespace app::classes::types
