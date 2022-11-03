#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchNetConnectivityChecker {
        inline app::SwitchNetConnectivityChecker__Class** type_info = (app::SwitchNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x047356B8));
        inline app::SwitchNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::SwitchNetConnectivityChecker__Class>(type_info, "SystemIntegration", "SwitchNetConnectivityChecker");
        }
        inline app::SwitchNetConnectivityChecker* create() {
            return il2cpp::create_object<app::SwitchNetConnectivityChecker>(get_class());
        }
    } // namespace SwitchNetConnectivityChecker
} // namespace app::classes::types
