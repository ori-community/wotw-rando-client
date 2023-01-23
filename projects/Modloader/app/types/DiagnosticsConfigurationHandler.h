#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DiagnosticsConfigurationHandler__Class.h>
#include <Modloader/app/structs/DiagnosticsConfigurationHandler.h>

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
