#pragma once
#include <Modloader/app/structs/RuntimeCompatibilityAttribute.h>
#include <Modloader/app/structs/RuntimeCompatibilityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeCompatibilityAttribute {
        inline app::RuntimeCompatibilityAttribute__Class** type_info() {
            static app::RuntimeCompatibilityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeCompatibilityAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeCompatibilityAttribute__Class* get_class() {
            return il2cpp::get_class<app::RuntimeCompatibilityAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
        }
        inline app::RuntimeCompatibilityAttribute* create() {
            return il2cpp::create_object<app::RuntimeCompatibilityAttribute>(get_class());
        }
    } // namespace RuntimeCompatibilityAttribute
} // namespace app::classes::types
