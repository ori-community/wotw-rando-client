#pragma once
#include <Modloader/app/structs/RuntimeInitializeLoadType__Enum.h>
#include <Modloader/app/structs/RuntimeInitializeLoadType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeInitializeLoadType__Enum {
        inline app::RuntimeInitializeLoadType__Enum__Class** type_info() {
            static app::RuntimeInitializeLoadType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeInitializeLoadType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeInitializeLoadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuntimeInitializeLoadType__Enum__Class>(type_info(), "UnityEngine", "RuntimeInitializeLoadType");
        }
        inline app::RuntimeInitializeLoadType__Enum* create() {
            return il2cpp::create_object<app::RuntimeInitializeLoadType__Enum>(get_class());
        }
    } // namespace RuntimeInitializeLoadType__Enum
} // namespace app::classes::types
