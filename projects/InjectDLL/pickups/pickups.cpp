#include <interception_macros.h>
#include <dll_main.h>
#include <pickups/pickups.h>

bool collecting_pickup = false;

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

extern "C" __declspec(dllexport)
void shake_spiritlight()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI::ShakeSpiritLight(get_ui()->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_keystone()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI::ShakeKeystones(get_ui()->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_ore()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI::ShakeSeeds(get_ui()->static_fields->SeinUI);
}

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, PerformPickupSequence, (app::SeinPickupProcessor* thisPtr, app::SeinPickupProcessor_CollectableInfo* info)) {

}
