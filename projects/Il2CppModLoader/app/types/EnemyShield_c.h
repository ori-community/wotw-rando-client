#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyShield_c {
        inline app::EnemyShield_c__Class** type_info = (app::EnemyShield_c__Class**)(modloader::win::memory::resolve_rva(0x0477C8B0));
        inline app::EnemyShield_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyShield_c__Class>(type_info, "", "EnemyShield", "<>c");
        }
        inline app::EnemyShield_c* create() {
            return il2cpp::create_object<app::EnemyShield_c>(get_class());
        }
    } // namespace EnemyShield_c
} // namespace app::classes::types
