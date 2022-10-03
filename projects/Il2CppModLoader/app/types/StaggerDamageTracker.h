#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaggerDamageTracker {
        namespace {
            app::StaggerDamageTracker__Class* type_info_ref = nullptr;
        }
        app::StaggerDamageTracker__Class** type_info = &type_info_ref;
        inline app::StaggerDamageTracker__Class* get_class() {
            return il2cpp::get_class<app::StaggerDamageTracker__Class>(type_info, "Moon", "StaggerDamageTracker");
        }
        inline app::StaggerDamageTracker* create() {
            return il2cpp::create_object<app::StaggerDamageTracker>(get_class());
        }
    } // namespace StaggerDamageTracker
} // namespace app::classes::types
