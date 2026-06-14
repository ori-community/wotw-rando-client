#pragma once
#include <Modloader/app/structs/RaycastResult__Array.h>
#include <Modloader/app/structs/RaycastResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycastResult__Array {
        inline app::RaycastResult__Array__Class** type_info() {
            static app::RaycastResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaycastResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaycastResult__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastResult__Array__Class>(type_info(), "UnityEngine.EventSystems", "RaycastResult[]");
        }
        inline app::RaycastResult__Array* create() {
            return il2cpp::create_object<app::RaycastResult__Array>(get_class());
        }
    } // namespace RaycastResult__Array
} // namespace app::classes::types
