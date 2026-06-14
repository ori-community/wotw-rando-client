#pragma once
#include <Modloader/app/structs/JumpingSootEnemyAnimations.h>
#include <Modloader/app/structs/JumpingSootEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpingSootEnemyAnimations {
        inline app::JumpingSootEnemyAnimations__Class** type_info() {
            static app::JumpingSootEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpingSootEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemyAnimations__Class>(type_info(), "", "JumpingSootEnemyAnimations");
        }
        inline app::JumpingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::JumpingSootEnemyAnimations>(get_class());
        }
    } // namespace JumpingSootEnemyAnimations
} // namespace app::classes::types
