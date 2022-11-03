#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetBreadcrumbsTracker {
        namespace {
            inline app::TargetBreadcrumbsTracker__Class* type_info_ref = nullptr;
        }
        inline app::TargetBreadcrumbsTracker__Class** type_info = &type_info_ref;
        inline app::TargetBreadcrumbsTracker__Class* get_class() {
            return il2cpp::get_class<app::TargetBreadcrumbsTracker__Class>(type_info, "", "TargetBreadcrumbsTracker");
        }
        inline app::TargetBreadcrumbsTracker* create() {
            return il2cpp::create_object<app::TargetBreadcrumbsTracker>(get_class());
        }
    } // namespace TargetBreadcrumbsTracker
} // namespace app::classes::types
