#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformServiceProvider__Class** type_info;
        inline app::PlatformServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::PlatformServiceProvider__Class>(type_info, "SystemIntegration", "PlatformServiceProvider");
        }
        inline app::PlatformServiceProvider* create() {
            return il2cpp::create_object<app::PlatformServiceProvider>(get_class());
        }
    } // namespace PlatformServiceProvider
} // namespace app::classes::types
