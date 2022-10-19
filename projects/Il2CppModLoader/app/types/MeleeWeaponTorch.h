#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponTorch {
        inline app::MeleeWeaponTorch__Class** type_info = (app::MeleeWeaponTorch__Class**)(modloader::win::memory::resolve_rva(0x0473FF50));
        inline app::MeleeWeaponTorch__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponTorch__Class>(type_info, "", "MeleeWeaponTorch");
        }
        inline app::MeleeWeaponTorch* create() {
            return il2cpp::create_object<app::MeleeWeaponTorch>(get_class());
        }
    } // namespace MeleeWeaponTorch
} // namespace app::classes::types
