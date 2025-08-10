#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MenuScreenManager_Screens__Enum.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MenuTabEntry.h>
#include <Modloader/app/structs/MenuTabManager.h>

namespace app::classes::MenuTabManager {
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_WasPaused, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E7570, app::MenuTabEntry*, get_CurrentTab, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_CurrentTabIndex, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_CurrentTabIndex, app::MenuTabManager* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x009E7610, void, Awake, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E7720, void, UpdateBackgroundState, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E7930, void, FixedUpdate, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E7E90, void, EnableDarkBackground, app::MenuTabManager* this_ptr, bool immediate)
    IL2CPP_REGISTER_METHOD(0x009E80D0, void, DisableDarkBackground, app::MenuTabManager* this_ptr, bool immediate)
    IL2CPP_REGISTER_METHOD(0x009E82F0, void, EnableBlackBackground, app::MenuTabManager* this_ptr, bool immediate)
    IL2CPP_REGISTER_METHOD(0x009E84F0, void, DisableBlackBackground, app::MenuTabManager* this_ptr, bool immediate)
    IL2CPP_REGISTER_METHOD(0x009E86E0, void, EnableUi, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E8700, void, DisableUi, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E8730, void, EnableUiImmediate, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E87A0, void, DisableUiImmediate, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E8830, void, EnableHeaderAndTabs, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E8890, void, DisableHeaderAndTabs, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E88F0, void, UpdateTabManager, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E8B30, void, OnLastInventoryPressed, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E8EA0, bool, CantOpenInventory, app::MenuTabManager* this_ptr, bool show_error)
    IL2CPP_REGISTER_METHOD(0x009E8FF0, void, OpenShards, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E93C0, void, OpenInventory, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E9550, void, OpenMap, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E9970, void, BeforeScreenTabOpened, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E9D60, void, AfterScreenTabOpened, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E9D90, void, OpenCurrentTab, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009E9F40, void, HideSpiritLightNoTransition, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EA0E0, void, OpenNextTab, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EA110, void, OpenPreviousTab, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EA140, void, UpdatePageNameText, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EA620, int32_t, GetNextPageIndex, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EA6C0, int32_t, GetPreviousPageIndex, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EA760, int32_t, GetSafePrevIndex, app::MenuTabManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x009EA800, int32_t, GetSafeNextIndex, app::MenuTabManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x009EA8A0, bool, NeedToSkipMapScreen, app::MenuTabManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x009EA990, bool, get_CanShowWorldMap, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EAC20, void, UpdateCurrentVisibleScreen, app::MenuTabManager* this_ptr, app::MenuScreenManager_Screens__Enum screen)
    IL2CPP_REGISTER_METHOD(0x009EAD00, void, ChangeBackgroundState, app::MenuTabManager* this_ptr, app::MenuTabBackground__Enum new_state, bool immediate)
    IL2CPP_REGISTER_METHOD(0x009EADB0, void, OnBackgroundStateExit, app::MenuTabManager* this_ptr, app::MenuTabBackground__Enum state, bool immediate)
    IL2CPP_REGISTER_METHOD(0x009EADE0, void, OnBackgroundStateEnter, app::MenuTabManager* this_ptr, app::MenuTabBackground__Enum state, bool immediate)
    IL2CPP_REGISTER_METHOD(0x0050B250, void, MakeNextBackgroundFadeImediate, app::MenuTabManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EAE10, void, ctor, app::MenuTabManager* this_ptr)
} // namespace app::classes::MenuTabManager
