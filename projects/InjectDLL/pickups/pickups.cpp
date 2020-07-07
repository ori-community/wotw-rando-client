#include <interception_macros.h>
#include <dll_main.h>
#include <pickups/pickups.h>

bool collecting_pickup = false;

INTERCEPT(12926528, void, SeinUI__ShakeSpiritLight, (app::SeinUI* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI__ShakeSpiritLight(thisPtr);
}

INTERCEPT(12926016, void, SeinUI__ShakeKeystones, (app::SeinUI* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI__ShakeKeystones(thisPtr);
}

INTERCEPT(12927184, void, SeinUI__ShakeSeeds, (app::SeinUI* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI__ShakeSeeds(thisPtr);
}

extern "C" __declspec(dllexport)
void shake_spiritlight()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI__ShakeSpiritLight(get_ui()->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_keystone()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI__ShakeKeystones(get_ui()->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_ore()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI__ShakeSeeds(get_ui()->static_fields->SeinUI);
}

INTERCEPT(5806192, void, performPickupSequence, (app::SeinPickupProcessor* thisPtr, app::SeinPickupProcessor_CollectableInfo* info)) {
    //SeinPickupProcessor$$PerformPickupSequence
    //noping this removes all pickup animations
}
