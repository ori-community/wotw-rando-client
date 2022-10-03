#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchNetConnectivityChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchNetConnectivityChecker__Class** type_info;
        inline app::SwitchNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::SwitchNetConnectivityChecker__Class>(type_info, "SystemIntegration", "SwitchNetConnectivityChecker");
        }
        inline app::SwitchNetConnectivityChecker* create() {
            return il2cpp::create_object<app::SwitchNetConnectivityChecker>(get_class());
        }
    } // namespace SwitchNetConnectivityChecker
} // namespace app::classes::types
