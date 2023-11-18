#pragma once
#include <Modloader/app/structs/SteamInventoryEligiblePromoItemDefIDs_t.h>
#include <Modloader/app/structs/SteamInventoryEligiblePromoItemDefIDs_t__Boxed.h>
#include <Modloader/app/structs/SteamInventoryEligiblePromoItemDefIDs_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryEligiblePromoItemDefIDs_t {
        inline app::SteamInventoryEligiblePromoItemDefIDs_t__Class** type_info() {
            static app::SteamInventoryEligiblePromoItemDefIDs_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamInventoryEligiblePromoItemDefIDs_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamInventoryEligiblePromoItemDefIDs_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryEligiblePromoItemDefIDs_t__Class>(type_info(), "Steamworks", "SteamInventoryEligiblePromoItemDefIDs_t");
        }
        inline app::SteamInventoryEligiblePromoItemDefIDs_t* create() {
            return il2cpp::create_object<app::SteamInventoryEligiblePromoItemDefIDs_t>(get_class());
        }
        inline app::SteamInventoryEligiblePromoItemDefIDs_t__Boxed* box(app::SteamInventoryEligiblePromoItemDefIDs_t value) {
            return il2cpp::box_value<app::SteamInventoryEligiblePromoItemDefIDs_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryEligiblePromoItemDefIDs_t
} // namespace app::classes::types
