#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrdkSignInProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrdkSignInProvider__Class** type_info;
        inline app::GrdkSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::GrdkSignInProvider__Class>(type_info, "SystemIntegration", "GrdkSignInProvider");
        }
        inline app::GrdkSignInProvider* create() {
            return il2cpp::create_object<app::GrdkSignInProvider>(get_class());
        }
    } // namespace GrdkSignInProvider
} // namespace app::classes::types
