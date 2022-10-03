#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxSignInProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxSignInProvider__Class** type_info;
        inline app::XboxSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::XboxSignInProvider__Class>(type_info, "SystemIntegration", "XboxSignInProvider");
        }
        inline app::XboxSignInProvider* create() {
            return il2cpp::create_object<app::XboxSignInProvider>(get_class());
        }
    } // namespace XboxSignInProvider
} // namespace app::classes::types
