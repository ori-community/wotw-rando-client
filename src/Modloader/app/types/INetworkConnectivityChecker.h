#pragma once
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/INetworkConnectivityChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INetworkConnectivityChecker {
        inline app::INetworkConnectivityChecker__Class** type_info() {
            static app::INetworkConnectivityChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INetworkConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x04788438));
            }
            return cache;
        }
        inline app::INetworkConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::INetworkConnectivityChecker__Class>(type_info(), "SystemIntegration", "INetworkConnectivityChecker");
        }
    } // namespace INetworkConnectivityChecker
} // namespace app::classes::types
