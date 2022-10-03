#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetBreadcrumbsTracker {
        namespace {
            app::TargetBreadcrumbsTracker__Class* type_info_ref = nullptr;
        }
        app::TargetBreadcrumbsTracker__Class** type_info = &type_info_ref;
        inline app::TargetBreadcrumbsTracker__Class* get_class() {
            return il2cpp::get_class<app::TargetBreadcrumbsTracker__Class>(type_info, "", "TargetBreadcrumbsTracker");
        }
        inline app::TargetBreadcrumbsTracker* create() {
            return il2cpp::create_object<app::TargetBreadcrumbsTracker>(get_class());
        }
    } // namespace TargetBreadcrumbsTracker
} // namespace app::classes::types
