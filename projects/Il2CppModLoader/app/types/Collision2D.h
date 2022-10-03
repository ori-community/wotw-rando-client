#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Collision2D {
        namespace {
            app::Collision2D__Class* type_info_ref = nullptr;
        }
        app::Collision2D__Class** type_info = &type_info_ref;
        inline app::Collision2D__Class* get_class() {
            return il2cpp::get_class<app::Collision2D__Class>(type_info, "UnityEngine", "Collision2D");
        }
        inline app::Collision2D* create() {
            return il2cpp::create_object<app::Collision2D>(get_class());
        }
    } // namespace Collision2D
} // namespace app::classes::types
