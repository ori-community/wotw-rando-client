#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/INetworkConnectivityChecker__Class.h>

namespace app::classes::types {
    namespace INetworkConnectivityChecker {
        inline app::INetworkConnectivityChecker__Class** type_info = (app::INetworkConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x04788438));
        inline app::INetworkConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::INetworkConnectivityChecker__Class>(type_info, "SystemIntegration", "INetworkConnectivityChecker");
        }
    } // namespace INetworkConnectivityChecker
} // namespace app::classes::types
