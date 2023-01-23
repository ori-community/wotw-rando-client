#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowPurchaseFullGameMarketplaceAction__Class.h>
#include <Modloader/app/structs/ShowPurchaseFullGameMarketplaceAction.h>

namespace app::classes::types {
    namespace ShowPurchaseFullGameMarketplaceAction {
        namespace {
            inline app::ShowPurchaseFullGameMarketplaceAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowPurchaseFullGameMarketplaceAction__Class** type_info = &type_info_ref;
        inline app::ShowPurchaseFullGameMarketplaceAction__Class* get_class() {
            return il2cpp::get_class<app::ShowPurchaseFullGameMarketplaceAction__Class>(type_info, "", "ShowPurchaseFullGameMarketplaceAction");
        }
        inline app::ShowPurchaseFullGameMarketplaceAction* create() {
            return il2cpp::create_object<app::ShowPurchaseFullGameMarketplaceAction>(get_class());
        }
    } // namespace ShowPurchaseFullGameMarketplaceAction
} // namespace app::classes::types
