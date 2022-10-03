#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamUGCDetails_t {
        namespace {
            app::SteamUGCDetails_t__Class* type_info_ref = nullptr;
        }
        app::SteamUGCDetails_t__Class** type_info = &type_info_ref;
        inline app::SteamUGCDetails_t__Class* get_class() {
            return il2cpp::get_class<app::SteamUGCDetails_t__Class>(type_info, "Steamworks", "SteamUGCDetails_t");
        }
        inline app::SteamUGCDetails_t* create() {
            return il2cpp::create_object<app::SteamUGCDetails_t>(get_class());
        }
        inline app::SteamUGCDetails_t__Boxed* box(app::SteamUGCDetails_t value) {
            return il2cpp::box_value<app::SteamUGCDetails_t__Boxed>(get_class(), value);
        }
    } // namespace SteamUGCDetails_t
} // namespace app::classes::types
