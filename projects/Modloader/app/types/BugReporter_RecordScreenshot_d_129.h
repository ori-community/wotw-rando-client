#pragma once
#include <Modloader/app/structs/BugReporter_RecordScreenshot_d_129.h>
#include <Modloader/app/structs/BugReporter_RecordScreenshot_d_129__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugReporter_RecordScreenshot_d_129 {
        inline app::BugReporter_RecordScreenshot_d_129__Class** type_info() {
            static app::BugReporter_RecordScreenshot_d_129__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BugReporter_RecordScreenshot_d_129__Class**)(modloader::win::memory::resolve_rva(0x04702150));
            }
            return cache;
        }
        inline app::BugReporter_RecordScreenshot_d_129__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_RecordScreenshot_d_129__Class>(type_info(), "", "BugReporter", "<RecordScreenshot>d__129");
        }
        inline app::BugReporter_RecordScreenshot_d_129* create() {
            return il2cpp::create_object<app::BugReporter_RecordScreenshot_d_129>(get_class());
        }
    } // namespace BugReporter_RecordScreenshot_d_129
} // namespace app::classes::types
