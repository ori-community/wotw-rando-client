#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuItemSelectionManager_Direction__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CleverMenuItemSelectionManager_Direction__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_DEFINED
struct List_1_CleverMenuItemSelectionManager_NavigationData_;
struct CageStructureTool;
struct List_1_CleverMenuItem_;
struct ActionMethod;
struct Action;
struct LegacyTransparencyAnimator;
struct MoonTimelineUiFader;
struct CleverMenuItem;
struct List_1_Moon_MoonReference_1__6;
struct List_1_ICleverMenuFadeObserver_;
struct Func_1_UnityEngine_Vector2_;
struct Int32__Array;
struct CleverMenuItemSelectionManager__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_CleverMenuItemSelectionManager_NavigationData_* Navigation;
    struct CageStructureTool* CopyFromCage;
    struct List_1_CleverMenuItem_* m_menuItems;
    CleverMenuItemSelectionManager_Direction__Enum ItemDirection;

    struct ActionMethod* OptionChangeAction;
    struct Action* OptionChangeCallback;
    struct Action* OptionPressedCallback;
    struct Action* OnBackPressedCallback;
    struct Action* OnXPressedCallback;
    struct Action* OnYPressedCallback;
    struct Action* OnBPressedCallback;
    struct Action* OnVisibilityChangedCallback;
    struct Action* OnRadialItemChanged;
    bool HighlightOnMouseOver;
    bool UnhighlightOnMouseLeave;
    bool DisableAudioTriggering;
    bool UseNewTimeline;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct MoonTimelineUiFader* Fader;
    bool AlwaysForceInitializeFade;
    bool KeepSelectedItemActiveWhenInactive;
    bool KeepMouseInteractionsWhenInactive;
    bool AlwaysHighlightCurrentMenuItem;
    bool HighlightOnEnable;
    int32_t Index;
    int32_t m_defaultIndex;
    struct CleverMenuItem* BackItem;
    struct ActionMethod* BackAction;
    float ButtonPressDelay;
    float AngleTolerance;
    bool m_isVisible;
    bool m_isActive;
    float m_buttonPressDelay;
    float m_nextPressDelay;
    float m_holdDelayDuration;
    float m_holdRemainingTime;
    float m_lastRadialClick;
    bool m_initialRadialDelay;
    struct Vector2 m_lastMenuAxis;
    int32_t m_menuAxisAngleDeltaDir;
    int32_t m_itemsPerCicle;
    bool OnlyDigipad;
    bool NoDiaganals;
    bool WrapAround;
    bool PlayDefaultNavigateSound;
    bool CheckIfActiveWhenSettingIndexToFirst;
    bool DisableKeyboardScrolling;
    bool UnhighlightOnBackPressed;
    bool m_ignoreRefreshVisible;
    struct List_1_Moon_MoonReference_1__6* FaderObservers;
    struct List_1_ICleverMenuFadeObserver_* m_resolvedFaderObservers;
    bool m_isHighlightVisible;
    bool _IsLocked_k__BackingField;
    bool m_waitForRelease;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Func_1_UnityEngine_Vector2_* MenuItemAxisOverride;
    struct Int32__Array* kGridDirections;
    struct Int32__Array* kGridDirectionsNoDiaganals;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Func_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_CleverMenuItemSelectionManager_NavigationData_.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_.h>
#include <Modloader/app/structs/List_1_ICleverMenuFadeObserver_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__6.h>
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_FWDDECL)
#include <Modloader/app/structs/CleverMenuItemSelectionManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItemSelectionManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
