#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HSteamUser {
        inline app::HSteamUser__Class** type_info = (app::HSteamUser__Class**)(modloader::win::memory::resolve_rva(0x0472C278));
        inline app::HSteamUser__Class* get_class() {
            return il2cpp::get_class<app::HSteamUser__Class>(type_info, "Steamworks", "HSteamUser");
        }
        inline app::HSteamUser* create() {
            return il2cpp::create_object<app::HSteamUser>(get_class());
        }
        inline app::HSteamUser__Boxed* box(app::HSteamUser value) {
            return il2cpp::box_value<app::HSteamUser__Boxed>(get_class(), value);
        }
    } // namespace HSteamUser
} // namespace app::classes::types
