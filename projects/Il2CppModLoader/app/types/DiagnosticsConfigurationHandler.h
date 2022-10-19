#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DiagnosticsConfigurationHandler {
        namespace {
            inline app::DiagnosticsConfigurationHandler__Class* type_info_ref = nullptr;
        }
        inline app::DiagnosticsConfigurationHandler__Class** type_info = &type_info_ref;
        inline app::DiagnosticsConfigurationHandler__Class* get_class() {
            return il2cpp::get_class<app::DiagnosticsConfigurationHandler__Class>(type_info, "System.Diagnostics", "DiagnosticsConfigurationHandler");
        }
        inline app::DiagnosticsConfigurationHandler* create() {
            return il2cpp::create_object<app::DiagnosticsConfigurationHandler>(get_class());
        }
    } // namespace DiagnosticsConfigurationHandler
} // namespace app::classes::types
