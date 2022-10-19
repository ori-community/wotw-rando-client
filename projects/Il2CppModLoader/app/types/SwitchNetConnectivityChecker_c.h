#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchNetConnectivityChecker_c {
        inline app::SwitchNetConnectivityChecker_c__Class** type_info = (app::SwitchNetConnectivityChecker_c__Class**)(modloader::win::memory::resolve_rva(0x0470D640));
        inline app::SwitchNetConnectivityChecker_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SwitchNetConnectivityChecker_c__Class>(type_info, "SystemIntegration", "SwitchNetConnectivityChecker", "<>c");
        }
        inline app::SwitchNetConnectivityChecker_c* create() {
            return il2cpp::create_object<app::SwitchNetConnectivityChecker_c>(get_class());
        }
    } // namespace SwitchNetConnectivityChecker_c
} // namespace app::classes::types
