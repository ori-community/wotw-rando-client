#pragma once
#include <Modloader/app/structs/Collision2D.h>
#include <Modloader/app/structs/Collision2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Collision2D {
        inline app::Collision2D__Class** type_info() {
            static app::Collision2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Collision2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Collision2D__Class* get_class() {
            return il2cpp::get_class<app::Collision2D__Class>(type_info(), "UnityEngine", "Collision2D");
        }
        inline app::Collision2D* create() {
            return il2cpp::create_object<app::Collision2D>(get_class());
        }
    } // namespace Collision2D
} // namespace app::classes::types
