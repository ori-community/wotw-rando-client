#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlatformUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlatformUser__Class** type_info;
        inline app::IPlatformUser__Class* get_class() {
            return il2cpp::get_class<app::IPlatformUser__Class>(type_info, "SystemIntegration", "IPlatformUser");
        }
    } // namespace IPlatformUser
} // namespace app::classes::types
