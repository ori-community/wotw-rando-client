#pragma once
#include <Modloader/app/structs/SecurityAttribute.h>
#include <Modloader/app/structs/SecurityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityAttribute {
        inline app::SecurityAttribute__Class** type_info() {
            static app::SecurityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityAttribute__Class>(type_info(), "System.Security.Permissions", "SecurityAttribute");
        }
        inline app::SecurityAttribute* create() {
            return il2cpp::create_object<app::SecurityAttribute>(get_class());
        }
    } // namespace SecurityAttribute
} // namespace app::classes::types
