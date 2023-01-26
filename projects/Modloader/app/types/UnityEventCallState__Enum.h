#pragma once
#include <Modloader/app/structs/UnityEventCallState__Enum.h>
#include <Modloader/app/structs/UnityEventCallState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityEventCallState__Enum {
        inline app::UnityEventCallState__Enum__Class** type_info() {
            static app::UnityEventCallState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityEventCallState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityEventCallState__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnityEventCallState__Enum__Class>(type_info(), "UnityEngine.Events", "UnityEventCallState");
        }
        inline app::UnityEventCallState__Enum* create() {
            return il2cpp::create_object<app::UnityEventCallState__Enum>(get_class());
        }
    } // namespace UnityEventCallState__Enum
} // namespace app::classes::types
