#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChargingSootEnemySettings {
        namespace {
            inline app::ChargingSootEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::ChargingSootEnemySettings__Class** type_info = &type_info_ref;
        inline app::ChargingSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::ChargingSootEnemySettings__Class>(type_info, "", "ChargingSootEnemySettings");
        }
        inline app::ChargingSootEnemySettings* create() {
            return il2cpp::create_object<app::ChargingSootEnemySettings>(get_class());
        }
    } // namespace ChargingSootEnemySettings
} // namespace app::classes::types
