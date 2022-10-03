#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectSecurity {
        namespace {
            app::ObjectSecurity__Class* type_info_ref = nullptr;
        }
        app::ObjectSecurity__Class** type_info = &type_info_ref;
        inline app::ObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::ObjectSecurity__Class>(type_info, "System.Security.AccessControl", "ObjectSecurity");
        }
        inline app::ObjectSecurity* create() {
            return il2cpp::create_object<app::ObjectSecurity>(get_class());
        }
    } // namespace ObjectSecurity
} // namespace app::classes::types
