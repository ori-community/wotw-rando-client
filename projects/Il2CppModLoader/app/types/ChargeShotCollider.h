#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChargeShotCollider {
        namespace {
            app::ChargeShotCollider__Class* type_info_ref = nullptr;
        }
        app::ChargeShotCollider__Class** type_info = &type_info_ref;
        inline app::ChargeShotCollider__Class* get_class() {
            return il2cpp::get_class<app::ChargeShotCollider__Class>(type_info, "", "ChargeShotCollider");
        }
        inline app::ChargeShotCollider* create() {
            return il2cpp::create_object<app::ChargeShotCollider>(get_class());
        }
    } // namespace ChargeShotCollider
} // namespace app::classes::types
