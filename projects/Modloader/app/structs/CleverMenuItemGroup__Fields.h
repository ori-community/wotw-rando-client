#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItemGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItemGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuItemGroupBase__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuItemGroupBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItemGroup__Fields_DEFINED
struct CleverMenuItemGroup;
struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_;
struct CleverMenuItemSelectionManager;
struct Event_1;
struct Condition_1;
struct LegacyTransparencyAnimator;
struct HashSet_1_Moon_ISuspendable_;
struct CleverMenuItemGroup__Fields {
    struct CleverMenuItemGroupBase__Fields _;
    struct CleverMenuItemGroup* Root;
    struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_* Options;
    struct CleverMenuItemSelectionManager* SelectionManager;
    struct Event_1* OnExpandSound;
    struct Event_1* OnCollapseSound;
    struct Event_1* OnChangeSelectionSound;
    bool ExpandOnHighlight;
    struct Condition_1* CanBeEnteredCondition;
    struct LegacyTransparencyAnimator* HighlightAnimator;
    bool SuspendOnActivated;
    bool SelectOnEnable;
    bool m_playChangeSound;
    bool m_isFrozen;
    struct HashSet_1_Moon_ISuspendable_* m_suspendablesIgnore;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItemGroup__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItemGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItemGroup__Fields_FWDDECL)
#include <Modloader/app/structs/CleverMenuItemGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItemGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
