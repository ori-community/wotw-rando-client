#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GamePlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GamePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GamePlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberAtlassingPlatform__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberAtlassingPlatform__Enum_DEFINED)
#define IL2CPP_STRUCT_GamePlaceholder__Fields_DEFINED
struct SceneRoot;
struct GameObject;
struct GamePlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    UberAtlassingPlatform__Enum AtlasPlatform;

    struct SceneRoot* SceneRoot;
    struct GameObject* GameControllerPrefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GamePlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_GamePlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_GamePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GamePlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GamePlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/GamePlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GamePlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
