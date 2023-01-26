#pragma once
#include <Modloader/app/structs/ShieldCollision.h>
#include <Modloader/app/structs/ShieldCollision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShieldCollision {
        inline app::ShieldCollision__Class** type_info() {
            static app::ShieldCollision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShieldCollision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShieldCollision__Class* get_class() {
            return il2cpp::get_class<app::ShieldCollision__Class>(type_info(), "", "ShieldCollision");
        }
        inline app::ShieldCollision* create() {
            return il2cpp::create_object<app::ShieldCollision>(get_class());
        }
    } // namespace ShieldCollision
} // namespace app::classes::types
