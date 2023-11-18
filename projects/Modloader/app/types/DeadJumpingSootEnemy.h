#pragma once
#include <Modloader/app/structs/DeadJumpingSootEnemy.h>
#include <Modloader/app/structs/DeadJumpingSootEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadJumpingSootEnemy {
        inline app::DeadJumpingSootEnemy__Class** type_info() {
            static app::DeadJumpingSootEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadJumpingSootEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadJumpingSootEnemy__Class* get_class() {
            return il2cpp::get_class<app::DeadJumpingSootEnemy__Class>(type_info(), "", "DeadJumpingSootEnemy");
        }
        inline app::DeadJumpingSootEnemy* create() {
            return il2cpp::create_object<app::DeadJumpingSootEnemy>(get_class());
        }
    } // namespace DeadJumpingSootEnemy
} // namespace app::classes::types
