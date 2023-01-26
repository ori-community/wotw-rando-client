#pragma once
#include <Modloader/app/structs/SteamItemInstanceID_t__Array.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamItemInstanceID_t__Array {
        inline app::SteamItemInstanceID_t__Array__Class** type_info() {
            static app::SteamItemInstanceID_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamItemInstanceID_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamItemInstanceID_t__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamItemInstanceID_t__Array__Class>(type_info(), "Steamworks", "SteamItemInstanceID_t[]");
        }
        inline app::SteamItemInstanceID_t__Array* create() {
            return il2cpp::create_object<app::SteamItemInstanceID_t__Array>(get_class());
        }
    } // namespace SteamItemInstanceID_t__Array
} // namespace app::classes::types
