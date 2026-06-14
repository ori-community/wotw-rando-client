#pragma once
#include <Modloader/app/structs/SoftCollider.h>
#include <Modloader/app/structs/SoftCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoftCollider {
        inline app::SoftCollider__Class** type_info() {
            static app::SoftCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoftCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoftCollider__Class* get_class() {
            return il2cpp::get_class<app::SoftCollider__Class>(type_info(), "", "SoftCollider");
        }
        inline app::SoftCollider* create() {
            return il2cpp::create_object<app::SoftCollider>(get_class());
        }
    } // namespace SoftCollider
} // namespace app::classes::types
