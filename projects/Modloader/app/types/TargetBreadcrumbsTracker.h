#pragma once
#include <Modloader/app/structs/TargetBreadcrumbsTracker.h>
#include <Modloader/app/structs/TargetBreadcrumbsTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetBreadcrumbsTracker {
        inline app::TargetBreadcrumbsTracker__Class** type_info() {
            static app::TargetBreadcrumbsTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetBreadcrumbsTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetBreadcrumbsTracker__Class* get_class() {
            return il2cpp::get_class<app::TargetBreadcrumbsTracker__Class>(type_info(), "", "TargetBreadcrumbsTracker");
        }
        inline app::TargetBreadcrumbsTracker* create() {
            return il2cpp::create_object<app::TargetBreadcrumbsTracker>(get_class());
        }
    } // namespace TargetBreadcrumbsTracker
} // namespace app::classes::types
