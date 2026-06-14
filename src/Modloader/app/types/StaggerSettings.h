#pragma once
#include <Modloader/app/structs/StaggerSettings.h>
#include <Modloader/app/structs/StaggerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaggerSettings {
        inline app::StaggerSettings__Class** type_info() {
            static app::StaggerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaggerSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaggerSettings__Class* get_class() {
            return il2cpp::get_class<app::StaggerSettings__Class>(type_info(), "Moon", "StaggerSettings");
        }
        inline app::StaggerSettings* create() {
            return il2cpp::create_object<app::StaggerSettings>(get_class());
        }
    } // namespace StaggerSettings
} // namespace app::classes::types
