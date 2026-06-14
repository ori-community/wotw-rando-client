#pragma once
#include <Modloader/app/structs/ColliderMask.h>
#include <Modloader/app/structs/ColliderMask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColliderMask {
        inline app::ColliderMask__Class** type_info() {
            static app::ColliderMask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColliderMask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColliderMask__Class* get_class() {
            return il2cpp::get_class<app::ColliderMask__Class>(type_info(), "", "ColliderMask");
        }
        inline app::ColliderMask* create() {
            return il2cpp::create_object<app::ColliderMask>(get_class());
        }
    } // namespace ColliderMask
} // namespace app::classes::types
