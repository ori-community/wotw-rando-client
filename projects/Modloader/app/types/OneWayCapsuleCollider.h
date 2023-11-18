#pragma once
#include <Modloader/app/structs/OneWayCapsuleCollider.h>
#include <Modloader/app/structs/OneWayCapsuleCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneWayCapsuleCollider {
        inline app::OneWayCapsuleCollider__Class** type_info() {
            static app::OneWayCapsuleCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneWayCapsuleCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneWayCapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::OneWayCapsuleCollider__Class>(type_info(), "", "OneWayCapsuleCollider");
        }
        inline app::OneWayCapsuleCollider* create() {
            return il2cpp::create_object<app::OneWayCapsuleCollider>(get_class());
        }
    } // namespace OneWayCapsuleCollider
} // namespace app::classes::types
