#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamRemotePlaySessionConnected_t {
        namespace {
            inline app::SteamRemotePlaySessionConnected_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamRemotePlaySessionConnected_t__Class** type_info = &type_info_ref;
        inline app::SteamRemotePlaySessionConnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamRemotePlaySessionConnected_t__Class>(type_info, "Steamworks", "SteamRemotePlaySessionConnected_t");
        }
        inline app::SteamRemotePlaySessionConnected_t* create() {
            return il2cpp::create_object<app::SteamRemotePlaySessionConnected_t>(get_class());
        }
        inline app::SteamRemotePlaySessionConnected_t__Boxed* box(app::SteamRemotePlaySessionConnected_t value) {
            return il2cpp::box_value<app::SteamRemotePlaySessionConnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamRemotePlaySessionConnected_t
} // namespace app::classes::types
