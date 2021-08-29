#pragma once

enum class InputButton
{
    AnyStart,
    Down,
    Up,
    Left,
    Right,
    LeftClick,
    RightClick,
    KeyboardOnly,
    Unassigned,
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
    OpenInventory,
    OpenWorldMap,
    OpenAreaMap,
    OpenShards,
    OpenWeaponWheel,
    OpenPauseScreen,
    OpenLiveSignIn,
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
    LiveSignIn,
    InputButton_LAST
};

struct InputState
{
    InputButton button = InputButton::AnyStart;
    bool pressed = false;
    bool just_pressed = false;
};

using input_callback = void(*)(InputState const& state);

InputState const& get_input_state(InputButton button);
void register_input_callback(InputButton button, input_callback callback);
bool unregister_input_callback(InputButton button, input_callback callback);
