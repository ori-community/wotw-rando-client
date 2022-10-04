#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INetworkConnectivityChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INetworkConnectivityChecker__Class** type_info;
        inline app::INetworkConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::INetworkConnectivityChecker__Class>(type_info, "SystemIntegration", "INetworkConnectivityChecker");
        }
    } // namespace INetworkConnectivityChecker
} // namespace app::classes::types
