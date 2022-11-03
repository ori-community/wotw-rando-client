#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XboxMarketplace {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowPurchaseFullGameOffer, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxMarketplace * this_ptr))
} // namespace app::classes::XboxMarketplace
