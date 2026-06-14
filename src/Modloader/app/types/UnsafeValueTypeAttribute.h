#pragma once
#include <Modloader/app/structs/UnsafeValueTypeAttribute.h>
#include <Modloader/app/structs/UnsafeValueTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeValueTypeAttribute {
        inline app::UnsafeValueTypeAttribute__Class** type_info() {
            static app::UnsafeValueTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsafeValueTypeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsafeValueTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnsafeValueTypeAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "UnsafeValueTypeAttribute");
        }
        inline app::UnsafeValueTypeAttribute* create() {
            return il2cpp::create_object<app::UnsafeValueTypeAttribute>(get_class());
        }
    } // namespace UnsafeValueTypeAttribute
} // namespace app::classes::types
