#pragma once
#include <Modloader/app/structs/WebPermissionAttribute.h>
#include <Modloader/app/structs/WebPermissionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebPermissionAttribute {
        inline app::WebPermissionAttribute__Class** type_info() {
            static app::WebPermissionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebPermissionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::WebPermissionAttribute__Class>(type_info(), "System.Net", "WebPermissionAttribute");
        }
        inline app::WebPermissionAttribute* create() {
            return il2cpp::create_object<app::WebPermissionAttribute>(get_class());
        }
    } // namespace WebPermissionAttribute
} // namespace app::classes::types
