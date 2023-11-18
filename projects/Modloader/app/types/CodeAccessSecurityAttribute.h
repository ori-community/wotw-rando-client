#pragma once
#include <Modloader/app/structs/CodeAccessSecurityAttribute.h>
#include <Modloader/app/structs/CodeAccessSecurityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodeAccessSecurityAttribute {
        inline app::CodeAccessSecurityAttribute__Class** type_info() {
            static app::CodeAccessSecurityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CodeAccessSecurityAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CodeAccessSecurityAttribute__Class* get_class() {
            return il2cpp::get_class<app::CodeAccessSecurityAttribute__Class>(type_info(), "System.Security.Permissions", "CodeAccessSecurityAttribute");
        }
        inline app::CodeAccessSecurityAttribute* create() {
            return il2cpp::create_object<app::CodeAccessSecurityAttribute>(get_class());
        }
    } // namespace CodeAccessSecurityAttribute
} // namespace app::classes::types
