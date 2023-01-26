#pragma once
#include <Modloader/app/structs/SteamInventoryRequestPricesResult_t.h>
#include <Modloader/app/structs/SteamInventoryRequestPricesResult_t__Boxed.h>
#include <Modloader/app/structs/SteamInventoryRequestPricesResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryRequestPricesResult_t {
        inline app::SteamInventoryRequestPricesResult_t__Class** type_info() {
            static app::SteamInventoryRequestPricesResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamInventoryRequestPricesResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamInventoryRequestPricesResult_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryRequestPricesResult_t__Class>(type_info(), "Steamworks", "SteamInventoryRequestPricesResult_t");
        }
        inline app::SteamInventoryRequestPricesResult_t* create() {
            return il2cpp::create_object<app::SteamInventoryRequestPricesResult_t>(get_class());
        }
        inline app::SteamInventoryRequestPricesResult_t__Boxed* box(app::SteamInventoryRequestPricesResult_t value) {
            return il2cpp::box_value<app::SteamInventoryRequestPricesResult_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryRequestPricesResult_t
} // namespace app::classes::types
