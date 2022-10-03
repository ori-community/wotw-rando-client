#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxNetConnectivityChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxNetConnectivityChecker__Class** type_info;
        inline app::XboxNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::XboxNetConnectivityChecker__Class>(type_info, "SystemIntegration", "XboxNetConnectivityChecker");
        }
        inline app::XboxNetConnectivityChecker* create() {
            return il2cpp::create_object<app::XboxNetConnectivityChecker>(get_class());
        }
    } // namespace XboxNetConnectivityChecker
} // namespace app::classes::types
