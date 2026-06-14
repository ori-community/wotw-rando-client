#pragma once
#include <Modloader/app/structs/AutoDamageCollider.h>
#include <Modloader/app/structs/AutoDamageCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoDamageCollider {
        inline app::AutoDamageCollider__Class** type_info() {
            static app::AutoDamageCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutoDamageCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutoDamageCollider__Class* get_class() {
            return il2cpp::get_class<app::AutoDamageCollider__Class>(type_info(), "", "AutoDamageCollider");
        }
        inline app::AutoDamageCollider* create() {
            return il2cpp::create_object<app::AutoDamageCollider>(get_class());
        }
    } // namespace AutoDamageCollider
} // namespace app::classes::types
