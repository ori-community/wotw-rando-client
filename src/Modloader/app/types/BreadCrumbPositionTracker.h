#pragma once
#include <Modloader/app/structs/BreadCrumbPositionTracker.h>
#include <Modloader/app/structs/BreadCrumbPositionTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreadCrumbPositionTracker {
        inline app::BreadCrumbPositionTracker__Class** type_info() {
            static app::BreadCrumbPositionTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreadCrumbPositionTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreadCrumbPositionTracker__Class* get_class() {
            return il2cpp::get_class<app::BreadCrumbPositionTracker__Class>(type_info(), "", "BreadCrumbPositionTracker");
        }
        inline app::BreadCrumbPositionTracker* create() {
            return il2cpp::create_object<app::BreadCrumbPositionTracker>(get_class());
        }
    } // namespace BreadCrumbPositionTracker
} // namespace app::classes::types
