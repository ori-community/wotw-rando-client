#pragma once
#include <Modloader/app/structs/BugReporter_BugReport.h>
#include <Modloader/app/structs/BugReporter_BugReport__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugReporter_BugReport {
        inline app::BugReporter_BugReport__Class** type_info() {
            static app::BugReporter_BugReport__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BugReporter_BugReport__Class**)(modloader::win::memory::resolve_rva(0x04713668));
            }
            return cache;
        }
        inline app::BugReporter_BugReport__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_BugReport__Class>(type_info(), "", "BugReporter", "BugReport");
        }
        inline app::BugReporter_BugReport* create() {
            return il2cpp::create_object<app::BugReporter_BugReport>(get_class());
        }
    } // namespace BugReporter_BugReport
} // namespace app::classes::types
