#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Physics {
        namespace {
            app::Physics__Class* type_info_ref = nullptr;
        }
        app::Physics__Class** type_info = &type_info_ref;
        inline app::Physics__Class* get_class() {
            return il2cpp::get_class<app::Physics__Class>(type_info, "UnityEngine", "Physics");
        }
        inline app::Physics* create() {
            return il2cpp::create_object<app::Physics>(get_class());
        }
    } // namespace Physics
} // namespace app::classes::types
