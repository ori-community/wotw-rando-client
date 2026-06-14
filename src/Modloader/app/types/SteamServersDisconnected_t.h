#pragma once
#include <Modloader/app/structs/SteamServersDisconnected_t.h>
#include <Modloader/app/structs/SteamServersDisconnected_t__Boxed.h>
#include <Modloader/app/structs/SteamServersDisconnected_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamServersDisconnected_t {
        inline app::SteamServersDisconnected_t__Class** type_info() {
            static app::SteamServersDisconnected_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamServersDisconnected_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamServersDisconnected_t__Class* get_class() {
            return il2cpp::get_class<app::SteamServersDisconnected_t__Class>(type_info(), "Steamworks", "SteamServersDisconnected_t");
        }
        inline app::SteamServersDisconnected_t* create() {
            return il2cpp::create_object<app::SteamServersDisconnected_t>(get_class());
        }
        inline app::SteamServersDisconnected_t__Boxed* box(app::SteamServersDisconnected_t value) {
            return il2cpp::box_value<app::SteamServersDisconnected_t__Boxed>(get_class(), value);
        }
    } // namespace SteamServersDisconnected_t
} // namespace app::classes::types
