#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpOrbPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpOrbPickup__Class** type_info;
        inline app::ExpOrbPickup__Class* get_class() {
            return il2cpp::get_class<app::ExpOrbPickup__Class>(type_info, "", "ExpOrbPickup");
        }
        inline app::ExpOrbPickup* create() {
            return il2cpp::create_object<app::ExpOrbPickup>(get_class());
        }
    } // namespace ExpOrbPickup
} // namespace app::classes::types
