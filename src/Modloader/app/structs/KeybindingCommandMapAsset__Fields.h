#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_DEFINED
struct CommandBinding;
struct List_1_KeybindingCommandMapAsset_ExclusiveCommandList_;
struct KeybindingCommandMapAsset__Fields {
    struct ScriptableObject__Fields _;
    struct CommandBinding* Up;
    struct CommandBinding* Down;
    struct CommandBinding* Left;
    struct CommandBinding* Right;
    struct CommandBinding* Ability1;
    struct CommandBinding* Ability2;
    struct CommandBinding* Ability3;
    struct CommandBinding* Dash;
    struct CommandBinding* Burrow;
    struct CommandBinding* Bash;
    struct CommandBinding* GrabRock;
    struct CommandBinding* Grapple;
    struct CommandBinding* Glide;
    struct CommandBinding* Interact;
    struct CommandBinding* Jump;
    struct CommandBinding* AdvanceDialogue;
    struct CommandBinding* DialogueOption1;
    struct CommandBinding* DialogueOption2;
    struct CommandBinding* DialogueOption3;
    struct CommandBinding* ExitDialogue;
    struct CommandBinding* OpenMapsAndShards;
    struct CommandBinding* OpenAreaMap;
    struct CommandBinding* OpenWorldMap;
    struct CommandBinding* OpenInventory;
    struct CommandBinding* OpenShards;
    struct CommandBinding* Pause;
    struct CommandBinding* ToggleWeaponWheel;
    struct CommandBinding* MenuUp;
    struct CommandBinding* MenuDown;
    struct CommandBinding* MenuLeft;
    struct CommandBinding* MenuRight;
    struct CommandBinding* MenuNextPage;
    struct CommandBinding* MenuPreviousPage;
    struct CommandBinding* MenuClose;
    struct CommandBinding* MenuBack;
    struct CommandBinding* MenuSelect;
    struct CommandBinding* Select;
    struct CommandBinding* Back;
    struct CommandBinding* Close;
    struct CommandBinding* MapUp;
    struct CommandBinding* MapDown;
    struct CommandBinding* MapLeft;
    struct CommandBinding* MapRight;
    struct CommandBinding* MapZoomIn;
    struct CommandBinding* MapZoomOut;
    struct CommandBinding* MapDetails;
    struct CommandBinding* MapFilter;
    struct CommandBinding* MapFocusOri;
    struct CommandBinding* MapFocusObjective;
    struct CommandBinding* LeaderboardCycleLeft;
    struct CommandBinding* LeaderboardCycleRight;
    struct CommandBinding* LeaderboardCycleFilter;
    struct CommandBinding* SignInToXBoxLive;
    struct CommandBinding* MenuCycleFilter;
    struct List_1_KeybindingCommandMapAsset_ExclusiveCommandList_* ExclusiveCommandLists;
    struct List_1_KeybindingCommandMapAsset_ExclusiveCommandList_* ExclusiveCommandExceptionLists;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_FWDDECL
#include <Modloader/app/structs/CommandBinding.h>
#include <Modloader/app/structs/List_1_KeybindingCommandMapAsset_ExclusiveCommandList_.h>
#endif
#undef IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeybindingCommandMapAsset__Fields_FWDDECL)
#include <Modloader/app/structs/KeybindingCommandMapAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeybindingCommandMapAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
