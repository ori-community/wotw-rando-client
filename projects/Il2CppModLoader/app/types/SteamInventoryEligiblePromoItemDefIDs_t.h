#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryEligiblePromoItemDefIDs_t {
        namespace {
            app::SteamInventoryEligiblePromoItemDefIDs_t__Class* type_info_ref = nullptr;
        }
        app::SteamInventoryEligiblePromoItemDefIDs_t__Class** type_info = &type_info_ref;
        inline app::SteamInventoryEligiblePromoItemDefIDs_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryEligiblePromoItemDefIDs_t__Class>(type_info, "Steamworks", "SteamInventoryEligiblePromoItemDefIDs_t");
        }
        inline app::SteamInventoryEligiblePromoItemDefIDs_t* create() {
            return il2cpp::create_object<app::SteamInventoryEligiblePromoItemDefIDs_t>(get_class());
        }
        inline app::SteamInventoryEligiblePromoItemDefIDs_t__Boxed* box(app::SteamInventoryEligiblePromoItemDefIDs_t value) {
            return il2cpp::box_value<app::SteamInventoryEligiblePromoItemDefIDs_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryEligiblePromoItemDefIDs_t
} // namespace app::classes::types
