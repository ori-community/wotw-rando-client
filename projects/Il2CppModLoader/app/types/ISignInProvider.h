#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISignInProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISignInProvider__Class** type_info;
        inline app::ISignInProvider__Class* get_class() {
            return il2cpp::get_class<app::ISignInProvider__Class>(type_info, "SystemIntegration", "ISignInProvider");
        }
        inline app::ISignInProvider* create() {
            return il2cpp::create_object<app::ISignInProvider>(get_class());
        }
    } // namespace ISignInProvider
} // namespace app::classes::types
