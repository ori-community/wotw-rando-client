#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuTabManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuTabManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuTabManager__Fields_DEFINED)
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuTabBackground__Enum_DEFINED)
#define IL2CPP_STRUCT_MenuTabManager__Fields_DEFINED
struct UISoundSettingsAsset;
struct List_1_MenuTabEntry_;
struct MoonTimelineUiFader;
struct GameObject;
struct LegacyTransparencyAnimator;
struct MenuTabManager__Fields {
    struct MonoBehaviour__Fields _;
    struct UISoundSettingsAsset* Sounds;
    struct List_1_MenuTabEntry_* Tabs;
    struct MoonTimelineUiFader* UiFader;
    struct GameObject* LegendUI;
    struct GameObject* LeftPageNameText;
    struct GameObject* RightPageNameText;
    int32_t m_currentTabIndex;
    bool m_mainMenuWasVisible;
    bool m_wasShowingPins;
    struct LegacyTransparencyAnimator* BlackBackgroundFadeAnimator;
    struct LegacyTransparencyAnimator* DarkBackgroundFadeAnimator;
    bool Loop;
    MenuTabBackground__Enum m_backgroundState;

    bool m_makeNextBackgroundFadeImediate;
    MenuTabBackground__Enum m_newState;

    bool m_wasPaused;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuTabManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_MenuTabManager__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_MenuTabEntry_.h>
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_MenuTabManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuTabManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MenuTabManager__Fields_FWDDECL)
#include <Modloader/app/structs/MenuTabManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuTabManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
