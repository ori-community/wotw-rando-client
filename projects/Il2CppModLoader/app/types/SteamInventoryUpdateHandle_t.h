#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryUpdateHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamInventoryUpdateHandle_t__Class** type_info;
        inline app::SteamInventoryUpdateHandle_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryUpdateHandle_t__Class>(type_info, "Steamworks", "SteamInventoryUpdateHandle_t");
        }
        inline app::SteamInventoryUpdateHandle_t* create() {
            return il2cpp::create_object<app::SteamInventoryUpdateHandle_t>(get_class());
        }
        inline app::SteamInventoryUpdateHandle_t__Boxed* box(app::SteamInventoryUpdateHandle_t value) {
            return il2cpp::box_value<app::SteamInventoryUpdateHandle_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryUpdateHandle_t
} // namespace app::classes::types
