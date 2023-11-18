#pragma once
#include <Modloader/app/structs/SteamServersConnected_t.h>
#include <Modloader/app/structs/SteamServersConnected_t__Boxed.h>
#include <Modloader/app/structs/SteamServersConnected_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamServersConnected_t {
        inline app::SteamServersConnected_t__Class** type_info() {
            static app::SteamServersConnected_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamServersConnected_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamServersConnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamServersConnected_t__Class>(type_info(), "Steamworks", "SteamServersConnected_t");
        }
        inline app::SteamServersConnected_t* create() {
            return il2cpp::create_object<app::SteamServersConnected_t>(get_class());
        }
        inline app::SteamServersConnected_t__Boxed* box(app::SteamServersConnected_t value) {
            return il2cpp::box_value<app::SteamServersConnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamServersConnected_t
} // namespace app::classes::types
