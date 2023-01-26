#pragma once
#include <Modloader/app/structs/InterpolateCollider.h>
#include <Modloader/app/structs/InterpolateCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterpolateCollider {
        inline app::InterpolateCollider__Class** type_info() {
            static app::InterpolateCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InterpolateCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InterpolateCollider__Class* get_class() {
            return il2cpp::get_class<app::InterpolateCollider__Class>(type_info(), "", "InterpolateCollider");
        }
        inline app::InterpolateCollider* create() {
            return il2cpp::create_object<app::InterpolateCollider>(get_class());
        }
    } // namespace InterpolateCollider
} // namespace app::classes::types
