#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BatEnemy_Body3DSettings__Class.h>
#include <Modloader/app/structs/BatEnemy_Body3DSettings.h>

namespace app::classes::types {
    namespace BatEnemy_Body3DSettings {
        namespace {
            inline app::BatEnemy_Body3DSettings__Class* type_info_ref = nullptr;
        }
        inline app::BatEnemy_Body3DSettings__Class** type_info = &type_info_ref;
        inline app::BatEnemy_Body3DSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BatEnemy_Body3DSettings__Class>(type_info, "", "BatEnemy", "Body3DSettings");
        }
        inline app::BatEnemy_Body3DSettings* create() {
            return il2cpp::create_object<app::BatEnemy_Body3DSettings>(get_class());
        }
    } // namespace BatEnemy_Body3DSettings
} // namespace app::classes::types
