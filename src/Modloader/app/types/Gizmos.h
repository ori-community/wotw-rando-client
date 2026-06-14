#pragma once
#include <Modloader/app/structs/Gizmos.h>
#include <Modloader/app/structs/Gizmos__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Gizmos {
        inline app::Gizmos__Class** type_info() {
            static app::Gizmos__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Gizmos__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Gizmos__Class* get_class() {
            return il2cpp::get_class<app::Gizmos__Class>(type_info(), "UnityEngine", "Gizmos");
        }
        inline app::Gizmos* create() {
            return il2cpp::create_object<app::Gizmos>(get_class());
        }
    } // namespace Gizmos
} // namespace app::classes::types
