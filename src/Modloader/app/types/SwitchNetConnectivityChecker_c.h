#pragma once
#include <Modloader/app/structs/SwitchNetConnectivityChecker_c.h>
#include <Modloader/app/structs/SwitchNetConnectivityChecker_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchNetConnectivityChecker_c {
        inline app::SwitchNetConnectivityChecker_c__Class** type_info() {
            static app::SwitchNetConnectivityChecker_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwitchNetConnectivityChecker_c__Class**)(modloader::win::memory::resolve_rva(0x0470D640));
            }
            return cache;
        }
        inline app::SwitchNetConnectivityChecker_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SwitchNetConnectivityChecker_c__Class>(type_info(), "SystemIntegration", "SwitchNetConnectivityChecker", "<>c");
        }
        inline app::SwitchNetConnectivityChecker_c* create() {
            return il2cpp::create_object<app::SwitchNetConnectivityChecker_c>(get_class());
        }
    } // namespace SwitchNetConnectivityChecker_c
} // namespace app::classes::types
