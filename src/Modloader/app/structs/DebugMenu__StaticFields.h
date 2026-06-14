#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenu__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenu__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DebugMenu__StaticFields_DEFINED
struct DebugMenu;
struct GUIStyle;
struct HashSet_1_Moon_ISuspendable_;
struct List_1_IDebugMenuPageHandler_;
struct GameObject;
struct AbilityType__Enum__Array;
struct DebugMenu__StaticFields {
    struct DebugMenu* Instance;
    struct GUIStyle* SelectedStyle;
    struct GUIStyle* Style;
    struct GUIStyle* PressedStyle;
    struct GUIStyle* DebugMenuStyle;
    struct GUIStyle* StyleEnabled;
    struct GUIStyle* StyleDisabled;
    struct GUIStyle* SelectedTabStyle;
    struct GUIStyle* UnselectedTabStyle;
    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
    bool Active;
    bool ShouldShowOnlySelectedItem;
    bool ShouldLockItemBrowsing;
    struct List_1_IDebugMenuPageHandler_* m_pageHandlers;
    struct GameObject* m_debugMenuPrefab;
    bool ShouldKeepImGUIEnabled;
    bool m_registeredImGUIClient;
    uint64_t GcUsage;
    bool s_GameplaySuspended;
    struct AbilityType__Enum__Array* Spells;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugMenu__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenu__StaticFields_FWDDECL
#include <Modloader/app/structs/AbilityType__Enum__Array.h>
#include <Modloader/app/structs/DebugMenu.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_IDebugMenuPageHandler_.h>
#endif
#undef IL2CPP_STRUCT_DebugMenu__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenu__StaticFields_FWDDECL)
#include <Modloader/app/structs/DebugMenu__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenu__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
