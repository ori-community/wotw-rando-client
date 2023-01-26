#pragma once
#include <Modloader/app/structs/ShowPurchaseFullGameMarketplaceAction.h>
#include <Modloader/app/structs/ShowPurchaseFullGameMarketplaceAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowPurchaseFullGameMarketplaceAction {
        inline app::ShowPurchaseFullGameMarketplaceAction__Class** type_info() {
            static app::ShowPurchaseFullGameMarketplaceAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowPurchaseFullGameMarketplaceAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowPurchaseFullGameMarketplaceAction__Class* get_class() {
            return il2cpp::get_class<app::ShowPurchaseFullGameMarketplaceAction__Class>(type_info(), "", "ShowPurchaseFullGameMarketplaceAction");
        }
        inline app::ShowPurchaseFullGameMarketplaceAction* create() {
            return il2cpp::create_object<app::ShowPurchaseFullGameMarketplaceAction>(get_class());
        }
    } // namespace ShowPurchaseFullGameMarketplaceAction
} // namespace app::classes::types
