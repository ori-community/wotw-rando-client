#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorld__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorld__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorld__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_GameWorld__Fields_DEFINED
struct List_1_GameWorldArea_;
struct List_1_RuntimeGameWorldArea_;
struct RuntimeGameWorldArea;
struct HashSet_1_MoonGuid_;
struct List_1_MessageProvider_;
struct SerializedBooleanUberState;
struct PlayerUberStateDescriptor;
struct ConditionUberState;
struct MessageProvider;
struct GameWorld__Fields {
    struct SaveSerialize__Fields _;
    struct List_1_GameWorldArea_* Areas;
    struct List_1_RuntimeGameWorldArea_* RuntimeAreas;
    struct RuntimeGameWorldArea* CurrentArea;
    struct HashSet_1_MoonGuid_* m_revealedIcons;
    struct List_1_MessageProvider_* ObjectiveTextProviders;
    struct SerializedBooleanUberState* AllMapIconsRevealed;
    struct PlayerUberStateDescriptor* PlayerStats;
    struct ConditionUberState* GameFinishedState;
    struct MessageProvider* ObjectiveText;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameWorld__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameWorld__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/HashSet_1_MoonGuid_.h>
#include <Modloader/app/structs/List_1_GameWorldArea_.h>
#include <Modloader/app/structs/List_1_MessageProvider_.h>
#include <Modloader/app/structs/List_1_RuntimeGameWorldArea_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_GameWorld__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorld__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameWorld__Fields_FWDDECL)
#include <Modloader/app/structs/GameWorld__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorld__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
