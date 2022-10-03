#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoftCollider {
        namespace {
            app::SoftCollider__Class* type_info_ref = nullptr;
        }
        app::SoftCollider__Class** type_info = &type_info_ref;
        inline app::SoftCollider__Class* get_class() {
            return il2cpp::get_class<app::SoftCollider__Class>(type_info, "", "SoftCollider");
        }
        inline app::SoftCollider* create() {
            return il2cpp::create_object<app::SoftCollider>(get_class());
        }
    } // namespace SoftCollider
} // namespace app::classes::types
