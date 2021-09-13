#pragma once

namespace input
{
    enum class Action
    {
        MainMenuSaveCopy,
        MainMenuSaveDelete,
        Interact,
        Jump,
        Ability1,
        Ability2,
        Ability3,
        Glide,
        Grab,
        Dash,
        Burrow,
        Bash,
        Grapple,
        DialogueAdvance,
        DialogueOption1,
        DialogueOption2,
        DialogueOption3,
        DialogueExit,
        OpenMapsShardsInventory,
        OpenWeaponWheel,
        PauseScreen,
        LiveSignIn,
        MapZoomIn,
        MapZoomOut,
        MenuSelect,
        MenuBack,
        MenuClose,
        MenuDown,
        MenuUp,
        MenuLeft,
        MenuRight,
        MenuPageLeft,
        MenuPageRight,
        LeaderboardCycleFilter,
        MapFilter,
        MapDetails,
        MapFocusOri,
        MapFocusObjective,

        OpenRandoWheel,

        // Legacy actions.
        Binding1,
        Binding2,
        Binding3,
        Binding4,
        Binding5,
        Reload,
        ShowLastPickup,
        ShowProgressWithHints,
        WarpToCredits,

        ToggleCursorLock,
        ToggleAlwaysShowKeystones,

        ShowDevFlag,
        ToggleDebug,
        PrintCoordinates,
        TeleportCheat,
        UnlockSpoilers,
        TogglePickupNamesOnSpoiler,
        ForceExit,

        TOTAL
    };
}
