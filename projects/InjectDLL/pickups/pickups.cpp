#include <constants.h>
#include <game/game.h>
#include <game/ui.h>
#include <pickups/pickups.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

bool collecting_pickup = false;

namespace
{
    IL2CPP_INTERCEPT(, SeinUI, void, ShakeSpiritLight, (app::SeinUI* this_ptr)) {
        if (collecting_pickup)
            return;

        SeinUI::ShakeSpiritLight(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinUI, void, ShakeKeystones, (app::SeinUI* this_ptr)) {
        if (collecting_pickup)
            return;

        SeinUI::ShakeKeystones(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinUI, void, ShakeSeeds, (app::SeinUI* this_ptr)) {
        if (collecting_pickup)
            return;

        SeinUI::ShakeSeeds(this_ptr);
    }

    INJECT_C_DLLEXPORT void shake_spiritlight()
    {
        if (game::ui::get()->static_fields->SeinUI == nullptr)
            trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
        else
            SeinUI::ShakeSpiritLight(game::ui::get()->static_fields->SeinUI);
    }

    INJECT_C_DLLEXPORT void shake_keystone()
    {
        if (game::ui::get()->static_fields->SeinUI == nullptr)
            trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
        else
            SeinUI::ShakeKeystones(game::ui::get()->static_fields->SeinUI);
    }

    INJECT_C_DLLEXPORT void shake_ore()
    {
        if (game::ui::get()->static_fields->SeinUI == nullptr)
            trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
        else
            SeinUI::ShakeSeeds(game::ui::get()->static_fields->SeinUI);
    }

    IL2CPP_INTERCEPT(, SeinPickupProcessor, void, PerformPickupSequence, (app::SeinPickupProcessor* this_ptr, app::SeinPickupProcessor_CollectableInfo* info)) {}

    IL2CPP_INTERCEPT(, PickupBase, void, Collected, (app::SeinPickupProcessor* this_ptr)) {
        if (uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, PREVENT_PICKUP_ID) > 0.5)
            return;

        PickupBase::Collected(this_ptr);
    }
}
