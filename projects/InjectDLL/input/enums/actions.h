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
        TOTAL
    };
}
