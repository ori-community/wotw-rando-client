#pragma once
#include <Modloader/app/structs/TypeLibVersionAttribute.h>
#include <Modloader/app/structs/TypeLibVersionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeLibVersionAttribute {
        inline app::TypeLibVersionAttribute__Class** type_info() {
            static app::TypeLibVersionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeLibVersionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeLibVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeLibVersionAttribute__Class>(type_info(), "System.Runtime.InteropServices", "TypeLibVersionAttribute");
        }
        inline app::TypeLibVersionAttribute* create() {
            return il2cpp::create_object<app::TypeLibVersionAttribute>(get_class());
        }
    } // namespace TypeLibVersionAttribute
} // namespace app::classes::types
