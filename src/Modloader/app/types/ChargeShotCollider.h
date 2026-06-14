#pragma once
#include <Modloader/app/structs/ChargeShotCollider.h>
#include <Modloader/app/structs/ChargeShotCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChargeShotCollider {
        inline app::ChargeShotCollider__Class** type_info() {
            static app::ChargeShotCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChargeShotCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChargeShotCollider__Class* get_class() {
            return il2cpp::get_class<app::ChargeShotCollider__Class>(type_info(), "", "ChargeShotCollider");
        }
        inline app::ChargeShotCollider* create() {
            return il2cpp::create_object<app::ChargeShotCollider>(get_class());
        }
    } // namespace ChargeShotCollider
} // namespace app::classes::types
