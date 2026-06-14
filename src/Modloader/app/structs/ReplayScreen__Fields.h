#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ReplayScreen__Fields_DEFINED
struct SoundProvider;
struct ReplaySetting__Array;
struct CleverMenuItemGroup;
struct GameObject;
struct CleverMenuItemSelectionManager;
struct ReplayScreen__Fields {
    struct MenuScreen__Fields _;
    struct SoundProvider* OpenSound;
    struct SoundProvider* CloseSound;
    struct ReplaySetting__Array* BossReplaySettings;
    struct ReplaySetting__Array* EscapeReplaySettings;
    struct ReplaySetting__Array* CutsceneReplaySettings;
    struct ReplaySetting__Array* RaceReplaySettings;
    struct CleverMenuItemGroup* BossGroup;
    struct CleverMenuItemGroup* EscapeGroup;
    struct CleverMenuItemGroup* CutsceneGroup;
    struct CleverMenuItemGroup* RaceGroup;
    struct GameObject* LoremasterReplayItemPrefab;
    struct CleverMenuItemSelectionManager* Navigation;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplayScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_ReplayScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayScreen__Fields_FWDDECL)
#include <Modloader/app/structs/ReplayScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
