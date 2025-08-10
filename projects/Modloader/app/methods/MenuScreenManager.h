#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IMenuTab.h>
#include <Modloader/app/structs/ISKipUiBackgroundBlur.h>
#include <Modloader/app/structs/MenuScreen.h>
#include <Modloader/app/structs/MenuScreenManager.h>
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum.h>
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum__Array.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/Objective.h>
#include <Modloader/app/structs/State.h>

namespace app::classes::MenuScreenManager {
    IL2CPP_REGISTER_METHOD(0x009DA500, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x003FC040, bool, get_AllowEquipmentWheelWhileMovementIsDisabled, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA5F0, void, set_AllowEquipmentWheelWhileMovementIsDisabled, app::MenuScreenManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009DA600, bool, get_IsSuspended, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA610, void, set_IsSuspended, app::MenuScreenManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsPaused, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AD920, void, set_IsPaused, app::MenuScreenManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009DA620, bool, get_ShardShopVisible, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA760, bool, get_IsInventoryVisible, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA780, bool, get_ResumeScreenVisible, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA830, float, get_CurrentMenuOpenTime, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA890, float, get_CurrentScreenOpenTime, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA8F0, bool, get_MainMenuOpenKeyPressed, )
    IL2CPP_REGISTER_METHOD(0x009DA9C0, bool, get_OpenLastMenuKeyPressed, )
    IL2CPP_REGISTER_METHOD(0x009DAA90, bool, get_OpenMapScreenPressed, )
    IL2CPP_REGISTER_METHOD(0x009DAB60, bool, get_OpenInventoryPressed, )
    IL2CPP_REGISTER_METHOD(0x009DAC30, bool, get_OpenShardsPressed, )
    IL2CPP_REGISTER_METHOD(0x009DAD00, bool, get_EquipmentWheelKeyDown, )
    IL2CPP_REGISTER_METHOD(0x009DADC0, bool, get_EquipmentWheelKeyReleasead, )
    IL2CPP_REGISTER_METHOD(0x009DAE80, bool, get_ShouldStopRenderingSlices, )
    IL2CPP_REGISTER_METHOD(0x009DB2E0, bool, get_IsExperienceUIDesired, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DB3F0, bool, get_IsSeedUIDesired, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DB500, bool, get_IsContainerUIDesired, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DB610, app::MenuScreen*, get_InventoryManager, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DB690, bool, get_ShouldDoUiBackgroundBlur, )
    IL2CPP_REGISTER_METHOD(0x009DBB30, void, OnDestroy, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DBCD0, void, Awake, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DC040, void, FixedUpdate, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DC920, void, RegisterSkipUiBackgroundBlur, app::ISKipUiBackgroundBlur* entry)
    IL2CPP_REGISTER_METHOD(0x009DC9E0, void, UnregisterSkipUiBackgroundBlur, app::ISKipUiBackgroundBlur* entry)
    IL2CPP_REGISTER_METHOD(0x009DCAA0, app::MenuScreen*, GetScreenInstance, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009DCBB0, void, OnMenuScreenAwake, app::MenuScreenManager* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x009DCD50, void, OnGameReset, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DCD60, bool, CanOpenMenus, app::MenuScreenManager* this_ptr, bool allow_during_cutscene)
    IL2CPP_REGISTER_METHOD(0x009DD030, bool, IsVisible, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009DD070, bool, IsScreenStandalone, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009DD080, void, OnLastInventoryButtonPressed, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DD400, void, OnOpenMap, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DD780, void, OnOpenInventory, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DDB00, void, OnOpenShards, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DDE80, void, OnStartKeyPressed, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DE260, void, LoadMenus, app::MenuScreenManager* this_ptr, app::Action* on_menus_loaded)
    IL2CPP_REGISTER_METHOD(0x009DE4F0, app::IEnumerator*, CallNextFrame, app::MenuScreenManager* this_ptr, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x009DE640, void, ShowInventoryOrPauseMenu, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DE780, void, CleanUpUI, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DE920, void, ChangeScreen, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(
        0x009DEAE0,
        void,
        HideAllScreensBut,
        app::MenuScreenManager* this_ptr,
        bool immediate,
        bool change,
        app::MenuScreenManager_Screens__Enum__Array* screens_to_skip
    )
    IL2CPP_REGISTER_METHOD(
        0x009DEDC0,
        void,
        PrepareToShowUI,
        app::MenuScreenManager* this_ptr,
        bool pause_game,
        app::HashSet_1_Moon_ISuspendable_* override_suspendables,
        bool suspend_sein_ui
    )
    IL2CPP_REGISTER_METHOD(
        0x009DF2B0,
        void,
        ShowMenuScreen,
        app::MenuScreenManager* this_ptr,
        app::MenuScreenManager_Screens__Enum screen,
        bool immediate,
        bool play_sound,
        bool pause
    )
    IL2CPP_REGISTER_METHOD(0x009DF680, app::IEnumerator*, PostFadeMenuOpen, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009DF7E0, void, ShowRaceMenuScreen, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DFD10, void, OnBeforeShowScreen, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009E0530, void, OnAfterShowScreen, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(
        0x009E07E0,
        void,
        ShowMenuScreenInternal,
        app::MenuScreenManager* this_ptr,
        app::MenuScreenManager_Screens__Enum screen,
        bool play_open_sound,
        bool pause,
        bool skip_suspension
    )
    IL2CPP_REGISTER_METHOD(0x009E09D0, void, HideMenuScreen, app::MenuScreenManager* this_ptr, bool immediate, bool fade)
    IL2CPP_REGISTER_METHOD(0x009E1300, void, PlayOpenSound, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009E1420, void, SetMenuSoundState, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009E16E0, void, CheckAndSetSoundState, app::MenuScreenManager* this_ptr, app::State* state)
    IL2CPP_REGISTER_METHOD(0x009E1720, void, PlayClosedSound, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009E1830, void, ShowResumeScreen, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E1BC0, void, HideResumeScreen, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E1D90, void, ShowAreaMap, app::MenuScreenManager* this_ptr, app::Action* action_to_execute_after_load, bool pause)
    IL2CPP_REGISTER_METHOD(0x009E2000, void, ShowObjective, app::MenuScreenManager* this_ptr, app::Objective* objective, app::Action* method_1)
    IL2CPP_REGISTER_METHOD(0x009E20E0, void, OnEquipmentWheelKeyPress, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E22F0, void, OnEquipmentWheelKeyRelease, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E2310, void, ShowEquipmentWheel, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E2730, void, HideEquipmentWhell, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E2A30, void, ShowNoMapWarningMessage, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E2B10, app::GameObject*, Instantiate, app::MenuScreenManager* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(0x009E2DC0, void, SetupExternalUI, app::MenuScreenManager* this_ptr, app::GameObject* ui_object)
    IL2CPP_REGISTER_METHOD(0x009E31D0, void, RemoveExternalUI, app::MenuScreenManager* this_ptr, app::GameObject* ui_object)
    IL2CPP_REGISTER_METHOD(0x009E3270, void, RemoveGameplayObjects, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E3460, app::IMenuTab*, GetScreenTab, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009E35B0, bool, CanInterruptScreen, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(
        0x009E3660,
        app::MenuTabBackground__Enum,
        BackgroundMode,
        app::MenuScreenManager* this_ptr,
        app::MenuScreenManager_Screens__Enum screen
    )
    IL2CPP_REGISTER_METHOD(0x009E3710, void, ctor, app::MenuScreenManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E54F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x009E5660, void, _OnStartKeyPressed_b__91_0, app::MenuScreenManager* this_ptr)
} // namespace app::classes::MenuScreenManager
