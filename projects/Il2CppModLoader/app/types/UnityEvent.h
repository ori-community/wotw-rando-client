#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityEvent {
        namespace {
            app::UnityEvent__Class* type_info_ref = nullptr;
        }
        app::UnityEvent__Class** type_info = &type_info_ref;
        inline app::UnityEvent__Class* get_class() {
            return il2cpp::get_class<app::UnityEvent__Class>(type_info, "UnityEngine.Events", "UnityEvent");
        }
        inline app::UnityEvent* create() {
            return il2cpp::create_object<app::UnityEvent>(get_class());
        }
    } // namespace UnityEvent
} // namespace app::classes::types
