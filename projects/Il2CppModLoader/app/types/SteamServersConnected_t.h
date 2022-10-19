#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamServersConnected_t {
        namespace {
            inline app::SteamServersConnected_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamServersConnected_t__Class** type_info = &type_info_ref;
        inline app::SteamServersConnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamServersConnected_t__Class>(type_info, "Steamworks", "SteamServersConnected_t");
        }
        inline app::SteamServersConnected_t* create() {
            return il2cpp::create_object<app::SteamServersConnected_t>(get_class());
        }
        inline app::SteamServersConnected_t__Boxed* box(app::SteamServersConnected_t value) {
            return il2cpp::box_value<app::SteamServersConnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamServersConnected_t
} // namespace app::classes::types
