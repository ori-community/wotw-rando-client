#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamItemDef_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamItemDef_t__Class** type_info;
        inline app::SteamItemDef_t__Class* get_class() {
            return il2cpp::get_class<app::SteamItemDef_t__Class>(type_info, "Steamworks", "SteamItemDef_t");
        }
        inline app::SteamItemDef_t* create() {
            return il2cpp::create_object<app::SteamItemDef_t>(get_class());
        }
        inline app::SteamItemDef_t__Boxed* box(app::SteamItemDef_t value) {
            return il2cpp::box_value<app::SteamItemDef_t__Boxed>(get_class(), value);
        }
        inline app::SteamItemDef_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamItemDef_t__Array>(get_class(), size);
        }
        inline app::SteamItemDef_t__Array* create_array(const std::vector<app::SteamItemDef_t>& items) {
            return il2cpp::array_new<app::SteamItemDef_t__Array>(get_class(), items);
        }
    } // namespace SteamItemDef_t
} // namespace app::classes::types
