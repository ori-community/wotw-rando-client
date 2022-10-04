#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlatformUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlatformUser__Class** type_info;
        inline app::IPlatformUser__Class* get_class() {
            return il2cpp::get_class<app::IPlatformUser__Class>(type_info, "SystemIntegration", "IPlatformUser");
        }
        inline app::IPlatformUser* create() {
            return il2cpp::create_object<app::IPlatformUser>(get_class());
        }
    } // namespace IPlatformUser
} // namespace app::classes::types
