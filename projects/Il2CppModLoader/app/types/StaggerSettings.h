#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaggerSettings {
        namespace {
            app::StaggerSettings__Class* type_info_ref = nullptr;
        }
        app::StaggerSettings__Class** type_info = &type_info_ref;
        inline app::StaggerSettings__Class* get_class() {
            return il2cpp::get_class<app::StaggerSettings__Class>(type_info, "Moon", "StaggerSettings");
        }
        inline app::StaggerSettings* create() {
            return il2cpp::create_object<app::StaggerSettings>(get_class());
        }
    } // namespace StaggerSettings
} // namespace app::classes::types
