#pragma once
#include <Modloader/app/structs/DiagnosticsConfigurationHandler.h>
#include <Modloader/app/structs/DiagnosticsConfigurationHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiagnosticsConfigurationHandler {
        inline app::DiagnosticsConfigurationHandler__Class** type_info() {
            static app::DiagnosticsConfigurationHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DiagnosticsConfigurationHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DiagnosticsConfigurationHandler__Class* get_class() {
            return il2cpp::get_class<app::DiagnosticsConfigurationHandler__Class>(type_info(), "System.Diagnostics", "DiagnosticsConfigurationHandler");
        }
        inline app::DiagnosticsConfigurationHandler* create() {
            return il2cpp::create_object<app::DiagnosticsConfigurationHandler>(get_class());
        }
    } // namespace DiagnosticsConfigurationHandler
} // namespace app::classes::types
