#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingEnemySettings__Class.h>
#include <Modloader/app/structs/RammingEnemySettings.h>

namespace app::classes::types {
    namespace RammingEnemySettings {
        namespace {
            inline app::RammingEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemySettings__Class** type_info = &type_info_ref;
        inline app::RammingEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemySettings__Class>(type_info, "", "RammingEnemySettings");
        }
        inline app::RammingEnemySettings* create() {
            return il2cpp::create_object<app::RammingEnemySettings>(get_class());
        }
    } // namespace RammingEnemySettings
} // namespace app::classes::types
