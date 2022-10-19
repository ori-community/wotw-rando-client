#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponmasterScreen {
        inline app::WeaponmasterScreen__Class** type_info = (app::WeaponmasterScreen__Class**)(modloader::win::memory::resolve_rva(0x0477B220));
        inline app::WeaponmasterScreen__Class* get_class() {
            return il2cpp::get_class<app::WeaponmasterScreen__Class>(type_info, "", "WeaponmasterScreen");
        }
        inline app::WeaponmasterScreen* create() {
            return il2cpp::create_object<app::WeaponmasterScreen>(get_class());
        }
    } // namespace WeaponmasterScreen
} // namespace app::classes::types
