#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BugReportMenuItem__Class.h>
#include <Modloader/app/structs/BugReportMenuItem.h>

namespace app::classes::types {
    namespace BugReportMenuItem {
        namespace {
            inline app::BugReportMenuItem__Class* type_info_ref = nullptr;
        }
        inline app::BugReportMenuItem__Class** type_info = &type_info_ref;
        inline app::BugReportMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BugReportMenuItem__Class>(type_info, "", "BugReportMenuItem");
        }
        inline app::BugReportMenuItem* create() {
            return il2cpp::create_object<app::BugReportMenuItem>(get_class());
        }
    } // namespace BugReportMenuItem
} // namespace app::classes::types
