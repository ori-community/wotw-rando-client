#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamServersDisconnected_t {
        namespace {
            inline app::SteamServersDisconnected_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamServersDisconnected_t__Class** type_info = &type_info_ref;
        inline app::SteamServersDisconnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamServersDisconnected_t__Class>(type_info, "Steamworks", "SteamServersDisconnected_t");
        }
        inline app::SteamServersDisconnected_t* create() {
            return il2cpp::create_object<app::SteamServersDisconnected_t>(get_class());
        }
        inline app::SteamServersDisconnected_t__Boxed* box(app::SteamServersDisconnected_t value) {
            return il2cpp::box_value<app::SteamServersDisconnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamServersDisconnected_t
} // namespace app::classes::types
