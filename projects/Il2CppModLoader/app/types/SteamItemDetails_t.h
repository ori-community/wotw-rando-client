#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamItemDetails_t {
        namespace {
            app::SteamItemDetails_t__Class* type_info_ref = nullptr;
        }
        app::SteamItemDetails_t__Class** type_info = &type_info_ref;
        inline app::SteamItemDetails_t__Class* get_class() {
            return il2cpp::get_class<app::SteamItemDetails_t__Class>(type_info, "Steamworks", "SteamItemDetails_t");
        }
        inline app::SteamItemDetails_t* create() {
            return il2cpp::create_object<app::SteamItemDetails_t>(get_class());
        }
        inline app::SteamItemDetails_t__Boxed* box(app::SteamItemDetails_t value) {
            return il2cpp::box_value<app::SteamItemDetails_t__Boxed>(get_class(), value);
        }
        inline app::SteamItemDetails_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamItemDetails_t__Array>(get_class(), size);
        }
    } // namespace SteamItemDetails_t
} // namespace app::classes::types
