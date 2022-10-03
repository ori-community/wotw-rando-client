#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrePickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrePickup__Class** type_info;
        inline app::OrePickup__Class* get_class() {
            return il2cpp::get_class<app::OrePickup__Class>(type_info, "", "OrePickup");
        }
        inline app::OrePickup* create() {
            return il2cpp::create_object<app::OrePickup>(get_class());
        }
    } // namespace OrePickup
} // namespace app::classes::types
