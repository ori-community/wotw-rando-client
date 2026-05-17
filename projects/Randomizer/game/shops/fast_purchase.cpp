#include <Randomizer/input/rando_bindings.h>

#include <Modloader/app/methods/PurchaseThingScreen.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace randomizer::game::shops {
    namespace {
        constexpr float NORMAL_PURCHASE_TIME = 0.4f;
        constexpr float FAST_PURCHASE_TIME = 0.01f;
        bool quick_buy = false;

        IL2CPP_INTERCEPT(void, PurchaseThingScreen, PurchaseInput, app::PurchaseThingScreen * this_ptr) {
            this_ptr->fields.PurchaseCooldown = 0.1f;
            this_ptr->fields.PurchaseTime = quick_buy ? FAST_PURCHASE_TIME : NORMAL_PURCHASE_TIME;
            next::PurchaseThingScreen::PurchaseInput(this_ptr);
        }

        [[maybe_unused]]
        auto on_quick_buy_pressed = input::single_input_bus().register_handler(Action::QuickBuy, input::InputValue::Pressed, [](auto, auto) {
            quick_buy = true;
        });

        [[maybe_unused]]
        auto on_quick_buy_released = input::single_input_bus().register_handler(Action::QuickBuy, input::InputValue::Released, [](auto, auto) {
            quick_buy = false;
        });
    } // namespace
} // namespace randomizer::game::shops
