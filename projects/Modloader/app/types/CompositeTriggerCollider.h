#pragma once
#include <Modloader/app/structs/CompositeTriggerCollider.h>
#include <Modloader/app/structs/CompositeTriggerCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompositeTriggerCollider {
        inline app::CompositeTriggerCollider__Class** type_info() {
            static app::CompositeTriggerCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompositeTriggerCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompositeTriggerCollider__Class* get_class() {
            return il2cpp::get_class<app::CompositeTriggerCollider__Class>(type_info(), "", "CompositeTriggerCollider");
        }
        inline app::CompositeTriggerCollider* create() {
            return il2cpp::create_object<app::CompositeTriggerCollider>(get_class());
        }
    } // namespace CompositeTriggerCollider
} // namespace app::classes::types
