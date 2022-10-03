#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapStonePickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MapStonePickup__Class** type_info;
        inline app::MapStonePickup__Class* get_class() {
            return il2cpp::get_class<app::MapStonePickup__Class>(type_info, "", "MapStonePickup");
        }
        inline app::MapStonePickup* create() {
            return il2cpp::create_object<app::MapStonePickup>(get_class());
        }
    } // namespace MapStonePickup
} // namespace app::classes::types
