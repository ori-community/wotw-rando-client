#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemiesSettings {
        namespace {
            inline app::EnemiesSettings__Class* type_info_ref = nullptr;
        }
        inline app::EnemiesSettings__Class** type_info = &type_info_ref;
        inline app::EnemiesSettings__Class* get_class() {
            return il2cpp::get_class<app::EnemiesSettings__Class>(type_info, "Moon", "EnemiesSettings");
        }
        inline app::EnemiesSettings* create() {
            return il2cpp::create_object<app::EnemiesSettings>(get_class());
        }
    } // namespace EnemiesSettings
} // namespace app::classes::types
