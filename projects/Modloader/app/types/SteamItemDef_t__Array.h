#pragma once
#include <Modloader/app/structs/SteamItemDef_t__Array.h>
#include <Modloader/app/structs/SteamItemDef_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamItemDef_t__Array {
        inline app::SteamItemDef_t__Array__Class** type_info() {
            static app::SteamItemDef_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamItemDef_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamItemDef_t__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamItemDef_t__Array__Class>(type_info(), "Steamworks", "SteamItemDef_t[]");
        }
        inline app::SteamItemDef_t__Array* create() {
            return il2cpp::create_object<app::SteamItemDef_t__Array>(get_class());
        }
    } // namespace SteamItemDef_t__Array
} // namespace app::classes::types
