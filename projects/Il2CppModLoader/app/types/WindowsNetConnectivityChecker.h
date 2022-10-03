#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowsNetConnectivityChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindowsNetConnectivityChecker__Class** type_info;
        inline app::WindowsNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::WindowsNetConnectivityChecker__Class>(type_info, "SystemIntegration", "WindowsNetConnectivityChecker");
        }
        inline app::WindowsNetConnectivityChecker* create() {
            return il2cpp::create_object<app::WindowsNetConnectivityChecker>(get_class());
        }
    } // namespace WindowsNetConnectivityChecker
} // namespace app::classes::types
