#include <dll_main.h>
#include <pickups/pickups.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

bool collecting_pickup = false;

namespace
{
    IL2CPP_INTERCEPT(, SeinUI, void, ShakeSpiritLight, (app::SeinUI* thisPtr)) {
        if (collecting_pickup)
            return;

        SeinUI::ShakeSpiritLight(thisPtr);
    }

    IL2CPP_INTERCEPT(, SeinUI, void, ShakeKeystones, (app::SeinUI* thisPtr)) {
        if (collecting_pickup)
            return;

        SeinUI::ShakeKeystones(thisPtr);
    }

    IL2CPP_INTERCEPT(, SeinUI, void, ShakeSeeds, (app::SeinUI* thisPtr)) {
        if (collecting_pickup)
            return;

        SeinUI::ShakeSeeds(thisPtr);
    }

    INJECT_C_DLLEXPORT void shake_spiritlight()
    {
        if (get_ui()->static_fields->SeinUI == nullptr)
            trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
        else
            SeinUI::ShakeSpiritLight(get_ui()->static_fields->SeinUI);
    }

    INJECT_C_DLLEXPORT void shake_keystone()
    {
        if (get_ui()->static_fields->SeinUI == nullptr)
            trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
        else
            SeinUI::ShakeKeystones(get_ui()->static_fields->SeinUI);
    }

    INJECT_C_DLLEXPORT void shake_ore()
    {
        if (get_ui()->static_fields->SeinUI == nullptr)
            trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
        else
            SeinUI::ShakeSeeds(get_ui()->static_fields->SeinUI);
    }

    IL2CPP_INTERCEPT(, SeinPickupProcessor, void, PerformPickupSequence, (app::SeinPickupProcessor* this_ptr, app::SeinPickupProcessor_CollectableInfo* info)) {}

    IL2CPP_INTERCEPT(, PickupBase, void, Collected, (app::SeinPickupProcessor* this_ptr)) {
        if (uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, PREVENT_PICKUP_ID) > 0.5)
            return;

        PickupBase::Collected(this_ptr);
    }
}
