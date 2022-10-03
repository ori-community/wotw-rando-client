#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyShield_ShieldForwardMode__Enum {
        namespace {
            app::EnemyShield_ShieldForwardMode__Enum__Class* type_info_ref = nullptr;
        }
        app::EnemyShield_ShieldForwardMode__Enum__Class** type_info = &type_info_ref;
        inline app::EnemyShield_ShieldForwardMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyShield_ShieldForwardMode__Enum__Class>(type_info, "", "EnemyShield", "ShieldForwardMode");
        }
        inline app::EnemyShield_ShieldForwardMode__Enum* create() {
            return il2cpp::create_object<app::EnemyShield_ShieldForwardMode__Enum>(get_class());
        }
    } // namespace EnemyShield_ShieldForwardMode__Enum
} // namespace app::classes::types
