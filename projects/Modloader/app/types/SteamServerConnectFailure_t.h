#pragma once
#include <Modloader/app/structs/SteamServerConnectFailure_t.h>
#include <Modloader/app/structs/SteamServerConnectFailure_t__Boxed.h>
#include <Modloader/app/structs/SteamServerConnectFailure_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamServerConnectFailure_t {
        inline app::SteamServerConnectFailure_t__Class** type_info() {
            static app::SteamServerConnectFailure_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamServerConnectFailure_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamServerConnectFailure_t__Class* get_class() {
            return il2cpp::get_class<app::SteamServerConnectFailure_t__Class>(type_info(), "Steamworks", "SteamServerConnectFailure_t");
        }
        inline app::SteamServerConnectFailure_t* create() {
            return il2cpp::create_object<app::SteamServerConnectFailure_t>(get_class());
        }
        inline app::SteamServerConnectFailure_t__Boxed* box(app::SteamServerConnectFailure_t value) {
            return il2cpp::box_value<app::SteamServerConnectFailure_t__Boxed>(get_class(), value);
        }
    } // namespace SteamServerConnectFailure_t
} // namespace app::classes::types
