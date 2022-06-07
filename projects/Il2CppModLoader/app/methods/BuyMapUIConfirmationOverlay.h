#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BuyMapUIConfirmationOverlay {
    IL2CPP_REGISTER_METHOD(0x008223B0, void, FixedUpdate, (app::BuyMapUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008225B0, void, Initialize, (app::BuyMapUIConfirmationOverlay * this_ptr, int32_t xp_cost))
    IL2CPP_REGISTER_METHOD(0x00822910, void, SetTitle, (app::BuyMapUIConfirmationOverlay * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x00822A70, void, SetDescription, (app::BuyMapUIConfirmationOverlay * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::BuyMapUIConfirmationOverlay * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HideImmediate, (app::BuyMapUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00822BD0, void, Show, (app::BuyMapUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowImmediate, (app::BuyMapUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00822DA0, void, ctor, (app::BuyMapUIConfirmationOverlay * this_ptr))
}
