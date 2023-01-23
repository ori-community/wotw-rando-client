#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_DEFINED
struct SceneMetaData;
struct Transform;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct List_1_Moon_Setups_ChangeStateSetupHolder_;
struct __declspec(align(8)) SkipCutscene_OptionalSkipCutsceneSettings__Fields {
    struct SceneMetaData* SceneToPreload;
    struct SceneMetaData* SceneToForceUnload;
    struct Transform* TeleportPositionAfterSkip;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* TimelineAfterSkip;
    struct List_1_Moon_Setups_ChangeStateSetupHolder_* StateChanges;
};
#endif
#if !defined(IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Setups_ChangeStateSetupHolder_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkipCutscene_OptionalSkipCutsceneSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SkipCutscene_OptionalSkipCutsceneSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkipCutscene_OptionalSkipCutsceneSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
