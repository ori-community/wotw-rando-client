#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeObjectSecurity {
        namespace {
            app::NativeObjectSecurity__Class* type_info_ref = nullptr;
        }
        app::NativeObjectSecurity__Class** type_info = &type_info_ref;
        inline app::NativeObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::NativeObjectSecurity__Class>(type_info, "System.Security.AccessControl", "NativeObjectSecurity");
        }
        inline app::NativeObjectSecurity* create() {
            return il2cpp::create_object<app::NativeObjectSecurity>(get_class());
        }
    } // namespace NativeObjectSecurity
} // namespace app::classes::types
