#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtBuildController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtBuildController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtBuildController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtBuildController__Fields_DEFINED
struct List_1_UnityEngine_Texture2D_;
struct GameObject;
struct LegacyAnimator__Array;
struct ArtBuildController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Texture2D_* SceneScreenshots;
    int32_t CurrentScene;
    struct GameObject* PauseDimmer;
    struct LegacyAnimator__Array* m_dimmerAnimators;
    int32_t MaxScreenshotWidth;
    int32_t MaxScreenshotHeight;
    bool m_menuVisible;
    bool m_loadingFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtBuildController__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArtBuildController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Texture2D_.h>
#endif
#undef IL2CPP_STRUCT_ArtBuildController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtBuildController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArtBuildController__Fields_FWDDECL)
#include <Modloader/app/structs/ArtBuildController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtBuildController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
