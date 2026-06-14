#pragma once
#include <Modloader/app/structs/SecurityPermissionAttribute.h>
#include <Modloader/app/structs/SecurityPermissionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityPermissionAttribute {
        inline app::SecurityPermissionAttribute__Class** type_info() {
            static app::SecurityPermissionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityPermissionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermissionAttribute__Class>(type_info(), "System.Security.Permissions", "SecurityPermissionAttribute");
        }
        inline app::SecurityPermissionAttribute* create() {
            return il2cpp::create_object<app::SecurityPermissionAttribute>(get_class());
        }
    } // namespace SecurityPermissionAttribute
} // namespace app::classes::types
