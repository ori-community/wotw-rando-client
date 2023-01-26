#pragma once
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Collision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Collision {
        inline app::Collision__Class** type_info() {
            static app::Collision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Collision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Collision__Class* get_class() {
            return il2cpp::get_class<app::Collision__Class>(type_info(), "UnityEngine", "Collision");
        }
        inline app::Collision* create() {
            return il2cpp::create_object<app::Collision>(get_class());
        }
    } // namespace Collision
} // namespace app::classes::types
