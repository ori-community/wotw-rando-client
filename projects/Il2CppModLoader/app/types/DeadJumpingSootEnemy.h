#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeadJumpingSootEnemy {
        namespace {
            inline app::DeadJumpingSootEnemy__Class* type_info_ref = nullptr;
        }
        inline app::DeadJumpingSootEnemy__Class** type_info = &type_info_ref;
        inline app::DeadJumpingSootEnemy__Class* get_class() {
            return il2cpp::get_class<app::DeadJumpingSootEnemy__Class>(type_info, "", "DeadJumpingSootEnemy");
        }
        inline app::DeadJumpingSootEnemy* create() {
            return il2cpp::create_object<app::DeadJumpingSootEnemy>(get_class());
        }
    } // namespace DeadJumpingSootEnemy
} // namespace app::classes::types
