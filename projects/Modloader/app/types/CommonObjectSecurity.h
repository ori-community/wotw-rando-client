#pragma once
#include <Modloader/app/structs/CommonObjectSecurity.h>
#include <Modloader/app/structs/CommonObjectSecurity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommonObjectSecurity {
        inline app::CommonObjectSecurity__Class** type_info() {
            static app::CommonObjectSecurity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CommonObjectSecurity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CommonObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::CommonObjectSecurity__Class>(type_info(), "System.Security.AccessControl", "CommonObjectSecurity");
        }
        inline app::CommonObjectSecurity* create() {
            return il2cpp::create_object<app::CommonObjectSecurity>(get_class());
        }
    } // namespace CommonObjectSecurity
} // namespace app::classes::types
