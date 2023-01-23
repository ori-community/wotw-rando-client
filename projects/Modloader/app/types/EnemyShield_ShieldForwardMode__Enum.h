#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnemyShield_ShieldForwardMode__Enum__Class.h>
#include <Modloader/app/structs/EnemyShield_ShieldForwardMode__Enum.h>

namespace app::classes::types {
    namespace EnemyShield_ShieldForwardMode__Enum {
        namespace {
            inline app::EnemyShield_ShieldForwardMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EnemyShield_ShieldForwardMode__Enum__Class** type_info = &type_info_ref;
        inline app::EnemyShield_ShieldForwardMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyShield_ShieldForwardMode__Enum__Class>(type_info, "", "EnemyShield", "ShieldForwardMode");
        }
        inline app::EnemyShield_ShieldForwardMode__Enum* create() {
            return il2cpp::create_object<app::EnemyShield_ShieldForwardMode__Enum>(get_class());
        }
    } // namespace EnemyShield_ShieldForwardMode__Enum
} // namespace app::classes::types
