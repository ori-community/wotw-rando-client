#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StaggerSettings {
        namespace {
            inline app::StaggerSettings__Class* type_info_ref = nullptr;
        }
        inline app::StaggerSettings__Class** type_info = &type_info_ref;
        inline app::StaggerSettings__Class* get_class() {
            return il2cpp::get_class<app::StaggerSettings__Class>(type_info, "Moon", "StaggerSettings");
        }
        inline app::StaggerSettings* create() {
            return il2cpp::create_object<app::StaggerSettings>(get_class());
        }
    } // namespace StaggerSettings
} // namespace app::classes::types
