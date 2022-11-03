#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxNetConnectivityChecker {
        inline app::XboxNetConnectivityChecker__Class** type_info = (app::XboxNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x0472AC40));
        inline app::XboxNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::XboxNetConnectivityChecker__Class>(type_info, "SystemIntegration", "XboxNetConnectivityChecker");
        }
        inline app::XboxNetConnectivityChecker* create() {
            return il2cpp::create_object<app::XboxNetConnectivityChecker>(get_class());
        }
    } // namespace XboxNetConnectivityChecker
} // namespace app::classes::types
