#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerThrowAttack_ProjectileInstance {
        inline app::MinerThrowAttack_ProjectileInstance__Class** type_info = (app::MinerThrowAttack_ProjectileInstance__Class**)(modloader::win::memory::resolve_rva(0x04750E10));
        inline app::MinerThrowAttack_ProjectileInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerThrowAttack_ProjectileInstance__Class>(type_info, "", "MinerThrowAttack", "ProjectileInstance");
        }
        inline app::MinerThrowAttack_ProjectileInstance* create() {
            return il2cpp::create_object<app::MinerThrowAttack_ProjectileInstance>(get_class());
        }
    } // namespace MinerThrowAttack_ProjectileInstance
} // namespace app::classes::types
