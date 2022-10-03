#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamItemInstanceID_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamItemInstanceID_t__Class** type_info;
        inline app::SteamItemInstanceID_t__Class* get_class() {
            return il2cpp::get_class<app::SteamItemInstanceID_t__Class>(type_info, "Steamworks", "SteamItemInstanceID_t");
        }
        inline app::SteamItemInstanceID_t* create() {
            return il2cpp::create_object<app::SteamItemInstanceID_t>(get_class());
        }
        inline app::SteamItemInstanceID_t__Boxed* box(app::SteamItemInstanceID_t value) {
            return il2cpp::box_value<app::SteamItemInstanceID_t__Boxed>(get_class(), value);
        }
        inline app::SteamItemInstanceID_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamItemInstanceID_t__Array>(get_class(), size);
        }
    } // namespace SteamItemInstanceID_t
} // namespace app::classes::types
