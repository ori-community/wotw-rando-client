#pragma once
#include <Modloader/app/structs/UnityEvent.h>
#include <Modloader/app/structs/UnityEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityEvent {
        inline app::UnityEvent__Class** type_info() {
            static app::UnityEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityEvent__Class* get_class() {
            return il2cpp::get_class<app::UnityEvent__Class>(type_info(), "UnityEngine.Events", "UnityEvent");
        }
        inline app::UnityEvent* create() {
            return il2cpp::create_object<app::UnityEvent>(get_class());
        }
    } // namespace UnityEvent
} // namespace app::classes::types
