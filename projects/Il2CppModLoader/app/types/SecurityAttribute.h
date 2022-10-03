#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityAttribute {
        namespace {
            app::SecurityAttribute__Class* type_info_ref = nullptr;
        }
        app::SecurityAttribute__Class** type_info = &type_info_ref;
        inline app::SecurityAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityAttribute__Class>(type_info, "System.Security.Permissions", "SecurityAttribute");
        }
        inline app::SecurityAttribute* create() {
            return il2cpp::create_object<app::SecurityAttribute>(get_class());
        }
    } // namespace SecurityAttribute
} // namespace app::classes::types
