#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityEvent {
        namespace {
            inline app::UnityEvent__Class* type_info_ref = nullptr;
        }
        inline app::UnityEvent__Class** type_info = &type_info_ref;
        inline app::UnityEvent__Class* get_class() {
            return il2cpp::get_class<app::UnityEvent__Class>(type_info, "UnityEngine.Events", "UnityEvent");
        }
        inline app::UnityEvent* create() {
            return il2cpp::create_object<app::UnityEvent>(get_class());
        }
    } // namespace UnityEvent
} // namespace app::classes::types
