#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxUser__Class** type_info;
        inline app::XboxUser__Class* get_class() {
            return il2cpp::get_class<app::XboxUser__Class>(type_info, "SystemIntegration.SignIn.User", "XboxUser");
        }
        inline app::XboxUser* create() {
            return il2cpp::create_object<app::XboxUser>(get_class());
        }
    } // namespace XboxUser
} // namespace app::classes::types
