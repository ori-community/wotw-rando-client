#pragma once
#include <Modloader/app/structs/SteamRemotePlaySessionDisconnected_t.h>
#include <Modloader/app/structs/SteamRemotePlaySessionDisconnected_t__Boxed.h>
#include <Modloader/app/structs/SteamRemotePlaySessionDisconnected_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamRemotePlaySessionDisconnected_t {
        inline app::SteamRemotePlaySessionDisconnected_t__Class** type_info() {
            static app::SteamRemotePlaySessionDisconnected_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamRemotePlaySessionDisconnected_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamRemotePlaySessionDisconnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamRemotePlaySessionDisconnected_t__Class>(type_info(), "Steamworks", "SteamRemotePlaySessionDisconnected_t");
        }
        inline app::SteamRemotePlaySessionDisconnected_t* create() {
            return il2cpp::create_object<app::SteamRemotePlaySessionDisconnected_t>(get_class());
        }
        inline app::SteamRemotePlaySessionDisconnected_t__Boxed* box(app::SteamRemotePlaySessionDisconnected_t value) {
            return il2cpp::box_value<app::SteamRemotePlaySessionDisconnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamRemotePlaySessionDisconnected_t
} // namespace app::classes::types
