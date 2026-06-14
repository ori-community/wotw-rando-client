#pragma once
#include <Modloader/app/structs/BugReportMenuItem.h>
#include <Modloader/app/structs/BugReportMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugReportMenuItem {
        inline app::BugReportMenuItem__Class** type_info() {
            static app::BugReportMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BugReportMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BugReportMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BugReportMenuItem__Class>(type_info(), "", "BugReportMenuItem");
        }
        inline app::BugReportMenuItem* create() {
            return il2cpp::create_object<app::BugReportMenuItem>(get_class());
        }
    } // namespace BugReportMenuItem
} // namespace app::classes::types
