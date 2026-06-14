#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogGroupSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogGroupSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroupSpawner__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_FrogGroupSpawner__Fields_DEFINED
struct FrogGroup;
struct FrogPlaceholder;
struct List_1_FrogPlaceholder_;
struct EntityPlaceholder_BaseEntityPlaceholderSettings;
struct FrogGroupSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct FrogGroup* Group;
    struct FrogPlaceholder* PlaceholderPrefab;
    struct List_1_FrogPlaceholder_* Placeholders;
    float SpacingBetweenPlaceholders;
    bool RespawnOnTimeout;
    bool RespawnOnScreen;
    float RespawnTime;
    float MinDistanceFromPlayer;
    bool UseZoneDifficulty;
    int32_t OverrideDifficulty;
    struct EntityPlaceholder_BaseEntityPlaceholderSettings* Settings;
    struct LayerMask GroundMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogGroupSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogGroupSpawner__Fields_FWDDECL
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings.h>
#include <Modloader/app/structs/FrogGroup.h>
#include <Modloader/app/structs/FrogPlaceholder.h>
#include <Modloader/app/structs/List_1_FrogPlaceholder_.h>
#endif
#undef IL2CPP_STRUCT_FrogGroupSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroupSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogGroupSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/FrogGroupSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogGroupSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
