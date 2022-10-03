#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommonObjectSecurity {
        namespace {
            app::CommonObjectSecurity__Class* type_info_ref = nullptr;
        }
        app::CommonObjectSecurity__Class** type_info = &type_info_ref;
        inline app::CommonObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::CommonObjectSecurity__Class>(type_info, "System.Security.AccessControl", "CommonObjectSecurity");
        }
        inline app::CommonObjectSecurity* create() {
            return il2cpp::create_object<app::CommonObjectSecurity>(get_class());
        }
    } // namespace CommonObjectSecurity
} // namespace app::classes::types
