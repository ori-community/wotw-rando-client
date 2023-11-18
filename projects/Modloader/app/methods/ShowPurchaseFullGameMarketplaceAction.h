#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowPurchaseFullGameMarketplaceAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowPurchaseFullGameMarketplaceAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::ShowPurchaseFullGameMarketplaceAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowPurchaseFullGameMarketplaceAction * this_ptr))
} // namespace app::classes::ShowPurchaseFullGameMarketplaceAction
