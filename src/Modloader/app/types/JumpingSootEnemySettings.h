#pragma once
#include <Modloader/app/structs/JumpingSootEnemySettings.h>
#include <Modloader/app/structs/JumpingSootEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpingSootEnemySettings {
        inline app::JumpingSootEnemySettings__Class** type_info() {
            static app::JumpingSootEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpingSootEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpingSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemySettings__Class>(type_info(), "", "JumpingSootEnemySettings");
        }
        inline app::JumpingSootEnemySettings* create() {
            return il2cpp::create_object<app::JumpingSootEnemySettings>(get_class());
        }
    } // namespace JumpingSootEnemySettings
} // namespace app::classes::types
