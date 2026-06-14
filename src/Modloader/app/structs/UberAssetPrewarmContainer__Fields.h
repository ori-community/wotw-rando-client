#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_DEFINED
struct List_1_UnityEngine_AnimationClip_;
struct List_1_UnityEngine_Texture2D_;
struct UberAssetPrewarmContainer__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_AnimationClip_* AnimationClips;
    struct List_1_UnityEngine_Texture2D_* Textures;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_AnimationClip_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Texture2D_.h>
#endif
#undef IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_FWDDECL)
#include <Modloader/app/structs/UberAssetPrewarmContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberAssetPrewarmContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
