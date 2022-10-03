#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalSignInProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalSignInProvider__Class** type_info;
        inline app::XalSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::XalSignInProvider__Class>(type_info, "SystemIntegration", "XalSignInProvider");
        }
        inline app::XalSignInProvider* create() {
            return il2cpp::create_object<app::XalSignInProvider>(get_class());
        }
    } // namespace XalSignInProvider
} // namespace app::classes::types
