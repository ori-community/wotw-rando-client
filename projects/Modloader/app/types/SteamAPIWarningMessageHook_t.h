#pragma once
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamAPIWarningMessageHook_t {
        inline app::SteamAPIWarningMessageHook_t__Class** type_info() {
            static app::SteamAPIWarningMessageHook_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamAPIWarningMessageHook_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamAPIWarningMessageHook_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAPIWarningMessageHook_t__Class>(type_info(), "Steamworks", "SteamAPIWarningMessageHook_t");
        }
        inline app::SteamAPIWarningMessageHook_t* create() {
            return il2cpp::create_object<app::SteamAPIWarningMessageHook_t>(get_class());
        }
    } // namespace SteamAPIWarningMessageHook_t
} // namespace app::classes::types
