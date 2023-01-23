#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishEnemySettings__Class.h>
#include <Modloader/app/structs/FishEnemySettings.h>

namespace app::classes::types {
    namespace FishEnemySettings {
        namespace {
            inline app::FishEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::FishEnemySettings__Class** type_info = &type_info_ref;
        inline app::FishEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FishEnemySettings__Class>(type_info, "", "FishEnemySettings");
        }
        inline app::FishEnemySettings* create() {
            return il2cpp::create_object<app::FishEnemySettings>(get_class());
        }
    } // namespace FishEnemySettings
} // namespace app::classes::types
