#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamRemotePlaySessionDisconnected_t {
        namespace {
            app::SteamRemotePlaySessionDisconnected_t__Class* type_info_ref = nullptr;
        }
        app::SteamRemotePlaySessionDisconnected_t__Class** type_info = &type_info_ref;
        inline app::SteamRemotePlaySessionDisconnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamRemotePlaySessionDisconnected_t__Class>(type_info, "Steamworks", "SteamRemotePlaySessionDisconnected_t");
        }
        inline app::SteamRemotePlaySessionDisconnected_t* create() {
            return il2cpp::create_object<app::SteamRemotePlaySessionDisconnected_t>(get_class());
        }
        inline app::SteamRemotePlaySessionDisconnected_t__Boxed* box(app::SteamRemotePlaySessionDisconnected_t value) {
            return il2cpp::box_value<app::SteamRemotePlaySessionDisconnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamRemotePlaySessionDisconnected_t
} // namespace app::classes::types
