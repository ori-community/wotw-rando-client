#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugReporter_BugReport {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BugReporter_BugReport__Class** type_info;
        inline app::BugReporter_BugReport__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_BugReport__Class>(type_info, "", "BugReporter", "BugReport");
        }
        inline app::BugReporter_BugReport* create() {
            return il2cpp::create_object<app::BugReporter_BugReport>(get_class());
        }
    } // namespace BugReporter_BugReport
} // namespace app::classes::types
