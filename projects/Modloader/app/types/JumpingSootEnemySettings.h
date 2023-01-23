#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpingSootEnemySettings__Class.h>
#include <Modloader/app/structs/JumpingSootEnemySettings.h>

namespace app::classes::types {
    namespace JumpingSootEnemySettings {
        namespace {
            inline app::JumpingSootEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::JumpingSootEnemySettings__Class** type_info = &type_info_ref;
        inline app::JumpingSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemySettings__Class>(type_info, "", "JumpingSootEnemySettings");
        }
        inline app::JumpingSootEnemySettings* create() {
            return il2cpp::create_object<app::JumpingSootEnemySettings>(get_class());
        }
    } // namespace JumpingSootEnemySettings
} // namespace app::classes::types
