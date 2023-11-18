#pragma once
#include <Modloader/app/structs/SteamRemotePlaySessionConnected_t.h>
#include <Modloader/app/structs/SteamRemotePlaySessionConnected_t__Boxed.h>
#include <Modloader/app/structs/SteamRemotePlaySessionConnected_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamRemotePlaySessionConnected_t {
        inline app::SteamRemotePlaySessionConnected_t__Class** type_info() {
            static app::SteamRemotePlaySessionConnected_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamRemotePlaySessionConnected_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamRemotePlaySessionConnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamRemotePlaySessionConnected_t__Class>(type_info(), "Steamworks", "SteamRemotePlaySessionConnected_t");
        }
        inline app::SteamRemotePlaySessionConnected_t* create() {
            return il2cpp::create_object<app::SteamRemotePlaySessionConnected_t>(get_class());
        }
        inline app::SteamRemotePlaySessionConnected_t__Boxed* box(app::SteamRemotePlaySessionConnected_t value) {
            return il2cpp::box_value<app::SteamRemotePlaySessionConnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamRemotePlaySessionConnected_t
} // namespace app::classes::types
