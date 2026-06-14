#pragma once
#include <Modloader/app/structs/BatEnemy_Body3DSettings.h>
#include <Modloader/app/structs/BatEnemy_Body3DSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatEnemy_Body3DSettings {
        inline app::BatEnemy_Body3DSettings__Class** type_info() {
            static app::BatEnemy_Body3DSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BatEnemy_Body3DSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BatEnemy_Body3DSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BatEnemy_Body3DSettings__Class>(type_info(), "", "BatEnemy", "Body3DSettings");
        }
        inline app::BatEnemy_Body3DSettings* create() {
            return il2cpp::create_object<app::BatEnemy_Body3DSettings>(get_class());
        }
    } // namespace BatEnemy_Body3DSettings
} // namespace app::classes::types
