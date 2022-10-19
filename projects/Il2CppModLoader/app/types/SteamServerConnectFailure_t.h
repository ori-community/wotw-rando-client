#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamServerConnectFailure_t {
        namespace {
            inline app::SteamServerConnectFailure_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamServerConnectFailure_t__Class** type_info = &type_info_ref;
        inline app::SteamServerConnectFailure_t__Class* get_class() {
            return il2cpp::get_class<app::SteamServerConnectFailure_t__Class>(type_info, "Steamworks", "SteamServerConnectFailure_t");
        }
        inline app::SteamServerConnectFailure_t* create() {
            return il2cpp::create_object<app::SteamServerConnectFailure_t>(get_class());
        }
        inline app::SteamServerConnectFailure_t__Boxed* box(app::SteamServerConnectFailure_t value) {
            return il2cpp::box_value<app::SteamServerConnectFailure_t__Boxed>(get_class(), value);
        }
    } // namespace SteamServerConnectFailure_t
} // namespace app::classes::types
