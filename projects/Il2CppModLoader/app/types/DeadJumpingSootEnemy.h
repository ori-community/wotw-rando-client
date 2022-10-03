#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeadJumpingSootEnemy {
        namespace {
            app::DeadJumpingSootEnemy__Class* type_info_ref = nullptr;
        }
        app::DeadJumpingSootEnemy__Class** type_info = &type_info_ref;
        inline app::DeadJumpingSootEnemy__Class* get_class() {
            return il2cpp::get_class<app::DeadJumpingSootEnemy__Class>(type_info, "", "DeadJumpingSootEnemy");
        }
        inline app::DeadJumpingSootEnemy* create() {
            return il2cpp::create_object<app::DeadJumpingSootEnemy>(get_class());
        }
    } // namespace DeadJumpingSootEnemy
} // namespace app::classes::types
