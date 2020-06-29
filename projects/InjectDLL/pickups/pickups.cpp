#include <interception_macros.h>
#include <dll_main.h>
#include <pickups/pickups.h>

bool collecting_pickup = false;

INTERCEPT(12926528, void, SeinUI__ShakeSpiritLight, (SeinUI_o* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI__ShakeSpiritLight(thisPtr);
}

INTERCEPT(12926016, void, SeinUI__ShakeKeystones, (SeinUI_o* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI__ShakeKeystones(thisPtr);
}

INTERCEPT(12927184, void, SeinUI__ShakeSeeds, (SeinUI_o* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI__ShakeSeeds(thisPtr);
}

extern "C" __declspec(dllexport)
void shake_spiritlight()
{
    SeinUI__ShakeSpiritLight((*g_ui)->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_keystone()
{
    SeinUI__ShakeKeystones((*g_ui)->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_ore()
{
    SeinUI__ShakeSeeds((*g_ui)->static_fields->SeinUI);
}

INTERCEPT(5806192, void, performPickupSequence, (SeinPickupProcessor_o* thisPtr, SeinPickupProcessor_CollectableInfo_o* info)) {
    //SeinPickupProcessor$$PerformPickupSequence
    //noping this removes all pickup animations
}
