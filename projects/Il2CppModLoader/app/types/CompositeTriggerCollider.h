#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompositeTriggerCollider {
        namespace {
            app::CompositeTriggerCollider__Class* type_info_ref = nullptr;
        }
        app::CompositeTriggerCollider__Class** type_info = &type_info_ref;
        inline app::CompositeTriggerCollider__Class* get_class() {
            return il2cpp::get_class<app::CompositeTriggerCollider__Class>(type_info, "", "CompositeTriggerCollider");
        }
        inline app::CompositeTriggerCollider* create() {
            return il2cpp::create_object<app::CompositeTriggerCollider>(get_class());
        }
    } // namespace CompositeTriggerCollider
} // namespace app::classes::types
