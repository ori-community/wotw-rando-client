#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Collision {
        namespace {
            app::Collision__Class* type_info_ref = nullptr;
        }
        app::Collision__Class** type_info = &type_info_ref;
        inline app::Collision__Class* get_class() {
            return il2cpp::get_class<app::Collision__Class>(type_info, "UnityEngine", "Collision");
        }
        inline app::Collision* create() {
            return il2cpp::create_object<app::Collision>(get_class());
        }
    } // namespace Collision
} // namespace app::classes::types
