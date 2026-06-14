#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/DebugMenu.h>
#include <Modloader/app/structs/HierarchyDebugMenu.h>
#include <Modloader/app/structs/HierarchySuspensionTest.h>
#include <Modloader/app/structs/IDebugMenuItem.h>
#include <Modloader/app/structs/IDebugMenuPageHandler.h>
#include <Modloader/app/structs/List_1_DebugMenu_ExternalItem_.h>
#include <Modloader/app/structs/List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/List_1_WorldEvents_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WorldEvents.h>

namespace app::classes::DebugMenu {
    IL2CPP_REGISTER_METHOD(0x00DED6F0, app::HierarchyDebugMenu*, get_HierarchyDebugMenu, )
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_WorldEvents_*, get_WorldEvents, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DED8E0, app::Vector2, get_HelpTextPosition, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DED900, void, set_HelpTextPosition, app::DebugMenu* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::List_1_DebugMenu_ExternalItem_*, get_ExternalItems, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::List_1_IDebugMenuItem_*, get_AllItems, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DED930, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00720040, app::HierarchySuspensionTest*, get_SuspensionTest, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DEDB80, void, RegisterImGUIClient, )
    IL2CPP_REGISTER_METHOD(0x00DEDC70, void, UnregisterImGUIClient, )
    IL2CPP_REGISTER_METHOD(0x00DEDD60, void, LoadDebugMenuPrefabSlice, )
    IL2CPP_REGISTER_METHOD(0x00DEDEE0, void, MakeDebugMenuExistSlice, )
    IL2CPP_REGISTER_METHOD(0x00DEE120, void, MakeDebugMenuExist, )
    IL2CPP_REGISTER_METHOD(0x00DEE2D0, void, ToggleDebugMenu, )
    IL2CPP_REGISTER_METHOD(0x00DEE4C0, void, ShowHierarchyMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DEE590, void, ShowDebugMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DEE6A0, void, HideDebugMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DEE970, void, Start, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DEE980, bool, get_GameplaySuspended, )
    IL2CPP_REGISTER_METHOD(0x00DEEA20, void, set_GameplaySuspended, bool value)
    IL2CPP_REGISTER_METHOD(0x00DEEB40, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x00DEEC80, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(0x00DEEDC0, void, Awake, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DEF130, void, SetScaling, app::DebugMenu* this_ptr, float multiplier)
    IL2CPP_REGISTER_METHOD(0x00DEF600, void, Initialize, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF0350, void, RegisterPageHandler, app::IDebugMenuPageHandler* handler)
    IL2CPP_REGISTER_METHOD(0x00DF0410, void, ClearPage, app::DebugMenu* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00DF0510, void, AddDebugMenuItem, app::DebugMenu* this_ptr, app::IDebugMenuItem* item, int32_t column, bool searching)
    IL2CPP_REGISTER_METHOD(0x00DF0A00, void, GoBackMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF0B70, void, SetPage, app::DebugMenu* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00DF0E50, void, Update, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAC0, void, ExitSearch, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF12C0, void, ResetHold, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF12E0, void, FixedUpdate, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF18B0, void, RequestToggleDebugMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF18C0, void, OnGUI, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF2460, void, AddWorldEvent, app::DebugMenu* this_ptr, app::WorldEvents* world_event)
    IL2CPP_REGISTER_METHOD(0x00DF2520, void, Serialize, app::DebugMenu* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildSpellsMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildAbilitiesMenu, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GenerateGumoSequences, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF2780, bool, GetSpell, app::DebugMenu* this_ptr, app::AbilityType__Enum spell)
    IL2CPP_REGISTER_METHOD(0x00DF2840, void, SetSpell, app::DebugMenu* this_ptr, app::AbilityType__Enum spell, bool value)
    IL2CPP_REGISTER_METHOD(0x00DF29C0, void, ctor, app::DebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF3820, void, cctor, )
} // namespace app::classes::DebugMenu
