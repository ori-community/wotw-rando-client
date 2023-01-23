#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashOwlEnemySettings__Class.h>
#include <Modloader/app/structs/DashOwlEnemySettings.h>

namespace app::classes::types {
    namespace DashOwlEnemySettings {
        namespace {
            inline app::DashOwlEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlEnemySettings__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemySettings__Class>(type_info, "", "DashOwlEnemySettings");
        }
        inline app::DashOwlEnemySettings* create() {
            return il2cpp::create_object<app::DashOwlEnemySettings>(get_class());
        }
    } // namespace DashOwlEnemySettings
} // namespace app::classes::types
