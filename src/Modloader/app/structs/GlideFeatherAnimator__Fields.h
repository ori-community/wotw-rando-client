#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlideFeatherAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlideFeatherAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlideFeatherAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GlideFeatherAnimator__Fields_DEFINED
struct TextureAnimation__Array;
struct Atlas__Array;
struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_;
struct Mesh;
struct MeshFilter;
struct Renderer;
struct AtlasSpriteTextureBinder;
struct IPuppet;
struct GlideFeatherAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct TextureAnimation__Array* Animations;
    struct Atlas__Array* m_atlases;
    struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_* m_nameToFrames;
    struct Mesh* m_mesh;
    struct MeshFilter* m_meshFilter;
    struct Renderer* m_renderer;
    struct AtlasSpriteTextureBinder* m_binder;
    struct IPuppet* m_puppet;
    bool m_wasGliding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlideFeatherAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlideFeatherAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AtlasSpriteTextureBinder.h>
#include <Modloader/app/structs/Atlas__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_.h>
#include <Modloader/app/structs/IPuppet.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/TextureAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_GlideFeatherAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlideFeatherAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlideFeatherAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/GlideFeatherAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlideFeatherAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
