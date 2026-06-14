#pragma once
#include <Modloader/app/structs/StaggerDamageTracker.h>
#include <Modloader/app/structs/StaggerDamageTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaggerDamageTracker {
        inline app::StaggerDamageTracker__Class** type_info() {
            static app::StaggerDamageTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaggerDamageTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaggerDamageTracker__Class* get_class() {
            return il2cpp::get_class<app::StaggerDamageTracker__Class>(type_info(), "Moon", "StaggerDamageTracker");
        }
        inline app::StaggerDamageTracker* create() {
            return il2cpp::create_object<app::StaggerDamageTracker>(get_class());
        }
    } // namespace StaggerDamageTracker
} // namespace app::classes::types
