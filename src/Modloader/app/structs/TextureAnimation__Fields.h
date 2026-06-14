#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimation__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureAnimation__Fields_DEFINED
struct AnimationMetaData;
struct List_1_MoonGuid_;
struct List_1_Atlas_;
struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_;
struct TextureAnimation__Fields {
    struct ScriptableObject__Fields _;
    float Speed;
    bool Loop;
    bool IgnoreTimeScale;
    struct AnimationMetaData* AnimationMetaData;
    struct List_1_MoonGuid_* FrameGuids;
    struct List_1_Atlas_* Atlases;
    struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_* m_guidToTex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMetaData.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_.h>
#include <Modloader/app/structs/List_1_Atlas_.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/TextureAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
