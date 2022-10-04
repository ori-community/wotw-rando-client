#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPrincipal {
        namespace {
            app::IPrincipal__Class* type_info_ref = nullptr;
        }
        app::IPrincipal__Class** type_info = &type_info_ref;
        inline app::IPrincipal__Class* get_class() {
            return il2cpp::get_class<app::IPrincipal__Class>(type_info, "System.Security.Principal", "IPrincipal");
        }
        inline app::IPrincipal* create() {
            return il2cpp::create_object<app::IPrincipal>(get_class());
        }
    } // namespace IPrincipal
} // namespace app::classes::types
