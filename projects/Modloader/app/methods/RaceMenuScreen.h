#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceMenuScreen.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/RaceMenuScreenUISlot.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/RaceSettings__Array.h>
#include <Modloader/app/structs/ReplaySetting.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberStateValueStore.h>

namespace app::classes::RaceMenuScreen {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::MenuTabBackground__Enum, get_BackgroundMode, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_IsFadingOut, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA3DE0, void, set_IsFadingOut, (app::RaceMenuScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EA7090, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, get_IsVisible, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_WasEnabledInTitlescreen, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA7130, app::CleverMenuItemSelectionManager*, get_Navigation, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA7200, app::RaceMenuScreenUISlot*, get_SelectedItem, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA72F0, void, Awake, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA7570, void, OnEnable, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA75F0, void, OnDestroy, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA7A00, void, Hide, (app::RaceMenuScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x00EA7AE0, void, SetNextFilter, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA7C40, void, SetPreviousFilter, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA7DA0, void, UpdateFilter, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8430, void, HideImmediate, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8460, void, Show, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8590, void, ShowImmediate, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA86C0, void, OnBackPressed, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8910, void, OnScreenShowed, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8950, void, PopulateItems_1, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8DF0, void, PopulateItems_2, (app::RaceMenuScreen * this_ptr, app::RaceSettings__Array* racesettings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA8FA0, void, DestroyScreen, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B84400, bool, get_IsSuspended, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B84410, void, set_IsSuspended, (app::RaceMenuScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EA9170, app::SuspendableMask__Enum, get_Mask, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA9180, void, set_Mask, (app::RaceMenuScreen * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00EA9240, void, OnInstantiate, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA9810, void, OnNavigate, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA99E0, void, FixedUpdate, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA9AE0, void, HandleFilterInput, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAA050, void, UpdateLabel, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAA240, bool, IsRaceUnlocked_1, (app::RaceMenuScreen * this_ptr, app::RaceSettings* race))
    IL2CPP_REGISTER_METHOD(0x00EAA290, bool, IsRaceUnlocked_2, (app::RaceMenuScreen * this_ptr, app::RaceSettings* race, app::UberStateValueStore* uber_state_value_store))
    IL2CPP_REGISTER_METHOD(0x00EAA4D0, bool, IsSelectedRaceUnlocked, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAA5D0, void, LockInteraction, (app::RaceMenuScreen * this_ptr, bool lock_interaction))
    IL2CPP_REGISTER_METHOD(0x00EAA700, void, UpdateNotificationSystem, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAA790, bool, IsThereAnyNotification, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAA850, void, NotificationSeen, (app::RaceMenuScreen * this_ptr, app::String* leaderboard_i_d))
    IL2CPP_REGISTER_METHOD(0x00EAA920, void, InitNotificationSystem, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAA9C0, void, InitiateNotificationSystemForSlot, (app::RaceMenuScreen * this_ptr, int32_t slot_index, app::UberStateValueStore* uber_state_value_store))
    IL2CPP_REGISTER_METHOD(0x00EAAC30, bool, ShouldShowNotification, (app::RaceMenuScreen * this_ptr, app::String* leaderboards_i_d, app::Action_1_Boolean_* show_notification_action))
    IL2CPP_REGISTER_METHOD(0x00EAAD10, void, CacheRaceData, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FadeOut, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAB550, void, FadeOutScreen, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAB810, void, RefreshGridFadeAnimator, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAB960, void, SetDifficultyLabel, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EABB40, app::DifficultyMode__Enum, GetSelectedSlotDifficulty, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EABC80, app::DifficultyMode__Enum, GetSlotDifficulty, (app::RaceMenuScreen * this_ptr, app::UberStateValueStore* store))
    IL2CPP_REGISTER_METHOD(0x00EABD70, app::String*, GetSlotDifficultyString, (app::RaceMenuScreen * this_ptr, app::UberStateValueStore* store))
    IL2CPP_REGISTER_METHOD(0x00EABF10, app::String*, GetRaceLeaderboardID, (app::RaceMenuScreen * this_ptr, app::RaceSettings* settings, app::UberStateValueStore* store))
    IL2CPP_REGISTER_METHOD(0x00EAC160, bool, IsReplayUnlocked, (app::ReplaySetting * replay_setting))
    IL2CPP_REGISTER_METHOD(0x00EAC660, void, SaveLastSelectedRaceIndex, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAC740, void, SaveLastSelectedMemoryIndex, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAC820, void, RestoreSelection, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EAC9B0, void, ctor, (app::RaceMenuScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00EAC9D0, void, _OnInstantiate_b__85_0, (app::RaceMenuScreen * this_ptr, app::GameObject* x))
} // namespace app::classes::RaceMenuScreen
