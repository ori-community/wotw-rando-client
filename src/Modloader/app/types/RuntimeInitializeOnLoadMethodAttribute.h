#pragma once
#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute.h>
#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeInitializeOnLoadMethodAttribute {
        inline app::RuntimeInitializeOnLoadMethodAttribute__Class** type_info() {
            static app::RuntimeInitializeOnLoadMethodAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeInitializeOnLoadMethodAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeInitializeOnLoadMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::RuntimeInitializeOnLoadMethodAttribute__Class>(type_info(), "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
        }
        inline app::RuntimeInitializeOnLoadMethodAttribute* create() {
            return il2cpp::create_object<app::RuntimeInitializeOnLoadMethodAttribute>(get_class());
        }
    } // namespace RuntimeInitializeOnLoadMethodAttribute
} // namespace app::classes::types
