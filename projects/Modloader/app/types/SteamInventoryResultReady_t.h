#pragma once
#include <Modloader/app/structs/SteamInventoryResultReady_t.h>
#include <Modloader/app/structs/SteamInventoryResultReady_t__Boxed.h>
#include <Modloader/app/structs/SteamInventoryResultReady_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryResultReady_t {
        inline app::SteamInventoryResultReady_t__Class** type_info() {
            static app::SteamInventoryResultReady_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamInventoryResultReady_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamInventoryResultReady_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryResultReady_t__Class>(type_info(), "Steamworks", "SteamInventoryResultReady_t");
        }
        inline app::SteamInventoryResultReady_t* create() {
            return il2cpp::create_object<app::SteamInventoryResultReady_t>(get_class());
        }
        inline app::SteamInventoryResultReady_t__Boxed* box(app::SteamInventoryResultReady_t value) {
            return il2cpp::box_value<app::SteamInventoryResultReady_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryResultReady_t
} // namespace app::classes::types
