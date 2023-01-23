#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpingSootEnemyAnimations__Class.h>
#include <Modloader/app/structs/JumpingSootEnemyAnimations.h>

namespace app::classes::types {
    namespace JumpingSootEnemyAnimations {
        namespace {
            inline app::JumpingSootEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::JumpingSootEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::JumpingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemyAnimations__Class>(type_info, "", "JumpingSootEnemyAnimations");
        }
        inline app::JumpingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::JumpingSootEnemyAnimations>(get_class());
        }
    } // namespace JumpingSootEnemyAnimations
} // namespace app::classes::types
