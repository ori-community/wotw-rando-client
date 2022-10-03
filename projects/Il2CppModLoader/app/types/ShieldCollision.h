#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShieldCollision {
        namespace {
            app::ShieldCollision__Class* type_info_ref = nullptr;
        }
        app::ShieldCollision__Class** type_info = &type_info_ref;
        inline app::ShieldCollision__Class* get_class() {
            return il2cpp::get_class<app::ShieldCollision__Class>(type_info, "", "ShieldCollision");
        }
        inline app::ShieldCollision* create() {
            return il2cpp::create_object<app::ShieldCollision>(get_class());
        }
    } // namespace ShieldCollision
} // namespace app::classes::types
